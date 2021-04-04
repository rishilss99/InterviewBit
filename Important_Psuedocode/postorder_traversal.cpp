vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> ans;
    if(!A)
        return ans;
    stack<TreeNode*> nodes;
    nodes.push(A);
    while(!nodes.empty()){
        A = nodes.top();
        nodes.pop();
        ans.push_back(A->val);
        if(A->left)
            nodes.push(A->left);
        if(A->right)
            nodes.push(A->right);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}