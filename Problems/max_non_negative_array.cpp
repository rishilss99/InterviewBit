vector<int> Solution::maxset(vector<int> &A) {
    long long sum;
    long long max = -1;
    int index_max = 0;
    int length_max = -1;
    int length = 0;
    int i = 0;
    while(i<A.size()){
        if(A[i]>=0){
            int start_index = i;
            sum = 0;
            while(A[i]>=0 && i<A.size()){
                sum+=A[i];
                i++;
            }
            length = i - start_index;
            if(sum>max){
                max = sum;
                index_max = start_index;
                length_max = length;
            }
            else if(sum == max){
                if(length > length_max){
                    length_max = length;
                    index_max = start_index;
                }
            }
        }
        else{
            i++;
        }
    }
    vector<int> result;
    if(max == -1)
        return result;
    while(A[index_max]>=0 && length_max){
        result.push_back(A[index_max]);
        index_max++;
        length_max--;
    }
    return result;
    
}
