#include <bits/stdc++.h>
using namespace std;

struct node{
    int val, lazy, low, high;
    node* left = NULL;
    node* rigth = NULL;
};

class LazySegmentTree{
    public:
        node* root;

    LazySegmentTree(){
        root = new node();
    }

    void init(node* n, vector <int> &v, int lo, int hi){
        if(lo == hi){
            n -> val = v[lo];
            n -> low = lo;
            n -> high = hi;
            n -> lazy = 0;
            return;
        }

        int mi = (lo + hi) / 2;

        n -> left = new node();
        init(n -> left, v, lo, mi);

        n -> rigth = new node();
        init(n -> rigth, v, mi + 1, hi);

        n -> val = min(n -> left -> val, n -> rigth -> val);
        n -> low = lo;
        n -> high = hi;
        n -> lazy = 0;
    }

    void updateRange(node* n, int lo, int hi, int x){
        if(n == NULL){
            return;
        }
        n -> val += n -> lazy;
        if(n -> left != NULL){
            n -> left -> lazy += n -> lazy;
        }
        if(n -> rigth != NULL){
            n -> rigth -> lazy += n -> lazy;
        }
        n -> lazy = 0;
        if(n -> low >= lo && n -> high <= hi){
            n -> val += x;
            if(n -> left != NULL){
                n -> left -> lazy += x;
            }
            if(n -> rigth != NULL){
                n -> rigth -> lazy += x;
            }
            return;
        }
        else if(n -> low > hi || n -> high < lo){
            return;
        }
        else{
            updateRange(n -> left, lo, hi, x);
            updateRange(n -> rigth, lo, hi, x);
        }
        n -> val = max(n -> left -> val, n -> rigth -> val);
    }

    int query(node* n, int lo, int hi){
        if(n == NULL){
            return INT_MAX;
        }
        if(n -> left != NULL){
            n -> left -> lazy += n -> lazy;
        }
        if(n -> rigth != NULL){
            n -> rigth -> lazy += n -> lazy;
        }
        n -> val += n -> lazy;
        n -> lazy = 0;
        if(n -> low >= lo && n -> high >= hi){
            return n -> val;
        }
        else if(n -> high < lo || n -> low > hi){
            return INT_MAX;
        }
        else{
            return min(query(n -> left, lo, hi), query(n -> rigth, lo, hi));
        }
    }
};

int main(){
    int n, m;
    vector <int> vec;
    scanf("%d", &n);
    for(int i = 0, act; i < n; i++){
        scanf("%d", &act);
        vec.push_back(act);
    }
    LazySegmentTree tree;
    tree.init(tree.root, vec, 0, n - 1);
    scanf("%d", &m);
    for(int i = 0, t, a, b, x; i < m; i++){
        scanf("%d", &t);
        if(t == 1){
            scanf("%d %d", &a, &b);
            printf("%d\n", tree.query(tree.root, a, b));
        }
        else{
            scanf("%d %d %d", &a, &b, &x);
            tree.updateRange(tree.root, a, b, x);
        }
    }
    return 0;
}
