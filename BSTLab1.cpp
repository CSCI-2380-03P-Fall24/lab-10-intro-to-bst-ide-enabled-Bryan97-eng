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
	// root
	Node *root = nullptr;

	// level 1 (children of root)
	Node(0); // left 
	Node(21); // right 

	// level 2 (children of 0)
	Node(-2); // left 
	Node(7); // right 

	// level 2 (children of 21)
	Node(18);
	Node(99); 

	// level 3 (children of -2)
	Node(-1); 

	// level 3 (children of 7)
	Node(6); 

	// level 3 (children of 15)
	Node(13); 

	// level 3 (children of 99)
	Node()

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
	return false;

	// General case
	return false;
	
}

// Write a function that will return the total number of Nodes in the tree
// 	input: pointer to the root Node
// 	returns: number of nodes currently in the tree
// You should write this function recursively!
int treeSize(Node* root) {
	// base case
	return -1;

	// General case
	return -1;

}


// Return the number of leaf nodes in the tree.
// A leaf is a node with no children.
int countLeaves(Node* root) {
	// base case
	return -1;

	// General case
	return -1;
}

// BONUS! Write a function that will determine the height of the tree
int treeHeight(Node* root) {
	// base case
	return -1;

	// General case
	return -1;
}
