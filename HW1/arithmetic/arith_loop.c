#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <sys/types.h>

//Program to perform simple math forever.

int main() {
    int i = 0;
    while(1) {
        i++; //Increment i forever. In the event that i maxes out, it will loop around to 0
    }
    return 0;
}