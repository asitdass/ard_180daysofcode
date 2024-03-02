class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // Initialize an empty vector to store the spiral order
        vector<int> ans;
        // Get the number of rows and columns in the matrix
        int row = matrix.size();
        int col =  matrix[0].size();
        // Initialize variables to track the boundaries of the current spiral
        int top = 0, right = col-1, bottom = row-1, left = 0;

        // Loop until all elements in the matrix are visited
        while(top<=bottom && left<=right){
            // Traverse and append the top row from left to right
            for(int i = left; i<=right; i++){
                ans.push_back(matrix[top][i]);
            }
            // Move to the next row
            top++;
            // Traverse and append the rightmost column from top to bottom
            for(int i = top; i<=bottom; i++){
                ans.push_back(matrix[i][right]);
            }
            // Move to the next column
            right--;

            // Traverse and append the bottom row from right to left
            if(top<=bottom){
                for(int i = right; i>=left; i--){
                    ans.push_back(matrix[bottom][i]);
                }
                // Move to the next row from the bottom
                bottom--;
            }

            // Traverse and append the leftmost column from bottom to top
            if(left<=right){
                for(int i = bottom; i>=top; i--){
                    ans.push_back(matrix[i][left]);
                }
                // Move to the next column from the left
                left++;
            }
        }
        // Return the spiral order
        return ans;
        
    }
};
