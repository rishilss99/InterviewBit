int Solution::solve(string A) {
    
    bool check = true;
    for(int i = 0; i< (A.length()/2);i++){
        if(A[i] != A[A.length()-1-i])
            check = false;
    }
    if(check)
        return 1;
    int i = 0;
    int j = A.length()-1;
    int count = 0;
    while(j>=i){
        // cout<<A[i]<<" "<<A[j]<<endl;
        if(A[i]!=A[j]){
            if(count==0){
                i++;
                count++;
            }
            else if(count==1){
                i--;
                j--;
                count++;
            }
            else
                return 0;
        }
        else{
            i++;
            j--;
        }
        
    }
    return 1;
    
}

