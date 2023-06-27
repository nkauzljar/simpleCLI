#include <stdint.h>
#include <stdlib.h>


int8_t init_CLI(uint32_t size);
int8_t close_CLI();
void set_line_end_char(char c);
uint32_t cmd_lenght();

int8_t send_char_to_CLI(char c);