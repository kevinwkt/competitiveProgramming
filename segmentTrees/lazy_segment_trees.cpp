#include <stdio.h>

using namespace std;

class LazySegmentTree {

  public:

    struct node {
      int low, high, value, lazy;
      node *right = NULL, *left = NULL;
    };

    node *root;
    
    LazySegmentTree() {
      root = new node();
    }

    // Construct segment tree.
    void init(node *n, vector<int>) {
        
    }

    void updateRange(node *n, int low, int high, int value) {

    }

    int query(node *n, int low, int high) {

    }
}

int main() {
}
