#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

//Program to perform IO operations forever.

int main() {
    FILE *ptr;
    while(1) { //do forever
        ptr = fopen("working.txt","w"); //Open a file pointer
        if(ptr == NULL) { //Check for error opening the file
            printf("NULL pointer\n");
            exit(1);
        }
        fprintf(ptr,"a"); //print a character to the file.
        fclose(ptr); //close the file.
    }
    return 0;
}