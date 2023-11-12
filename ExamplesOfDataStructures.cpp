#include <iostream>
#include <list>
#include <deque>

using namespace std;

// Array example
int numberArray[] = {1, 2, 3, 4};
char charArray[] = {'h', 'e', 'l', 'l', 'o'};

// Linked List example
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Linked list oluştur
Node* linkedList = new Node(1);
linkedList->next = new Node(2);
linkedList->next->next = new Node(3);

// Stack example
int stackArray[3];
int stackTop = -1;

// Stack'e eleman ekleme
void push(int element) {
    if (stackTop < 2) {
        stackArray[++stackTop] = element;
    }
}

// Stack'ten eleman çıkarma
int pop() {
    if (stackTop >= 0) {
        return stackArray[stackTop--];
    }
    return -1; // Stack boşsa -1 döndür
}

// Queue example
deque<int> queueDeque;

// Queue'ya eleman ekleme
void enqueue(int element) {
    queueDeque.push_back(element);
}

// Queue'dan eleman çıkarma
int dequeue() {
    if (!queueDeque.empty()) {
        int element = queueDeque.front();
        queueDeque.pop_front();
        return element;
    }
    return -1; // Queue boşsa -1 döndür
}

// Tree example
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

// Ağaç oluştur
TreeNode* tree = new TreeNode(1);
tree->left = new TreeNode(2);
tree->right = new TreeNode(3);

int main() {
    // Programın geri kalan kısmı
    return 0;
}
