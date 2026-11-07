#include "parser.h"

int handle_packet(const uint8_t *buf, size_t len, char *out) {
    return copy_name(buf, len, out);
}
