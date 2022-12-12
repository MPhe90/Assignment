//
// Created by myatm on 11/23/2022.
//
#include "stdio.h"

int main(){

    int num;
    FILE *fptr;

    fptr = fopen("Test2.txt","a");

    if(fptr == NULL){

        printf("[-]File cannot open!");

    }else{

        printf("Enter a number");
        scanf("%d",&num);

        fprintf(fptr,"%d",num);
        fclose(fptr);

    }






    return 0;
}