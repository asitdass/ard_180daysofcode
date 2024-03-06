class Solution {
public:
    // Function to search for a target value in a matrix
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Initialize variables
        int start = 0; // Starting index for binary search
        int rows = matrix.size(); // Number of rows in the matrix
        int cols = matrix[0].size(); // Number of columns in the matrix (assuming all rows have same number of columns)
        int totalEle = rows * cols; // Total number of elements in the matrix
        int end = totalEle - 1; // Ending index for binary search
        
        // Perform binary search
        while (start <= end) { // Continue until start is less than or equal to end
            int mid = (start + end) / 2; // Calculate the middle index
            int row_index = mid / cols; // Calculate the row index of the middle element
            int col_index = mid % cols; // Calculate the column index of the middle element
            int curr_value = matrix[row_index][col_index]; // Get the value of the middle element
            
            if (curr_value == target) { // If the middle element equals the target
                return 1; // Return true (1) indicating the target is found
            } else if (curr_value < target) { // If the middle element is less than the target
                start = mid + 1; // Update the start index for binary search
            } else { // If the middle element is greater than the target
                end = mid - 1; // Update the end index for binary search
            }
        }
        
        return 0; // Return false (0) indicating the target is not found
    }
};
