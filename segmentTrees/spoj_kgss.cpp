#include <stdio.h>
#include <utility>
#include <vector>

using namespace std;

class SegmentTree {
  public:
    struct node {
      int low, high;
      // Will contain highest in 
      pair<int, int> value = make_pair(0, 0);
      node *left = NULL, *right = NULL;
    };

    node *root;
    
    SegmentTree() {
      root = new node();
    }

    pair<int, int> getMax(pair<int, int> a, pair<int, int> b) {
      // No overlap.
      if(a.second > b.first) {
        return a;
      }
      if(b.second > a.first) {
        return b;
      }

      // Partial overlap.
      pair<int, int> ans;
      if(a.first > b.first) {
        ans.first = a.first;
        ans.second = b.first;
      } else {
        ans.first = b.first;
        ans.second = a.first;
      }

      return ans;
    }

    void init(node *n, vector<int> &v, int low, int high) {
      // If leaf.
      if(low == high) {
        n->value.first = v[low];
        n->low = low;
        n->high = high;
        return;
      } 

      int mid = (low + high) / 2;

      n->left = new node();
      init(n->left, v, low, mid);

      n->right = new node();
      init(n->right, v, mid+1, high);

      n->value = getMax(n->right->value, n->left->value);
      n->low = low;
      n->high = high;
    }

    pair<int, int> query(node *n, int low, int high) {
      if(n == NULL) {
        return make_pair(0, 0);
      }

      // No overlap.
      if(n->low > high || n->high < low)
        return make_pair(0, 0);

      // If current node is within looking for range.
      if(n->low >= low && n->high <= high)
        return n->value;

      return getMax(query(n->left, low, high), query(n->right, low, high));
    }

    void update(node *n, int idx, int val) {
      // If leaf.
      if(n->low == n->high) {
        n->value.first = val;
        return;
      }

      if(idx <= n->left->high) {
        update(n->left, idx, val);
      } else {
        update(n->right, idx, val);
      }
    
      n->value = getMax(n->left->value, n->right->value);
    }

};

int main() {

  int n, tmp, op, a, b;
  char c;
  vector<int> v;

  scanf("%d", &n);
  for(int i = 0; i < n; ++i) {
    scanf("%d", &tmp);
    v.push_back(tmp); 
  }

  SegmentTree st;
  st.init(st.root, v, 0, n-1);

  scanf("%d", &op);
  scanf("%c", &c);
  for(int i = 0; i < op; ++i) {
    scanf("%c %d %d", &c, &a, &b);
    if(c == 'Q') {
      pair<int, int> ans = st.query(st.root, a-1, b-1);
      printf("%d\n", ans.first+ans.second);
    }
    if(c == 'U') {
      st.update(st.root, a-1, b);
    }
    // New line.
    scanf("%c", &c);
  }
}
