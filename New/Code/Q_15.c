// Sum & mean of n values
// Roll No: 25BEC071
#include <stdio.h>
int main() {
    int n,i,a,sum=0;
    float mean;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        sum=sum+a;
    }
    mean=sum/(float)n;
    printf("%d %f",sum,mean);
    return 0;
}
