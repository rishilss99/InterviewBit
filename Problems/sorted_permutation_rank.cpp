long factorial(int num){
    if(num==0)
        return 1;
    return num*factorial(num-1)%1000003;
}

int Solution::findRank(string A) {
    long position = 1;
    int len = A.length();
    vector<char> array (52,'.');
    for(char k : A){
        if(k<91)
            array[ k - 'A'] = k;
        else
            array[26 + k - 'a'] = k;
    }
    int i = 0;
    while(i<A.length()){
        // cout<<A[i]<<endl;
        for(int j = 0;j<52;j++){
            if(array[j] == '.')
                continue;
            else if(array[j] == A[i]){
                array[j] = '.';
                i++;
                break;
            }
            position += factorial(A.length()-i-1)%1000003;
        }
    }
    return position%1000003;
}
