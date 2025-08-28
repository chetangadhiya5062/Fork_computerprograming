// Average of 3 subjects with total
// Roll No: 25BEC071
#include <stdio.h>
int main() {
    float a, b, c, total, avg;
    scanf("%f%f%f", &a, &b, &c);
    total = a+b+c;
    avg = total/3;
    printf("%f %f", total, avg);
    return 0;
}
