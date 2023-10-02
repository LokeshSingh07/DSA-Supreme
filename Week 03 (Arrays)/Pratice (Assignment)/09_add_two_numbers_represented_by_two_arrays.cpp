class Solution{
    public:
    string calc_Sum(int *a,int n,int *b,int m){
        int i=n-1;
        int j=m-1;
        string ans;
        int carry=0;
        
        // this will run until size of a & b is same 
        while(i>=0 && j>=0){
            int x = a[i] + b[j] + carry;
            int digit = x % 10;
            ans.push_back(digit + '0');
            carry = x / 10;
            i--;
            j--;
        }
        
        // this will run until size of a is greater than b
        while(i>=0){
            int x = a[i] + 0 + carry;
            int digit = x % 10;
            ans.push_back(digit + '0');
            carry = x / 10;
            i--;
        }
        
        // this will run until size of b is greater than a
        while(j >= 0){
            int x = 0 + b[j] + carry;
            int digit = x % 10;
            ans.push_back(digit + '0');
            carry = x / 10;
            j--;
        }
        
        // if carry is present
        if(carry){
            ans.push_back(carry + '0');
        }
        
        // catch -> remove zero before reversing the array
        while(ans[ans.size()-1] == '0'){
            ans.pop_back();
        }
        
        // reverse the string
        reverse(ans.begin(), ans.end());
        
        return ans;
        
    }
};