#include <float.h>
#include <limits.h>
#include <stdio.h>

int main() {
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: %u to %u\n", 0, UINT_MAX);
    printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short: %u to %u\n", 0, USHRT_MAX);
    printf("long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long: %lu to %lu\n", 0UL, ULONG_MAX);
    printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char: %u to %u\n", 0, UCHAR_MAX);
    printf("float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("double: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("long double: %Le to %Le\n", LDBL_MIN, LDBL_MAX);
    return 0;
}
