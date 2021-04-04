vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> ans;
    stack<TreeNode*> nodes;
    while(A!=NULL || !nodes.empty()){
        while(A!=NULL){
            nodes.push(A);
            A=A->left;
        }
        A = nodes.top();
        nodes.pop();
        ans.push_back(A->val);
        A = A->right;
    }
}