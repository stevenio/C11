#include <stdlib.h> // getenv, atoi
#include <stdio.h> //printf

int main() {
    char *reps_text = getenv("reps");
    int reps = reps_text ? atoi(reps_text) : 10;

    char *msg = getenv("msg");
    if (!msg) msg = "Hello.";

    for (int i=0; i<reps; i++)
	printf("%s\n",msg);
}
