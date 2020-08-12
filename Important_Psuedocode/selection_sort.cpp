#include <iostream>  
#include <vector>  
  
using namespace std;  
  
// int findMinIndex(vector<int> &A, int start) {  
//     int min_index = start;  
  
//     ++start;  
  
//     while(start < (int)A.size()) {  
//         if(A[start] < A[min_index])  
//             min_index = start;  
  
//         ++start;  
//     }  
  
//     return min_index;  
// }  
  
// void selectionSort(vector<int> &A) {  
//     for(int i = 0; i < (int)A.size(); ++i) {  
//         int min_index = findMinIndex(A, i);  
  
//         if(i != min_index)  
//             swap(A[i], A[min_index]);  
//     }  
// }  

void selectionSort(vector<int> &A) {  
    for(int i = 0;i<A.size()-1;i++){
        int min_index = i;
        for(int j = i+1;j<A.size();j++){
            if(A[j] < A[min_index])
                min_index = j;
        }
        //Swap min_index with i
        int temp = A[i];
        A[i] = A[min_index];
        A[min_index] = A[i];
    }
}  

int main() {  
    vector<int> A = {5, 2, 6, 7, 2, 1, 0, 3};  
  
    selectionSort(A);  
  
    for(int num : A)  
        cout << num << ' ';  
  
    return 0;  
} 