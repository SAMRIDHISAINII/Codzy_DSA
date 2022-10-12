impl Solution {
    pub fn rotate(matrix: &mut Vec<Vec<i32>>) {
            let mut matrix = matrix;
        
        let (len, n) = (matrix.len(), matrix.len() - 1);
        
        for x in 0..len / 2 {
            for y in 0..(len + 1) / 2 {
                
                let temp = matrix[x][y];
                matrix[x][y] = matrix[n - y][x];
                matrix[n - y][x] = matrix[n - x][n - y];
                matrix[n - x][n - y] = matrix[y][n - x];
                matrix[y][n - x] = temp;
            }
        }
    }
}
