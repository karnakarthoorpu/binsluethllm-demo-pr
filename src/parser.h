#ifndef PARSER_H
#define PARSER_H
#include <stdint.h>
int copy_name(const uint8_t *src, size_t len, char *dst);
int handle_name(const uint8_t *buf, size_t len, char *out);
#endif
