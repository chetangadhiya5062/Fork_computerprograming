// Convert Rs into dollars (1$ = 48 Rs)
// Roll No: 25BEC071
#include <stdio.h>
int main() {
    float r, d;
    scanf("%f", &r);
    d = r / 48;
    printf("%f", d);
    return 0;
}
