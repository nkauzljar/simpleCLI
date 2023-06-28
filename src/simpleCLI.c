#include "simpleCLI.h"

char *CLI_ptr;
uint32_t current_ptr;
char CLI_end_char;
uint32_t max_size;

int8_t init_CLI(uint32_t size, char *cmd_list){
    if(size == 0) return -1;

    CLI_ptr = (char*) malloc((size+1)*sizeof(char));
    CLI_ptr[size] = '\0';
    max_size = size;
    current_ptr = 0;
    CLI_end_char = '\n';
    return 0;
}

int8_t close_CLI(){
    free(CLI_ptr);
    return 0;
}

void set_line_end_char(char c){
    CLI_end_char = c;
}

uint32_t cmd_lenght(){
    uint32_t i;
    for(i = 0;i < max_size;i++){
        if(CLI_ptr[i] == ' ') break;
    }
    return i-1;
}

uint8_t cmd_index(){
    return 0;
}

int8_t send_char_to_CLI(char c){
    if(current_ptr == max_size){
        current_ptr = 0;
        return -1;
    }
    if(c != CLI_end_char){
        CLI_ptr[current_ptr] = c;
        current_ptr++;
        return 0;
    }
    
    

    return c;
}

