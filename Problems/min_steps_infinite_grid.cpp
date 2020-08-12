int minimum_traversal(int x_0, int y_0, int x_1, int y_1, int steps = 0){
    if(x_0 == x_1 && y_0 == y_1)
        return steps;
    if(x_0 != x_1 && y_0 != y_1)
        return minimum_traversal(x_0<x_1?x_0+1:x_0-1,y_0<y_1?y_0+1:y_0-1,x_1,y_1,steps+1);
    else if(x_0 != x_1)
        return steps + abs(x_0 - x_1);
    else
        return steps + abs(y_0 - y_1);
        
}

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int min_steps = 0;
    if(A.size() == 1)
        return min_steps;
    int i = 1;
    while(i < A.size()){
        int x_0 = A[i-1];
        int y_0 = B[i-1];
        int x_1 = A[i];
        int y_1 = B[i];
        min_steps += minimum_traversal(x_0,y_0,x_1,y_1);
        i++;
    }
    return min_steps;
}


