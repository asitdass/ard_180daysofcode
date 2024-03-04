class Solution {
public:
    void rotate(vector<vector<int> >& matrix) {
        // Code to rotate a matrix clockwise by 90 degrees
        
        // Get the number of rows and columns in the matrix
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // Rotate the matrix column-wise
        for(int j = 0; j < cols; j++){
            // Set start and end indices for the current column
            int start = 0;
            int end = rows - 1;
            // Swap elements from top to bottom until start index is less than end index
            while(start < end){
                swap(matrix[start][j], matrix[end][j]); // Swap elements at symmetric positions
                start++;
                end--;
            }
        }
        
        // Rotate the matrix row-wise
        for(int i = 0; i < rows; i++){
            // Set start and end indices for the current row
            int start = 0;
            int end = cols - 1;
            // Swap elements from left to right until start index is less than end index
            while(start < end){
                swap(matrix[i][start], matrix[i][end]); // Swap elements at symmetric positions
                start++;
                end--;
            }
        }
    }
};
