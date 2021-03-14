vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    int maxi = INT_MIN;
    vector<int> ans;
    if(B>=A.size()){
        for(int k: A)
            maxi=max(maxi,k);
        ans.push_back(maxi);
        return ans;
    }
    int i = 0;
    int j = 0;
    deque<int> max_queue;
    while(j<B){
        if(max_queue.empty() || max_queue.front() == A[j]){
            max_queue.push_front(A[j]);
        }
        else if(A[j]>max_queue.front()){
            max_queue.clear();
            max_queue.push_front(A[j]);
        }
        else if(A[j]<max_queue.front()){
            while(max_queue.back()<A[j]){
                max_queue.pop_back();
            }
            max_queue.push_back(A[j]);
        }
        j++;
    }
    while(j<A.size()){
        ans.push_back(max_queue.front());
        if(max_queue.front()==A[i])
            max_queue.pop_front();
        if(max_queue.empty() || max_queue.front() == A[j]){
            max_queue.push_front(A[j]);
        }
        else if(A[j]>max_queue.front()){
            max_queue.clear();
            max_queue.push_front(A[j]);
        }
        else if(A[j]<max_queue.front()){
            while(max_queue.back()<A[j]){
                max_queue.pop_back();
            }
            max_queue.push_back(A[j]);
        }
        i++;
        j++;
    }
    ans.push_back(max_queue.front());
    return ans;
}
