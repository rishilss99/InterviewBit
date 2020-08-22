string Solution::intToRoman(int A) {
    char arr[]= {'I','V','X','L','C','D','M'};
    string result = "";
    int power = floor(log10(A));
    if(power == 3){
        for(int i = 0;i<power;i++)
            result+='M';
        A%=1000;
        power-=1;
    }
    while(power>=0){
        // cout<<power<<endl;
        int digit = A/(pow(10,power));
        if(digit == 0)
            ;
        else if(digit < 4){
            for(int i = 0;i<digit;i++)
                result+=arr[power*2];
        }
        else if(digit == 4){
            result+=arr[power*2];
            result+=arr[(power*2) +1];
        }
        else if(digit == 5){
            result+=arr[(power*2) + 1];
        }
        else if(digit < 9){
            result+=arr[power*2 + 1];
            for(int i = 0;i<digit-5;i++)
                result+=arr[power*2];
        }
        else if(digit == 9){
            result+=arr[power*2];
            result+=arr[(power*2) + 2];
        }
        A = A % (int)(pow(10,power));
        power--;
    }
    return result;
    
}