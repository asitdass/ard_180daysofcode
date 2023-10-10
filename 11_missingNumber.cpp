class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int naturalSum = n*(n+1)/2;
        
        int sum=0;
        for(int i = 0; i<n-1; i++){
            sum+=array[i];
        }
        
        return naturalSum - sum;
        // Your code goes here
    }
};
