// Sum & mean of any 10 values
// Roll No: 25BEC071
#include <stdio.h>
int main() {
    int i,a,sum=0;
    float mean;
    for(i=1;i<=10;i++){
        scanf("%d",&a);
        sum=sum+a;
    }
    mean=sum/10.0;
    printf("%d %f",sum,mean);
    return 0;
}
