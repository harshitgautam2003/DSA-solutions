
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        if(size==1) return a[0];
        sort(a,a+size);

        int count=0;

        for(int i=1;i<size;i++){
            if(a[i]==a[i-1]){
                count++;
                while(a[i]==a[i+1]){
                    count++;
                    i++;
                }
                count++;
                if(count>size/2) return a[i];
                count=0;
            }
        }
        return -1;
    }
};