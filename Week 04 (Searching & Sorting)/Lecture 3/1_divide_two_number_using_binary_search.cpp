#include<iostream>
using namespace std;


int getQuotient(int divisor, int dividend){
    int start = 0;
    int end = dividend;
    int ans = -1;
    long long int mid = start+(end-start)/2;

    while(start <= end){
        if(mid*divisor == dividend){
            return mid;
        }
        else if(mid*divisor < dividend){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        // mid ko update kr do
        mid = start+(end-start)/2;
    }

    return ans;
}


int main(){
    int divisor = -2;
    int dividend = 35;

    int ans  = getQuotient(abs(divisor), abs(dividend));    // hamsa +ve ke liye calculate kro

    // now we need to decide ki sign konsa lagaye +ve / -ve
    if((divisor>0 && dividend<0) || (divisor<0 && dividend>0)){
        ans = 0-ans;
    }

    cout<<"Result is : "<<ans<<endl;


return 0;
}