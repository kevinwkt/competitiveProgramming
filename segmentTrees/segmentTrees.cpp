#include <stdio.h>

using namespace std;

class SegmentTree {

	public:
		struct node {
			int low, high;
			int property;
			node *left, *right;
		};

		node* root;

		SegmentTree() {
			root = new node();
		}

		void init(int low, int high, vector<int> &data, node* n) {
			if(low == high) {
				n->property = data[low];
				n->low = low;
				n->high = high;
				return;
			}

			n->left = new node();
			n->right = new node();

			int mid = (high-low)/2+low;

			initialize(low, mid, data, &n->left); 
			initialize(mid+1, high, data, &n->right); 

			n->property = n->left->property + n->right->property;	
			n->low = low;
			n->high = high;
		}

		void update (int index, int value, node *n) {
			// If index out of node range.
			if(n->low > index || n->high < index) {
				return;
			}

			// If index is at leaf.
			if(index == n->low && n->high == index) {
				n->property = value;
				return;
			}

			update(index, value, n->left);
			update(index, value, n->right);

			n->property = n->right->property + n->left->property;
		}

		int query (int low, int high, node *n) {
			if(n->low > high || n->high < low) {
				return 0;
			}

			if(n->low >= low && n->high <= high) {
				return n->property;
			}

			return query(low, high, n->left) + query(low, high, n->right);
		}
}
