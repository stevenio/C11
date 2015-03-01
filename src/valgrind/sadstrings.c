#include <stdio.h>
#include <string.h> // strlen
#include <stdlib.h> // malloc, free, system

void get_strings(char const *in) {
    char *cmd;
    int len = strlen("string ") + strlen(in) + 1;
    cmd = malloc(len);
    snprintf(cmd, len, "string %s", in);
    if (system(cmd)) fprintf(stderr, "something went wrong running %s.\n", cmd);
    free(cmd);
}

int main(int argc, char **argv) {
    get_strings(argv[0]);
}
