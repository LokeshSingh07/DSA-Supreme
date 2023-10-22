// maximize the cut segments  --> GFG
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        // base case
        if(n == 0){
            return 0;
        }
        if(n < 0){
            return INT_MIN;
        }
        
        
        // maine s length ka 1 segment cut kr diya h baaki recursion dekhlega
        int option1 = 1 + maximizeTheCuts(n-x, x, y, z);
        // maine s length ka 1 segment cut kr diya h baaki recursion dekhlega
        int option2 = 1 + maximizeTheCuts(n-y, x, y, z);
        // maine s length ka 1 segment cut kr diya h baaki recursion dekhlega
        int option3 = 1 + maximizeTheCuts(n-z, x, y, z);
        
        
        int finalAns = max(option1, max(option2, option3));
        return finalAns;
    }
};



// TLE -> beacuse DP ka question h