string Solution::solve(string A) {
    queue<int> alpha;
    string B = "";
    int arr[26] = {0};
    int i = 0;
    while(i<A.length()){
        if(arr[A[i]-'a']==0){
            alpha.push(A[i]);
            arr[A[i]-'a']++;
            B+=alpha.front();
            i++;
        }
        else{
            arr[A[i]-'a']++;
            if(!alpha.empty() && arr[alpha.front()-'a']>1)
                alpha.pop();
            else{
                B+=alpha.empty()==1?'#':alpha.front();
                i++;
            }
        }
    }
    return B;
}
