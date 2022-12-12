//
// Created by myatm on 12/12/2022.
//
#include "stdio.h"
#include "stdlib.h"
#include "string.h"


void FindWord(char *word , char *file);





int main() {

    printf("Finding winhtut in file\n");
    FindWord("winhtut", "words.txt");
    printf("Finding NationalCyberCity in file\n");
    FindWord("NationalCyberCity","words.txt");

    return 0;

}
void FindWord(char *word , char *file){
    int count =0;
    char line[1024] ;
    FILE* fp = fopen(file, "r") ;
    while (fgets(line , sizeof(line) , fp )!= NULL)
    {
        if (strstr(line , word )!= NULL)
        {
            count++;
        }
    }
    printf ("Found : %d Time\n", count);
}

