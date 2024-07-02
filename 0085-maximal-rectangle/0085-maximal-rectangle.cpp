class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        // Return 0 if the matrix is empty
        if (matrix.empty()) return 0;

        int numRows = matrix.size();
        int numCols = matrix[0].size();
        vector<int> heights(numCols, 0);
        int maxArea = 0;

        for (int i = 0; i < numRows; i++) {
            // Update the heights array
            for (int j = 0; j < numCols; j++) {
                if (matrix[i][j] == '0') {
                    heights[j] = 0;
                } else {
                    heights[j] += 1;
                }
            }

            // Vectors to store the next and previous smaller elements' indices
            vector<int> nextSmaller(numCols, numCols);
            vector<int> prevSmaller(numCols, -1);
            stack<int> s;

            // Find the next smaller element for each position
            for (int j = numCols - 1; j >= 0; j--) {
                while (!s.empty() && heights[s.top()] >= heights[j]) s.pop();
                if (!s.empty()) nextSmaller[j] = s.top();
                s.push(j);
            }

            // Clear the stack for the next computation
            while (!s.empty()) s.pop();

            // Find the previous smaller element for each position
            for (int j = 0; j < numCols; j++) {
                while (!s.empty() && heights[s.top()] >= heights[j]) s.pop();
                if (!s.empty()) prevSmaller[j] = s.top();
                s.push(j);
            }

            // Calculate the area for each position and update maxArea
            for (int j = 0; j < numCols; j++) {
                int width = nextSmaller[j] - prevSmaller[j] - 1;
                int area = heights[j] * width;
                maxArea = max(maxArea, area);
            }
        }
        return maxArea;
    }
};