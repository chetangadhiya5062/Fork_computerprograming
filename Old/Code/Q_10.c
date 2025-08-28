// Convert dollars into pound (1$ = 48 Rs, 1 pound = 70 Rs)
// Roll No: 25BEC071
#include <stdio.h>
int main() {
    float d, p;
    scanf("%f", &d);
    p = (d * 48) / 70;
    printf("%f", p);
    return 0;
}
