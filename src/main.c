#include <stdio.h>
#include "util.h"

int
main() {
    char* hello = hello_provider();
    char world[] = "world";

    printf("%s, %s!\n", hello, world);

    printf("Goodbye, %s\n", world);

    printf("Here is chenge from you collaborator");
    return 0;
}

