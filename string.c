#include <stdio.h>

int string_split(const char *src, char **dst, const char separator) {
  if (src == NULL) {
    return 1;
  }
  if (dst == NULL) {
    return 1;
  }

  int i = 0;
  while (*src != '\0') {
    if (*src == separator) {
      i++;
    } else {
      *dst[i] = *src;
      dst[i]++;
    }
    src++;
  }
  return 0;
}
