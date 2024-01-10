#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node *left, *right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Preorder traversal
void preorderTraversal(struct Node* node) {
    if (node == NULL)
        return;

    cout << node->data << "->";

    preorderTraversal(node->left);
    preorderTraversal(node->right);
}
// Postorder traversal
void postorderTraversal(struct Node* node) {
    if (node == NULL)
        return;

    postorderTraversal(node->left);
    postorderTraversal(node->right);

    cout << node->data << "->";
}

// Inorder traversal
void inorderTraversal(struct Node* node) {
    if (node == NULL)
        return;

    inorderTraversal(node->left);
    cout << node->data << "->";
    inorderTraversal(node->right);
}
