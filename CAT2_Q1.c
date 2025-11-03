/*
Name: Lewis Kiprotich
Reg No: PA106/G/28738/25
Description: Program to read integers from a file, calculate sum and average, and write results to another file
Date: 3/11/2025
*/
#include <stdio.h>

int main() {
    /*
     Definition:
     An array is a data structure that stores a fixed-size sequence of elements of the same data type,
     stored in contiguous memory locations and accessed using an index.
     */

    // Declaring and initializing the first 2D array (first matrix)
    int scores1[2][2] = {
        {65, 92},
        {84, 72}
    };

    // Declaring and initializing the second 2D array (second matrix)
    int scores2[2][2] = {
        {35, 70},
        {59, 67}
    };

    // Printing the elements of the first array
    printf("Elements of scores1 array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores1[i][j]);
        }
        printf("\n");
    }

    // Printing the elements of the second array
    printf("Elements of scores2 array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
