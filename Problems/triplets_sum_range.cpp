int Solution::solve(vector<string> &A) {
    float a_min1 = 10.0;
    float a_min2 = 10.0;
    float a_max1 = 0;
    float a_max2 = 0;
    float a_max3 = 0;
    float b_min1 = 10.0;
    float b_min2 = 10.0;
    float b_max = 0;
    float c_min = 10.0;
    for(string k : A){
        if(k.front() == '0'){
            float num = stof(k);
            if(num<2.0/3){
                if(num>a_max1){
                    a_max3 = a_max2;
                    a_max2 = a_max1;
                    a_max1 = num;
                }
                else if(num>a_max2){
                    a_max3 = a_max2;
                    a_max2 = num;
                }
                else if(num>a_max3)
                    a_max3 = num;
                if(num<a_min1){
                    a_min2 = a_min1;
                    a_min1 = num;
                }
                else if(num<a_min2)
                    a_min2 = num;
            }
            else if(num>=2.0/3){
                if(num>b_max)
                    b_max = num;
                if(num<b_min1){
                    b_min2 = b_min1;
                    b_min1 = num;
                }
                else if(num<b_min2)
                    b_min2 = num;
            }
        }
        else if(k.front() == '1'){
            float num = stof(k);
            if(num<c_min)
                c_min = num;
        }
    }
    if(a_max1+a_max2+a_max3>1.0 && a_max1*a_max2*a_max3 != 0)
        return 1;
    else if(1.0 - a_min1 - a_min2 < b_min1 && b_max < 2.0 - a_min1 - a_min2 && b_min1 != 10.0 && b_max != 0 && a_min1 != 10.0 && a_min2 != 10.0)
        return 1;
    else if(c_min < 2.0 - a_min1 - a_min2 && c_min != 10.0 && a_min1 != 10.0 && a_min2 != 10.0)
        return 1;
    else if(a_min1 + b_min1 + b_min2 < 2.0 && a_min1 != 10.0 && b_min1!=10.0 && b_min2 != 10.0)
        return 1;
    else if(a_min1 + b_min1 + c_min < 2.0 && a_min1 != 10.0 && b_min1 != 10.0 && c_min != 10.0)
        return 1;
    else 
        return 0;
}
