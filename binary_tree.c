#include "binary_tree.h"


binary_tree_t *init_tree(binary_tree_t *left, int data, binary_tree_t *right){
    binary_tree_t *bt = (binary_tree_t*)calloc(1, sizeof(binary_tree_t));
    bt->left = left;
    bt->data = data;
    bt->right = right;
    return bt;
}


void free_tree(binary_tree_t **btp){
    binary_tree_t *bt = *btp;
    if (bt == NULL)
        return;
    free_tree(&(bt->left));
    free_tree(&(bt->right));
    free(bt);
}



void addData(binary_tree_t *bt, int data){
    if (data < bt->data){
        if (bt->left == NULL)
            bt->left = init_tree(NULL, data, NULL);
        else
            addData(bt->left, data);
    }
    else{
        if (bt->right == NULL)
            bt->right = init_tree(NULL, data, NULL);
        else
            addData(bt->right, data);     
    }
}



int contains(binary_tree_t *bt, int data){
    if (bt == NULL)
        return 0;
    else if (bt->data == data)
        return 1;
    else if (bt->data < data)
        return contains(bt->left, data);
    return contains(bt->right, data);
}


binary_tree_t *get_tree(binary_tree_t *bt, int data){
    if (bt == NULL)
        return NULL;
    else if (bt->data == data)
        return bt;
    else if (bt->data < data)
        return get_tree(bt->left, data);
    return get_tree(bt->right, data);
}


void print(binary_tree_t *bt){
    _print(bt, 0);
}


void _print(binary_tree_t *bt, int lvl){
    if (bt == NULL)
        return ;
    _print(bt->left, lvl+1);
    tabulate(lvl);
    printf("%d\n", bt->data);
    _print(bt->right, lvl+1);
}


void tabulate(int lvl){
    if (lvl <= 0)
        return;
    printf("    ");
    tabulate(lvl-1);
}
