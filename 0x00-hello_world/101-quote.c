#include <unistd.h>

int main() {
    char *message = "and that piece of art is useful - Dora Korpar, 2015-10-19\n";
    write(2, message, 59); // 59 is the number of characters in the message (excluding the null terminator)

    return 1;
}
