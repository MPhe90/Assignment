//
// Created by myatm on 11/27/2022.
//
#include "stdio.h"

int main(){

    int num;
    int numArray[100];
    FILE *fptr;

    fptr = fopen("Test3.txt","w");

    if (fptr==NULL){

        printf("File cannot open");
    }
    else {
        for (int i = 1; i <=100; i++){

            fprintf(fptr,"%d\n", i);
        }
    }
    fclose (fptr);

    fptr = fopen("Test3.txt", "r");

    int i=0;
    while(fscanf(fptr, "%d ", &num) == 1) {
        numArray[i] = num;
        i++;
    }
    fclose(fptr);

    for (int j = 0; j <100 ; j++){

        printf(" Number in Array %d\n", numArray[j]);
    }



    return 0;
}
