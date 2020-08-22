int Solution::romanToInt(string A) {
    map<char,int> key_mapping = {{'M',1000},{'D',500},{'C',100},{'L',50},{'X',10},{'V',5},{'I',1}};
    int i = 0;
    int num = 0;
    while(i<A.length()){
        if(i+1<A.length() && key_mapping[A[i+1]]>key_mapping[A[i]] ){
            num+=key_mapping[A[i+1]] - key_mapping[A[i]];
            i++;
        }
        else
            num+=key_mapping[A[i]];
        i++;
    }
    return num;
}
