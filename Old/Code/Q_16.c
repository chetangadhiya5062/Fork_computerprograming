// Calculate interest (I = PRN-100)
// Roll No: 25BEC071
#include <stdio.h>
int main() {
    float p, r, n, i;
    scanf("%f%f%f", &p, &r, &n);
    i = p*r*n/100;
    printf("%f", i);
    return 0;
}
