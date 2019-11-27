#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char** parse_args(char* line);

int main(int argc, char** argv) {
  if (argc == 1) {
    printf("Enter a command!\n\n");
    return 0;
  }
  char** args = parse_args(argv[1]);
  execvp(args[0], args);
  free(args);
  return 0;
}

char** parse_args(char* line) {
  char** split = calloc(6, sizeof(char*));
  split[5] = NULL;
  char* arg = line;
  int i = 0;

  while (arg) {
    strsep(&arg, " ");
    split[i] = line;
    line = arg;
    i++;
  }
  return split;
}
