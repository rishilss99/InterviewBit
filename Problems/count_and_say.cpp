string Solution::countAndSay(int A) {
    string result = "1";
    A--;
    while(A){
        int i = 1;
        char curr = result[0];
        int count = 1;
        string temp = "";
        while(i<result.length()){
            if(result[i] == curr){
                count++;
            }
            else{
                temp+=to_string(count) + curr;
                curr = result[i];
                count = 1;
            }
            i++;
        }
        temp += to_string(count) + curr;
        result = temp;
        A--;
    }
    return result;
}