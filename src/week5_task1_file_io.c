// week5_task1_file_io.c
// Name: ________  Surname: ________  Student ID: 260ADB198
//
// Task 1: Read and write data from text files
// Week 5 – Files & Modular Programming
// TODO: Fill in the missing parts marked below.
//
// Build: make lab5   Run: ./bin/week5_task1_file_io

#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_FILENAME "data.txt"
#define LINE_LEN 256

int main(int argc, char* argv[]) {
  FILE* fp = NULL;
  const char* filename = DEFAULT_FILENAME;
  char line[LINE_LEN];
  int line_count = 0;

  // TODO: 1. Open the file for writing
  printf("Writing lines to %s...\n", filename);
  fp = fopen(filename, "w");

  // TODO: 2. Check for errors
  if (fp == NULL) {
    perror(filename);
    return EXIT_FAILURE;
  }

  // TODO: 3. Write 3 lines to the file
  fprintf(fp, "Hello, this is the first line.\n");
  fprintf(fp, "This is the second line.\n");
  fprintf(fp, "This is the third line.\n");

  // TODO: 4. Close the file
  fclose(fp);

  // TODO: 5. Open the file for reading
  fp = fopen(filename, "r");

  if (fp == NULL) {
    perror(filename);
    return EXIT_FAILURE;
  }

  // TODO: 6. Read and print each line
  printf("Reading contents:\n");

  while (fgets(line, sizeof(line), fp) != NULL) {
    printf("%s", line);
  }

  // TODO: 7. Close the file
  fclose(fp);

  (void)argc;
  (void)argv;
  (void)line_count;

  return EXIT_SUCCESS;
}
