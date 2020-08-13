void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp; 
}

void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int min = 0; int max = A.size()-1;
    
    while(min<=max){
        
        swap(A[min][min],A[max][min]);
        swap(A[max][min],A[max][max]);
        swap(A[max][max],A[min][max]);
        
        for(int i = 1;i<max-min;i++)
            swap(A[min][min+i],A[max-i][min]);
        

        for(int k = 1;k<max-min;k++)
            swap(A[min+k][min],A[max][min+k]);
        for(int j = 1;j<max-min;j++)
            swap(A[max][min+j],A[max-j][max]);
        min++; max--;
    }
    

}
