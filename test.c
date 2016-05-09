#include <stdio.h>

#define TYPE(minor) (( (minor) >> 4) & 0xf ) // high nibble

int main(int argc, char const *argv[])
{
    printf("High nibble = %d\n", TYPE(0xff));
    return 0;

}