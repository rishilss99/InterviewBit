int Solution::maxArea(vector<int> &A) {
    if(A.size()==1)
        return 0;
    int i = 0;
    int j = A.size()-1;
    int max = INT_MIN;
    while(j>i){
        int area = min(A[i],A[j])*(j-i);
        max = area>max?area:max;
        if(A[j]>A[i])
            i++;
        else
            j--;
    
    }
    return max;
}
