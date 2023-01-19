class Solution
{
public:
    // Function to solve the Sudoku puzzle
    void solveSudoku(vector<vector<char>>& board)
    {
        // Vector to store the positions of empty cells (indicated by '.')
        vector<pair<int,int>> dotpos;
        
        // Iterate through each cell in the board
        for (size_t r = 0; r < 9; ++r)
        {
            for (size_t c = 0; c < 9; ++c)
            {
                // If the cell is empty, add its position to the vector
                if (board[r][c] == '.')
                {
                    dotpos.push_back(make_pair(r, c));
                }
            }
        }
        
        // Call the recursive function to fill in the empty cells
        dfs(board, dotpos, 0);
    }
    
    bool dfs(vector<vector<char>>& board, vector<pair<int,int>>& dotpos, size_t index)
    {
        // Base case: if all empty cells have been filled, return true
        if (index == dotpos.size())
        {
            return true;
        }
        
        // Get the current cell's row and column
        size_t r = dotpos[index].first;
        size_t c = dotpos[index].second;
        
        // Try filling in the current cell with all possible digits (1-9)
        for (board[r][c] = '1'; board[r][c] <= '9'; board[r][c] += 1)
        {
            bool valid = true;
            
            // Check if the current digit is valid in the current cell
            // by checking if it is already present in the same row, column or sub-grid
            for (size_t i = 0; valid && i < 9; ++i)
            {
                if (i != r && board[i][c] == board[r][c]
                    || i != c && board[r][i] == board[r][c]
                    || i != r % 3 * 3 + c % 3 && board[r / 3 * 3 + i / 3][c / 3 * 3 + i % 3] == board[r][c])
                {
                    // If the digit is not valid, set flag to false
                    valid = false;
                    break;
                }
            }
            
            // If the current digit is valid, call the function recursively
            // to fill in the next empty cell
            if (valid && dfs(board, dotpos, index + 1))
            {
                return true;
            }
        }
        
        // If all digits have been tried and none are valid, return false
        return false;
    }
};
