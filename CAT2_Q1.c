/*
Name: Lewis Kiprotich
Reg No: PA106/G/28738/25
Description:
Date: 3/11/2025
*/
#include <stdio.h>
int main() {
    // Array declaration and initialization (2x2)
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };
    
    // Define the number of rows and columns
    int rows = 2;
    int cols = 2;
    
    printf("Elements of the scores array (2x2):\n");
    
    // Outer loop for rows
    for (int i = 0; i < rows; i++) { 
        // Inner loop for columns
        for (int j = 0; j < cols; j++) { 
            // Print the element at scores[i][j]
            printf("scores[%d][%d] = %d\t", i, j, scores[i][j]);
        }
        // Print a newline after each row for clarity
        printf("\n"); 
    }
    return 0;
}

