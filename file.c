#include <stdio.h>
#include "file.h"

static FILE *stream = NULL;

int file_open(const char *filename, const char *mode) {
  stream = fopen(filename, mode);
  if (stream == NULL) {
    return 1;
  }
  return 0;
}

int file_close(void) {
  if (fclose(stream) != 0) {
    return 1;
  }
  return 0;
}

int file_read(const char *ptr, int *len) {
  //if (fread())
  return 1;
}

int file_write(const char *ptr) {
  if (fprintf(stream, "%s", ptr) < 0) {
    return 1;
  }
  return 0;
}
