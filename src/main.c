#include <stdio.h>
#include "simpleCLI.h"

#define MAX_LINE_SIZE 64

void test1(char *args);
void test2(char *args);
void test3(char *args);

void (*cmd_ptrs[3])(char *args) = {test1, test2, test3};

char custom_cmds[3][10] = {"cmd1", "cmd2", "cmd3"};

int main(int argc, char const *argv[])
{
    char input[MAX_LINE_SIZE] = "test naredba\n";
    
    init_CLI(MAX_LINE_SIZE, custom_cmds);
    printf("%d\n", sizeof(cmd_ptrs)/sizeof(cmd_ptrs[0]));
    printf("Hello World!\n");

    return 0;
}

void test1(char *args){
    printf("test1\n");
}
void test2(char *args){
    printf("test2\n");
}
void test3(char *args){
    printf("test3\n");
}