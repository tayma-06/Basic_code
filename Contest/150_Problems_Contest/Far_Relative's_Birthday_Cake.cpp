#include<iostream>
using namespace std;
int main(){
    int n, row_pairs = 0, column_pairs = 0; // n is the length of a side of the cake
    // count of row and column pairs initialized to 0
    cin >> n; 
    char matrix[100][100]; 
    // declaring a 2-D array which would store the no of rows and columns
    for(int r = 0; r < n; r++){
        for(int c = 0; c < n; c++){
            cin >> matrix[r][c]; // taking inputs of the rows and columns
        }
    }
    for(int r = 0; r < n; r++){
        int row_count = 0, column_count = 0;
        // counting of C in the rows and columns
        for(int c = 0; c < n; c++){
            row_count += (matrix[r][c] == 'C'); // C in rows
            column_count += (matrix[c][r] == 'C'); // C in columns
        }
        row_pairs += row_count * (row_count - 1) / 2; // formula for unique combination
        // derived by combinations from permutations and combinations 
        //C(k,2)
        column_pairs += column_count * (column_count - 1) / 2;
    }
    int result = row_pairs + column_pairs;
    cout << result << endl;
    return 0;
}
