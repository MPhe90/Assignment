#include <stdio.h>


int main(int argc, char * argv[])
{
    FILE * database;
    int buffer[30];
    int i=0;
    database = fopen("test.txt", "r");

    if (NULL == database)
    {
        perror("opening database");
        return (-1);
    }

    while (EOF != fscanf(database, "%d[^\n]\n", buffer[i]))
    {
        printf("> %d\n", buffer[i]);
        i ++;
    }

    fclose(database);
    return (0);
}