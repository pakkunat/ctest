#include <stdio.h>
#include <stdarg.h>
#include "log.h"

static char buffer[BUFSIZ];

int log_write(const char *message, ...) {
  va_list ap;
  va_start(ap, message);
  if (vsprintf(buffer, message, ap) < 0) {
    va_end(ap);
    return 1;
  }
  va_end(ap);
  if (printf("%s", buffer) < 0) {
    return 1;
  }
  return 0;
}
