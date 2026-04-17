class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return nullptr;
        connectNodes(root->left, root->right);
        return root;
    }
    void connectNodes(Node* node1, Node* node2) {
        if (!node1 || !node2) return;
        node1->next = node2;    
        connectNodes(node1->left, node1->right);
        connectNodes(node2->left, node2->right);
        connectNodes(node1->right, node2->left);
    }
};
