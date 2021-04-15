#include <bits/stdc++.h>
using namespace std;
void heap_sort(vector<int> &);

int main() {
    // Write C++ code here
    cout<<"Hello World"<<endl;
    vector<int> input = {3,5,7,4,5,8,10,7,4,14,46,2,5,1,3,6,3};
    heap_sort(input);
    for(int k: input)
        cout<<k<<" ";
    return 0;
}

void heap_sort(vector<int> &A){
    
    // Creating a Heap O(nlogn)
    for(int i = 0; i<A.size(); i++){
        while((i-1)/2>=0 && A[i]>A[(i-1)/2]){
            swap(A[i],A[(i-1)/2]);
            i = (i-1)/2;
        }
    }

    // Deleting elements for Heap Sort O(nlogn)
    int node, left, right, child;
    for(int k = A.size()-1; k>0; k--){
        swap(A[0],A[k]);
        node = 0;
        left = 2*node+1;
        right = 2*node+2;
        while((left<k && A[node]<A[left]) || (right<k && A[node]<A[right])){
            if(right<k)
                child = A[left]>A[right]?left:right;
            else
                child = left;
            swap(A[node],A[child]);
            node = child;
            left = 2*node+1;
            right = 2*node+2;
        }
    }
    
}
