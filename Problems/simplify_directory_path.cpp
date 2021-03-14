string Solution::simplifyPath(string A) {
    int i = 0;
    stack<string> path;
    string temp = "";
    while(i<=A.length()){
        if(i==A.length() || A[i]=='/'){
            if(temp.length()!=0){
                if(temp==".")
                    ;
                else if(temp==".."){
                    if(!path.empty())
                        path.pop();
                }
                else{
                    path.push(temp);
                }
                temp = "";
            }
        }
        else
            temp+=A[i];
        i++;
    }
    string ans = "";
    string add = "/";
    while(!path.empty()){
        add+=path.top();
        add+=ans;
        ans=add;
        add="/";
        path.pop();
    }
    return ans;
}
