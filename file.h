#ifndef __FILE_H__
#define __FILE_H__
int file_open(const char *filename, const char *mode);
int file_close(void);
int file_read(const char *ptr, int *len);
int file_write(const char *ptr);
#endif
