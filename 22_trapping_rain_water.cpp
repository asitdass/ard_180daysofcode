class Solution {
public:
    int trap(vector<int>& height) {
        // Initialize variables
        int maxHeight = INT_MIN; // Maximum height of bars encountered
        int index = 0; // Index of the maximum height bar
        int waterSum = 0; // Total trapped water
        int end = height.size()-1; // Index of the last element in the height vector
        
        // Find the maximum height and its index
        for(int i = 0; i<= end; i++){
            if(height[i]>maxHeight){
                maxHeight = height[i];
                index = i;
            }
        }
        
        // Calculate trapped water on the left side of the maximum height bar
        int leftMax = 0;
        for(int i = 1; i<index; i++){
            leftMax = max(height[i-1],leftMax);
            int tempSum = leftMax - height[i];
            if(tempSum>0){
                waterSum+=tempSum;
            }
        }
        
        // Calculate trapped water on the right side of the maximum height bar
        int rightMax = 0;
        for(int i = end-1; i>index; i--){
            rightMax = max(height[i+1],rightMax);
            int tempSum = rightMax - height[i];
            if(tempSum>0){
                waterSum+=tempSum;
            }
        }
        
        // Return the total trapped water
        return waterSum;
    }
};
