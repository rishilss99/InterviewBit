int Solution::sqrt(int A) {
    if(A < 2)
        return A;
    int low = 0;
    int high = (A/2)>46340?46340:(A/2);
    while(low<high){
        int mid = low + (high-low)/2;
        // cout<<low<<" "<<mid<<" "<<high<<endl;
        if((mid * mid) == A)
            return mid;
        else if((mid*mid)>A)
            high = mid-1;
        else
            low = mid+1;
    }
    return (low*low)<=A?low:(low-1);
}
