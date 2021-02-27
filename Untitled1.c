#include<stdio.h>
main()
{
    int x,n,sum,interarrival[100],arrival[100];
    arrival[1]=0;
    printf("The number of customer: ");
    scanf("%d",&n);
    printf("The inter arrival time: ");
    for(x=1;x<=n;x++){
        scanf("%d",&interarrival[x]);
    }
    for(x=2;x<=n;x++){
        arrival[x]=interarrival[x]+arrival[x-1];
    }
    for(x=1;x<=n;x++){
        printf("%d ",arrival[x]);
    }
}
