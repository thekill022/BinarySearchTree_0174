#include <iostream>
using namespace std;

//membuat class node
class Node {

    //memberi akses modifier serta mendeklarasi variabel dan object node
public :
    string info;
    Node* leftChild;
    Node* rightChild;


    //membuat constructor untuk class node
    Node(string i, Node* l, Node* r) {
        //memberi nilai parameter ke variabel
        info = i;
        leftChild = l;
        rightChild = r;
    }

};


//membuat class BinarTree
class BinaryTree {

};

int main()
{
    
}
