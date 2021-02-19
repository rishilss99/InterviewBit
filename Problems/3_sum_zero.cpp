vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector<vector<int>> ans;
    sort(A.begin(), A.end());
    // for(int k : A)
    //     cout<<k;
    int i = 0;
    int curr = 20202020;
    while(i<A.size()){
        // cout<<A[i]<<" ";
        if(A[i]==curr)
            ;
        else{
            // cout<<"Hey"<<endl;
            int j = i+1;
            int k = A.size()-1;
            int curr_j = 202020;
            int curr_k = 202020;
            while(j<k){
                cout<<A[i]<<" "<<A[j]<<" "<<A[k]<<endl;
                if((A[i]!=INT_MIN && A[i]+A[j]+A[k]==0) || (A[i]==INT_MIN && A[k]==INT_MAX && A[j]==1)){
                    cout<<A[i]<<" "<<A[j]<<" "<<A[k]<<endl;
                    if(A[j]!=curr_j&&A[k]!=curr_k){
                        ans.push_back({A[i],A[j],A[k]});
                        curr_j=A[j];    
                        curr_k=A[k];
                    }
                    if(A[j]==curr_j)
                        j++;
                    if(A[k]==curr_k)
                        k--;
                }
                else if(A[i]+A[j]+A[k]>0)
                    k--;
                else
                    j++;
                
            }
        }
        curr= A[i];
        i++;
    }

    return ans;
}
