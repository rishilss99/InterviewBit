vector<int> factorial(vector<int> result, int A){
    int i = 0;
    vector<int> temp;
    while(i<result.size()){
        temp.push_back(result[i]*A);
        i++;
    }
    for(int j = 0;j<temp.size();j++){
        int num = temp[j]/10;
        int k = 1;
        temp[j] = temp[j]%10;
        while(num){
            if(j+k < temp.size()){
                temp[j+k]+=num%10;
            }
            else
                temp.push_back(num%10);
            num/=10;
            k++;
        }
    }
    return temp;
}

string Solution::solve(int A) {
    if(A == 1){
        return "1";
    }
    vector<int> result = {1};
    int n = 2;
    while(n <= A){
        result = factorial(result, n);
        n++;
    }
    string answer = "";
    reverse(result.begin(),result.end());
    for(int i : result)
        answer+= '0' + i;
    return answer;
}
