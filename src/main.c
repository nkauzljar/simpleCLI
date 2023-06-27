#include <stdio.h>
#include "simpleCLI.h"

#define MAX_LINE_SIZE 64

int main(int argc, char const *argv[])
{
    char input[MAX_LINE_SIZE] = "test naredba\n";
    init_CLI(MAX_LINE_SIZE);
    printf("Hello World!\n");

    return 0;
}
