int Solution::isPalindrome(string A) {
    if(A.length() == 0)
        return 0;
    string k = "";
    for(char g : A){
        if(isdigit(g))
            k+=g;
        else if(isalpha(g))
            k+=tolower(g);
    }
    if(k.length() == 1)
        return 1;
    int i = 0;
    int j = k.length()-1;
    while(i<(k.length()/2)){
        if(k[i] != k[j])
            return 0;
        i++; j--;
    }
    return 1;
}