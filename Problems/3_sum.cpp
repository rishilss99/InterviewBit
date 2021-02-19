int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    if(A.size()<2)
        return -1;
    int min = B<0?INT_MIN:INT_MAX;
    for(int k = 0; k<A.size()-2; k++){
        int i = k+1;
        int j = A.size()-1;
        int num = B - A[k];
        // cout<<A[k]<<endl;
        while(j>i){
            // cout<<A[i]<<" "<<A[j];
            if(A[i] + A[j] == num && i!=j)
                return B;
            min = abs(num-A[i] - A[j])<abs(min-B)?(A[i] + A[j] + A[k]):min;
            // cout<<min<<endl;
            if(A[i] + A[j]< num)
                i++;
            else
                j--;
        }
    }
    return min;
}

// int Solution::threeSumClosest(vector<int> &A, int B) {
//     sort(A.begin(), A.end());
//     int j = A.size()-1;
//     int min = B<0?INT_MIN:INT_MAX;
//     for(int i = 0; i<A.size(); i++){
//         for(;j>i;j--){
//             // cout<<A[i]<<" "<<A[j]<<" ";
//             int third = binary_search(A, B- A[i] - A[j], i+1, j-1);
//             // cout<<third<<endl;
//             if(A[i] + A[j] + third == B)
//                 return B;
//             else
//                 min = abs(B-(A[i] + A[j] + third))<abs(B-min)?(A[i] + A[j] + third):min;
//             if(A[i] + A[j] < B)
//                 break;
//         }
//     }
//     return min;
        
// }