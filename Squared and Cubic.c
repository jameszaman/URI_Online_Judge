#include <stdio.h>

int main()

{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
        printf("%d ",i*i);
        printf("%d\n",i*i*i);
    }

    return 0;
}
