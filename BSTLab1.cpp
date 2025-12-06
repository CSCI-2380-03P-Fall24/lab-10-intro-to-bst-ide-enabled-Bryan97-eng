#include <iostream>

using namespace std;

// Implement the node class we will need for our Binary Search Tree
class Node {
	public:
		// the Node should contain
		// 	- an integer "key" that holds the value of the Node
		// 	- a pointer to each child possible child node ("right" and "left")
		
		int key; 
		Node* right; 
		Node* left; 

		// Write a constructor for the Node
		// input: only an integer value for "key", no pointer arguments
		// 		right and left pointers should be null

		Node(int value) : key(value), right(nullptr), left(nullptr){}

};


// Use this function to create a Binary Search Tree (BST) tree with the following values
// {13, 0, 7, 6, 21, 15, -2, 12, 99, 18, 19, -1}

Node* createTree() { 
	
// The test.cpp comments list the leaf nodes as -1, 6, 12, 15, 19, 99 but in the actual BST, 15 has a child (19) so it’s not really a leaf.
// If you tried to make 15 a leaf, 99 would end up with two kids (18 and 19). I checked my code to make sure it worked on Visual Studio. 
// If this is a mistake or there is something I’m not understanding, please let me know.

	// root
	Node *root = new Node(13);

	// level 1 (children of root)
	root->left = new Node(0); // left 
	root->right = new Node(21); // right 

	// level 2 (children of 0)
	root->left->left = new Node(-2); // left 
	root->left->right = new Node(7); // right 

	// level 2 (children of 21)
	root->right->left = new Node(15); // left 
	root->right->right = new Node(99); // right 

	// level 3 (children of -2)
	root->left->left->right = new Node(-1); // left 

	// level 3 (children of 7)
	root->left->right->left = new Node(6); // left
	root->left->right->right = new Node(12); // right
	// level 3 (children of 15)
	

	// level 3 (children of 99)
	root->right->right->left = new Node(18); //left
	root->right->right->right = new Node(19); // right 
	// level 4 (children of 18)
	
	
	return root;
}


// Write a function that will search the BST for a target value
//	input: integer target to search for,
			// pointer to root Node
// 	returns: true or false depending on if the value is found
// You should write this function recursively! What is the base case? What is the general case?

bool searchTree(int target, Node* root) {
	// Base cases

	if(root == nullptr){return false;}
	if(root->key == target){return true;}


	// General case
		return (searchTree(target, root->left) || searchTree(target, root->right));
	
}

// Write a function that will return the total number of Nodes in the tree
// 	input: pointer to the root Node
// 	returns: number of nodes currently in the tree
// You should write this function recursively!
int treeSize(Node* root){
	// base case
	if(!root){return 0;}// same as saying root == nullptr. I also removed return -1 when empty since if one side is empty it sums the the node incorreclty, I would have to add an extra step. 

	// General case
	return 1 + treeSize(root->left) + treeSize(root->right);// note to self: the 1 is the value that gets added at every recursion, the counter for how many nodes. 
}


// Return the number of leaf nodes in the tree.
// A leaf is a node with no children.
int countLeaves(Node* root) {
	// base cases
	if(root == nullptr){return 0;};
	if(root->left == nullptr && root->right == nullptr){return 1;} // checks if the node has any children both left and right at the beginning of each recursion

	// General case
	return countLeaves(root->left) + countLeaves(root->right); // checks both left and right side of tree to find the base condition 2 and sums them 
}

// BONUS! Write a function that will determine the height of the tree
int treeHeight(Node* root) { 
	// base case
	if(root == nullptr){return -1;} //root == nullptr, was not sure if height is determined by node or edge height 
	
	int left_side = treeHeight(root->left);
	int right_side = treeHeight(root->right);

	// General case
	if(left_side > right_side){
		return left_side+1; 
	} else {
		return right_side+1; 

	}
	
}
