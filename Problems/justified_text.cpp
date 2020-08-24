vector<string> Solution::fullJustify(vector<string> &A, int B) {
    
    vector<string> result;
    if(A.size() == 0){
        return result;
    }
    int i = 0, j = 0;
    while(i<A.size()){
        result.push_back(A[i]);
        int len = -1;
        while(j<A.size() && (len + 1 + A[j].length())<=B){
            len += (1 + A[j].length());
            j++;
        }
        // cout<<j<<" "<<i<<endl;
        // cout<<len<<endl;
        int next_words = j-i-1;;  //This is also equal to the no. of slots between words
        int total_spaces = B - len;
        if(next_words>0 && j<A.size()){
            int extra_spaces = total_spaces%next_words;
            while(i<j-1){
                int k = 0;
                while(k<(total_spaces/next_words + (extra_spaces > 0)) ){
                    result.back()+=' ';
                    k++;
                }
                extra_spaces--;
                i++;
                result.back()+=' ';
                result.back()+=A[i];
            }
        }
        else if(next_words == 0 && j<A.size()){
            while(total_spaces){
                result.back()+=' ';
                total_spaces--;
            }
        }
        else if(j == A.size()){
            i++;
            break;
        }
        i++;
    }
    while(i<A.size()){
        result.back()+=' ';
        result.back()+=A[i];
        i++;
    }
    while(result.back().length()<B)
        result.back()+=' ';
    return result;
    
}
