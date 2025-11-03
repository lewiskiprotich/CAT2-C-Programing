/*
Name: Lewis Kiprotich
Reg No: PA106/G/28738/25
Description: Read integers from file, calculate sum/average, write & display result
Date: 3/11/2025
*/

#include <stdio.h>
#include <stdlib.h>

// Accepts 10 values, saves to input.txt
void saveNumbers() {
    FILE *inputFile = fopen("input.txt", "w");
    if (!inputFile) {
        printf("Sorry, couldn't open input.txt, please check permissions!\n");
        exit(1);
    }
    int number;
    printf("Kindly enter 10 integers below:\n");
    for (int k = 0; k < 10; k++) {
        printf("Integer #%d: ", k + 1);
        scanf("%d", &number);
        fprintf(inputFile, "%d\n", number);
    }
    fclose(inputFile);
    printf("All numbers saved successfully!\n\n");
}

// Gets sum/average, writes to output.txt
void summarizeNumbers() {
    FILE *inputFile = fopen("input.txt", "r");
    if (!inputFile) {
        printf("Could not open input.txt for reading.\n");
        exit(1);
    }
    int total = 0, howMany = 0, value;
    while (fscanf(inputFile, "%d", &value) == 1) {
        total += value;
        howMany++;
    }
    fclose(inputFile);

    double avg = (howMany) ? (double)total / howMany : 0.0;
    FILE *outputFile = fopen("output.txt", "w");
    if (!outputFile) {
        printf("Unable to write results to output.txt!\n");
        exit(1);
    }
    fprintf(outputFile, "Sum of entries: %d\nAverage value: %.2f\n", total, avg);
    fclose(outputFile);
    printf("Results written in output.txt!\n\n");
}

// Neatly display both files
void showFileContents() {
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "r");
    char line[128];

    if (!inputFile || !outputFile) {
        printf("Problem reading one of the files.\n");
        exit(1);
    }

    printf("-- Numbers you entered (input.txt):\n");
    int i = 1;
    while (fgets(line, sizeof(line), inputFile)) {
        printf("Line %d: %s", i++, line);
    }
    fclose(inputFile);

    printf("\n-- Calculated Results (output.txt):\n");
    while (fgets(line, sizeof(line), outputFile)) {
        printf("%s", line);
    }
    fclose(outputFile);
}

int main() {
    saveNumbers();
    summarizeNumbers();
    showFileContents();
    return 0;
}
