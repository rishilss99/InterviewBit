/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool compare(Interval a, Interval b){
    return a.start<b.start;
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> result;
    sort(A.begin(),A.end(),compare);
    int i = 0;
    while(i<A.size()){
        if(i<A.size()-1 && A[i+1].start<=A[i].end){
            Interval insert_new;
            insert_new.start = A[i].start;
            insert_new.end = A[i].end;
            while(i<A.size() && A[i].start<=insert_new.end){
                insert_new.end = max(insert_new.end, A[i].end);
                i++;
            }
            result.push_back(insert_new);
        }
        else{
            result.push_back(A[i]);
            i++;
        }
    }
    return result;
}
