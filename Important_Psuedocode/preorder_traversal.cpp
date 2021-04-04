vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> ans;
    if(!A)
        return ans;
    stack<TreeNode*> nodes;
    nodes.push(A);
    while(!nodes.empty()){
        A = nodes.top();
        nodes.pop();
        ans.push_back(A->val);
        if(A->right)
            nodes.push(A->right);
        if(A->left)
            nodes.push(A->left);
    }
    return ans;
}