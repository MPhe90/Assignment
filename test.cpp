//
// Created by myatm on 11/21/2022.
//
#include "stdio.h"

int main(){

    int data[5]={10,20,30,40,50};

    int *ptr;

    ptr=&data[3];

    printf("Pointer value = %d\n",*ptr);
    printf("Pointer (ptr+1) value = %d\n",*(ptr+1));
    printf("Pointer (ptr-1) value = %d\n",*(ptr-1));



    return 0;
}