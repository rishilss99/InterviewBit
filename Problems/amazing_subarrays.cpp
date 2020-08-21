int Solution::solve(string A) {
    int result = 0;
    for(int i = 0;i<A.length();i++){
        if(A[i]>=65 && A[i]<=85){
            if(A[i] == 'A' || A[i]  == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U')
                result+=(A.length()-i)%10003;
        }
        else if(A[i]>=97 && A[i]<=117){
            if(A[i] == 'a' || A[i]  == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
                result+=(A.length()-i)%10003;
        }
    }
    return result%10003;
}
