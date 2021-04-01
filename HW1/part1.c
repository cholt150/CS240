#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    int i = 0;
    while(1) {
        char name[] = "part1"; //Assign name
        long pid = (long)getpid(); //Retrieve pid after starting
        fprintf(stderr, "%s:%ld\ncount:%i\n",name,pid,i++); //format and print the output.
        sleep(1); //Delay
    }
    return 0;
}