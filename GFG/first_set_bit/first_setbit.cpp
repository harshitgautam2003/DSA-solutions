
class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
         int count = 1;
        if(n==0) return 0;
        if(n%2!=0) return 1;
        while(n>1){
            if(n % 2==0) {
                count ++;
                n = n/2;
            }
            else{
                break;
            }
        }
        return count;
    }
};