//
//  main.cpp
//  BinaryTree-Exercise
//
//  Created by Thitima Srivatanakul on 10/17/18.
//  Copyright © 2018 Thitima Srivatanakul. All rights reserved.
//

#include <iostream>

struct node {
	int element;
	node *left;
	node *right;
	//uncomment this code for Q2
	node(int element){
	this->element = element;
	left= right=NULL;
	}
};

int main(int argc, const char * argv[]) {

	//Create a root node for Q1
	node *root = new node(5);
	root->left = new node(3);
	root->right = new node(9);
	root->left->left = new node(8);
	root->left->right = new node(4);
	root->right->right = new node(2);
	/*
	OR if you want to avoid writing left and right over and over, do this:
	node *root = new node(5);
	node *nodeThree = new node(3);
	root->left = nodeThree;
	node *nodeNine = new node(9)
	root->right = nodeNine;
	node *nodeEight = new node(8);
	nodeThree->left = nodeEight;
	node *nodeFour = new node(4);
	nodeThree>right = nodeFour;
	node *nodeTwo = new Node(2);
	nodeNine->right = nodeTwo;
	*/



	system("pause");
	return 0;
}