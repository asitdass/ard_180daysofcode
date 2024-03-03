class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int col = matrix[0].size();

        // Transpose of a matrix
        for(int i = 0; i < rows-1; i++) {
            for(int j = i+1; j < col; j++) {
                // Swap elements across the diagonal
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse every row
        for(int i = 0; i < rows; i++) {
            int start = 0, end = col-1;
            // Swap elements from start to end index
            while(start < end) {
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
    }
};
