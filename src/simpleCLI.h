#include <stdint.h>
#include <stdlib.h>
#include <string.h>



int8_t init_CLI(uint32_t size, char *cmd_list);
int8_t close_CLI();
void set_line_end_char(char c);
uint32_t cmd_lenght();
uint8_t cmd_index();
int8_t send_char_to_CLI(char c);