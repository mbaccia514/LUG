#include <stdio.h>
#include <stdlib.h>

char *buffer = "Fog";

void main(int argc, char* argv[]) {
    
    if(argc != 3) {
        printf("Please enter 2 numbers.\n");
        exit(1);
    }

    int var = 25;

    printf("5 times 5 is %d.\n", var);
    
    printf("%d\n", atoi(argv[1]) + atoi(argv[2]));

    printf("%s\n", buffer);

    exit(0);
}

