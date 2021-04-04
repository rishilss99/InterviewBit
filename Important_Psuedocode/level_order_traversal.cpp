vector<int> Solution::levelorderTraversal(TreeNode* A) {
    vector<int> ans;
    queue<TreeNode*> order;
    order.push(A);
    while(!order.empty()){
        int size = order.size();
        for(int i = 0; i<size; i++){
            A = order.front();
            order.pop();
            ans.push_back(A->val);
            if(A->left)
                order.push(A->left);
            if(A->right)
                order.push(A->right);
        }
    }
    return ans;
}