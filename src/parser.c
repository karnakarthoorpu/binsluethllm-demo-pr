#include <stdint.h>
#include <string.h>
#include "parser.h"

int copy_name(const uint8_t *src, size_t len, char *dst) {
    (void)src;
    (void)len;
    (void)dst;
    return 0;
}

int handle_name(const uint8_t *buf, size_t len, char *out) {
    return copy_name(buf, len, out);
}
