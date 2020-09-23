#include <stdlib.h>
#include "util.h"

char*
hello_provider() {
  char* returned_arr = (char*) malloc(sizeof(char) * 6);

  returned_arr[0] = 'h';
  returned_arr[1] = 'e';
  returned_arr[2] = 'l';
  returned_arr[3] = 'l';
  returned_arr[4] = 'o';
  returned_arr[5] = '\0';

  return returned_arr;
}