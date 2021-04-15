#include <bits/stdc++.h>
using namespace std;

// Iterative Heapify
// void heapify(vector<int> &, int);

// Recursive Heapify
void heapify(vector<int> &, int, int);
void heap_sort(vector<int> &);

int main() {
    // Write C++ code here
    cout<<"Hello World"<<endl;
    vector<int> input = {3,5,7,4,5,8,16,53,23,1,2,3,4,2,1,4};
    heap_sort(input);
    for(int k: input)
        cout<<k<<" ";
    return 0;
}

// Recursive Heapify

void heapify(vector<int> &A, int node, int end){
    int left = 2*node + 1;
    int right = 2*node + 2;
    int child;
    if((left<=end && A[node]<A[left]) || (right<=end && A[node]<A[right])){
        if(right<=end)
            child = A[left]>A[right]?left:right;
        else
            child = left;
        swap(A[node],A[child]);
        heapify(A, child, end);
    }
}


// Iterative Heapify

// void heapify(vector<int> &A, int end){
//     int node, left, right, child;
//     for(int k = end; k>=0; k--){
//         node = k;
//         left = 2*node+1;
//         right = 2*node+2;
//         while((left<=end && A[node]<A[left]) || (right<=end && A[node]<A[right])){
//             if(right<=end)
//                 child = A[left]>A[right]?left:right;
//             else
//                 child = left;
//             swap(A[node],A[child]);
//             node = child;
//             left = 2*node+1;
//             right = 2*node+2;
//         }
//     }
// }


void heap_sort(vector<int> &A){
    
    //Heapify
    for(int i = A.size()-1; i>=0; i--)
        heapify(A,i,A.size()-1);
    
    // Deleting elements for Heap Sort O(nlogn)
    for(int k = A.size()-1; k>0; k--){
        swap(A[0],A[k]);
        heapify(A,0,k-1);
    }
    
}
