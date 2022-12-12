//
// Created by myatm on 11/27/2022.
//
#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *myFile;
    myFile = fopen("somenumbers.txt", "w");

    //read file into array
    int numberArray[16];

    if (myFile == NULL) {
        printf("Error Reading File\n");
        exit(0);
    } else {
        for (int i = 1; i <= 10; i++) {

            fprintf(myFile, "%d", i);

        }
    }

        for (int i = 0; i < 10; i++) {
            fscanf(myFile, "%1d", &numberArray[i]);
        }

        for (int i = 0; i < 10; i++) {
            printf("Number is: %d\n\n", numberArray[i]);
        }

        fclose(myFile);

        return 0;
    }
