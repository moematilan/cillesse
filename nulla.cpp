bool m_search(int find, Node *node) {
    // Base case: if the current node is null, return false
    if (node == nullptr) {
        return false;
    }
    
    // Check if the current node's value matches the target value
    if (node->value == find) {
        return true;
    }
    
    // Recursively search in the left and right subtrees
    bool foundLeft = m_search(find, node->left);
    bool foundRight = m_search(find, node->right);
    
    // Return true if the value is found in either subtree
    return foundLeft || foundRight;
}
