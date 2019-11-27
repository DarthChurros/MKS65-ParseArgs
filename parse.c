#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char** parse_args(char* line);

int main(int argc, char** argv) {
  char** args = parse_args(argv[0]);
  execvp(args[0], args);
}

char** parse_args(char* line) {
  return NULL;
}
