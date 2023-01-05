#include <iostream>
#include "tree.h"

using namespace std;

int main(){
    adrNode root = NULL;

    int x[9]={5,3,9,10,4,7,1,8,6};

    for (int i=0; i<9; i++){
        adrNode new_node = newNode_1301213518(x[i]);
        root = insertNode_1301213518(root, new_node);
    }

    cout<<"========================================================"<<endl;
    for (int i = 0; i < 9; i++) {
        cout << x[i] << " ";
    }
    cout<<endl;

    printf("\n");
    printf("\nPre Order\t: ");
    printPreOrder_1301213518(root);

    printf("\n");
    printf("\nDescendent of Node 9\t: ");
    printDescendant_1301213518(root, 9);

    printf("\n");
    printf("\nSum of BST Info\t: ");
    sumNode_1301213518(root);

    printf("\nNumber of Leaves\t: ");
    countLeaves_1301213518(root);

    printf("\nHeight of Tree\t\t: ");
    heightTree_1301213518(root);
    cout<<"========================================================"<<endl;

    return 0;
}
