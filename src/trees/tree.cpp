//
// Created by jusung lee on 2018-05-02.
//

#include <iostream>

struct node {
    int data;
    struct node *left;
    struct node *right;
};



//You are given a binary tree rooted at 1.
// You have to find the mirror image of any node qi about node 1.
// If it doesn't exist then print -1.
int mirrorImage() {
    int n,q;
    std::cin >> n >> q;
    struct node * root;
    root = (node*)malloc(sizeof(node));


}