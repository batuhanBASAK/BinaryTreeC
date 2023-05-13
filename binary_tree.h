#ifndef BIN_TREE_H
#define BIN_TREE_H

#include <stdio.h>
#include <stdlib.h>


/* Binary tree data type. */
struct binary_tree{
    struct binary_tree *left;
    int data;
    struct binary_tree *right;
};

typedef struct binary_tree binary_tree_t;


// Initialize a tree from scratch.
binary_tree_t *init_tree(binary_tree_t *left, int data, binary_tree_t *right);


// Deallocates memory that stores tree.
void free_tree(binary_tree_t **btp);

// Adds a new data to tree.
void addData(binary_tree_t *bt, int data);

// Checks whether tree contains given data or not.
int contains(binary_tree_t *bt, int data);

// Finds and returns the node whose data is given data in tree.
binary_tree_t *get_tree(binary_tree_t *bt, int data);

// Prints tree inorder.
void print(binary_tree_t *bt);

// The helper functions for printing tree.
void _print(binary_tree_t *bt, int lvl);
void tabulate(int lvl);



#endif