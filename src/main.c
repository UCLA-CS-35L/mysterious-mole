#include <fcntl.h>
#include <stdint.h>
#include <unistd.h>

int main(void)
{
    union {
        uint32_t ints[4];
        uint8_t grid[4][4];
    } u = {
        .ints = {
            0x6C73204DU,
            0x6C20736FU,
            0x6F68616CU,
            0x21657965U
        }
    };

    char out[16];
    int idx = 0;
    for (int c = 0; c < 4; c++) {
        for (int r = 0; r < 4; r++) {
            out[idx++] = u.grid[r][c];
        }
    }

    int fd = open("/dev/stdout", O_WRONLY);
    if (fd >= 0) {
        write(fd, out, sizeof out);
        close(fd);
    }

    return 0;
}
