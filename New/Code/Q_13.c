// Sum of numbers divisible by 13 from 1–100
// Roll No: 25BEC071
#include <stdio.h>
int main() {
    int i,sum=0;
    for(i=1;i<=100;i++)
        if(i%13==0) sum=sum+i;
    printf("%d",sum);
    return 0;
}
