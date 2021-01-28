#include <iostream>
#include <vector>
using namespace std;
void selection_sort(vector<int> &);
void bubble_sort(vector<int> &);
void insertion_sort(vector<int> &);
void merge_sort(vector<int> &, int, int);
void quick_sort(vector<int> &, int, int);
int partition(vector<int> &, int, int);
vector<int> combine(vector<int> &,vector<int> &);
int main() {
    // Write C++ code here
    vector<int> user_input = {4, 3, 17, 8, 2, 6, 7, 8, 11, 20, 5, 10, 1, 15, 3, 7};
    quick_sort(user_input, 0, user_input.size());
    // merge_sort(user_input, 0, user_input.size());
    for(int k: user_input)
        cout<<k<<" ";

    return 0;
}

void selection_sort(vector<int> &A){
    for(int i =0;i<A.size();i++){
        int min_pos = i;
        int min = A[i];
        for(int j = i+1;j<A.size();j++){
            if(A[j]<min){
                min = A[j];
                min_pos = j;
            }
        }
        swap(A[i],A[min_pos]);
    }
}

void bubble_sort(vector<int> &A){
    for(int i = 1; i<A.size();i++){
        bool check = false;
        for(int j = 0; j<A.size()-i;j++){
            if(A[j]>A[j+1]){
                swap(A[j],A[j+1]);
                check = true;
            }
        }
        if(!check)
            break;
    }
}

void insertion_sort(vector<int> &A){
    for(int i = 1;i<A.size();i++){
        int j=i;
        while(j>0 && A[j-1]>A[j]){
            swap(A[j],A[j-1]);
            j--;
        }
    }
}


void merge_sort(vector<int> &A, int start, int end){
    if(end-start < 2)
        return;
    int half = (end + start)/2;
    vector<int> left;
    vector<int> right;
    int i = 0;
    int j = half-start;
    while(i<half-start){
        left.push_back(A[i]);
        i++;
    }
    while(j<end-start){
        right.push_back(A[j]);
        j++;
    }
    merge_sort(left, start, half);
    merge_sort(right, half, end);
    A = combine(left, right);
}

vector<int> combine(vector<int> &left, vector<int> &right){
    vector<int> result;
    int i = 0;
    int j = 0;
    while(i<left.size() || j<right.size()){
        if(j==right.size()){
            result.push_back(left[i]);
            i++;
        }
        else if(i==left.size()){
            result.push_back(right[j]);
            j++;
        }
        else{
            if(left[i]<=right[j]){
                result.push_back(left[i]);
                i++;
            }
            else{
                result.push_back(right[j]);
                j++;
            }
        }
    }
    return result;
}

void quick_sort(vector<int> &A, int start, int end){
    if(start<end){
        int p_index = partition(A, start, end);
        quick_sort(A, start, p_index);
        quick_sort(A, p_index+1, end);
    }
}

int partition(vector<int> &A, int start, int end){
    int pivot = A[end-1];
    int j = start;
    for(int i = start; i<end; i++){
        if(A[i]<pivot){
            swap(A[i],A[j]);
            j++;
        }
    }
    swap(A[j],A[end-1]);
    return j;
}