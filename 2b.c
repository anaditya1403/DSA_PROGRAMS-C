#include <stdio.h>

int isValidSudoku(int board[9][9]) {
    // Check rows
    printf("ADITYA ASHOK NAIK\n");
    printf("ENG24AD0001\n");
    printf("eng24ad0001@dsu.edu.in\n");
    for (int i = 0; i < 9; i++) {
        int row[10] = {0};
        for (int j = 0; j < 9; j++) {
            int num = board[i][j];
            if (num != 0) {
                if (row[num]) return 0; // if Duplicate found
                row[num] = 1;
            }
        }
    }

    // To Check columns
    for (int j = 0; j < 9; j++) {
        int col[10] = {0};
        for (int i = 0; i < 9; i++) {
            int num = board[i][j];
            if (num != 0) {
                if (col[num]) return 0; // Duplicate found
                col[num] = 1;
            }
        }
    }

    // Check 3x3 subgrids
    for (int block = 0; block < 9; block++) {
        int subgrid[10] = {0};
        int rowStart = (block / 3) * 3;
        int colStart = (block % 3) * 3;

        for (int i = rowStart; i < rowStart + 3; i++) {
            for (int j = colStart; j < colStart + 3; j++) {
                int num = board[i][j];
                if (num != 0) {
                    if (subgrid[num]) return 0; // Duplicate found
                    subgrid[num] = 1;
                }
            }
        }
    }

    return 1; // Valid Sudoku
}

int main() {
    int sudoku[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (isValidSudoku(sudoku)) {
        printf("Accept\n");
    } else {
        printf("Reject\n");
    }

    return 0;
}
