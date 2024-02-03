#include "log.h"
#include "file.h"
#include "string.h"

#define LOG log_write

int main(int argc, char *argv[]) {
  if (file_open("./test.txt", "w") != 0) {
    LOG("failed open file.\n");
    return -1;
  }

  if (file_write("hello world\n") != 0) {
    LOG("failed write file.\n");
  }

  if (file_close() != 0) {
    LOG("failed close file.\n");
  }

  return 0;
}
