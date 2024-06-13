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

    //memberi akses modifier dan deklarasi object
public :
    Node* ROOT;

    //membuat constructor dan memberi nilai kepada object root
    BinaryTree() {
        ROOT = nullptr;
    }

    //membuat prosedur insert
    void insert(string element) {

        //memberi nilai untuk setiap object yang berada di dalam prosedur insert
        Node* newNode = new Node(element, nullptr, nullptr);
        newNode->info = element;
        newNode->leftChild = nullptr;
        newNode->rightChild = nullptr;

        Node* parent = nullptr;
        Node* currentNode = nullptr;
        search(element, parent, currentNode);
       
        //membuat conditional statement
        if (parent == nullptr) {
            ROOT = newNode;
            return;
        }

        if (element < parent->info)
        {
            parent->leftChild = newNode;
        }
        else if (element > parent->info)
        {
            parent->rightChild = newNode;
        }
    }

    //membuat dan mendefinisikan prosedur search
    void search(string element, Node*& parent, Node*& currentNode) {
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode != nullptr) && (currentNode->info != element))
        {

            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftChild;
            else
                currentNode = currentNode->rightChild;  

        }
    }

    //membuat dan mendefinisikan prosedur inorder
    void inorder(Node* ptr) {

        if (ROOT == nullptr) {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != nullptr) {
            inorder(ptr->leftChild);
            cout << ptr->info << " ";
            inorder(ptr->rightChild);
        }
    }

    //membuat dan mendefinisikan prosedur preorder
    void preorder(Node* ptr) {

        if (ROOT == nullptr) {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != nullptr) {
            cout << ptr->info << " ";
            preorder(ptr->leftChild);
            preorder(ptr->rightChild);
        }

    }

};

int main()
{
    
}
