#include <bits/stdc++.h>
using namespace std;

struct node{
    int val, low, high;
    node* left = NULL;
    node* rigth = NULL;
};

class SegmentTree{
    public:
        node* root;

    SegmentTree(){
        root = new node();
    }

    void init(node* n, vector <int> &v, int lo, int hi){
        if(lo == hi){
            n -> val = v[lo];
            n -> low = lo;
            n -> high = hi;
            return;
        }

        int mi = (lo + hi) / 2;

        n -> left = new node();
        init(n -> left, v, lo, mi);

        n -> rigth = new node();
        init(n -> rigth, v, mi + 1, hi);

        n -> val = max(n -> rigth -> val, n -> left -> val);
        n -> low = lo;
        n -> high = hi;
    }

    void display(node* temp){
        if(temp == 0){
            return;
        }
        display(temp -> left);
        display(temp -> rigth);
        printf("lo: %d hi: %d max: %d\n", temp -> low, temp -> high, temp -> val);
    }

    int range(node* n, int lo, int hi){
        if(n == NULL){
            return INT_MIN;
        }
        if(n -> low >= lo && n -> high <= hi){
            return n -> val;
        }
        else if(n -> high < lo || n -> low > hi){
            return INT_MIN;
        }
        else{
            return max(range(n -> left, lo, hi), range(n -> rigth, lo, hi));
        }
    }

    void update(node* n, int ind, int x){
        //printf("->%d %d\n", n -> low, n -> high);
        if(n -> low == n -> high){
            n -> val = x;
            return;
        }
        if(ind <= n -> left -> high){
            update(n -> left, ind, x);
        }
        else{
            update(n -> rigth, ind, x);
        }
        n -> val = max(n -> left -> val, n -> rigth -> val);
    }
};

int main(){
    int n, q;
    scanf("%d", &n);
    vector <int> vec(n);
    for(int i = 0; i < n; i++){
        scanf("%d", &vec[i]);
    }
    SegmentTree tree;
    tree.init(tree.root, vec, 0, n - 1);
    scanf("%d", &q);
    /*for(int i = 0, l, r; i < q; i++){
        scanf("%d %d", &l, &r);
        printf("%d\n", tree.range(tree.root, l - 1, r - 1));
    }*/
    for(int i = 0, ind, x; i < q; i++){
        scanf("%d %d", &ind, &x);
        tree.update(tree.root, ind - 1, x);
        //tree.display(tree.root);
    }
    return 0;
}
