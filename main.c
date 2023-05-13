#include "binary_tree.h"

int main(){
    binary_tree_t *b = init_tree(NULL, 50, NULL);

    addData(b, 15);
    addData(b, 80);
    addData(b, 45);
    addData(b, 32);
    addData(b, 54);
    addData(b, 89);
    addData(b, 66);
    addData(b, 72);


    print(b);


    return 0;
}