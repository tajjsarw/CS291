//
//  main.cpp
//  TreeTraversal
//
//  Created by Thitima Srivatanakul on 8/10/18.
//  Copyright © 2018 Thitima Srivatanakul. All rights reserved.
//

#include <iostream>
using namespace std;

struct node {
	int element;
	node *left;
	node *right;
	node(int element) {
		this->element = element;
		left = right = NULL;
	}
};
void process(int element) {
	cout << element << std::endl;
}



void inorderTraversal(node * n) {
	if (n == NULL) return;
	inorderTraversal(n->left);
	process(n->element);
	inorderTraversal(n->right);
}


//insert code here for preorderTraversal
void preorderTraversal(node * n) {
	if (n == NULL) return;
	process(n->element);
	preorderTraversal(n->left);
	preorderTraversal(n->right);


}

//insert code here for postorderTraversal
void postorderTraversal(node * n) {
	if (n == NULL) return;
	postorderTraversal(n->left);
	postorderTraversal(n->right);
	process(n->element);



}




int main(int argc, const char * argv[]) {
	node *root = new node(1);
	node *node2 = new node(2);
	node *node3 = new node(3);
	node *node4 = new node(4);
	node *node5 = new node(5);
	node *node6 = new node(6);
	node *node7 = new node(7);
	node *node8 = new node(8);
	node *node9 = new node(9);


	//Create your tree here
	root->left = node2;
	root->left->left = node4;
	root->left->right = node5;
	root->left->right->left = node7;
	root->left->right->right = node8;
	root->right = node3;
	root->right->right = node6;
	root->right->right->right = node9;










	cout << "#### INORDER TRAVERSAL #####";

	inorderTraversal(root);


	cout << "#### PREORDER TRAVERSAL #####";

	preorderTraversal(root);

	cout << "#### POSTORDER TRAVERSAL #####";

	postorderTraversal(root);
	
	system("pause");
	return 0;
}
