// Print sum of n natural numbers
// Roll No: 25BEC071
#include <stdio.h>
int main() {
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i;
    printf("%d",sum);
    return 0;
}
