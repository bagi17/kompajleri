#include "errors.h"
#include "parser.tab.h"
#include <stdio.h>

void print_error_message(int line, int col){
    printf("Greška u liniji: %d koloni: %d", line, col);
}