#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int m,n;
    scanf("%d",&m);
    int a[m], comps=0, swaps=0,i,j;
    
    if(m>0)
    {
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
    }
    
    scanf("%d",&n);
    int b[n];
    if(n>0)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
    }
    if(m<=0&&n<=0)
    {
        printf("%d",-1);
        return 0;
    }
    int c[m+n];
    for(i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        c[i+m]=b[i];
    }
    for(i=m+n-1;i>-1;i--)
    {
        for(j=0;j<i;j++)
        {
            if(c[j]>c[j+1])
            {
                c[j]=c[j]+c[j+1];
                c[j+1]=c[j]-c[j+1];
                c[j]=c[j]-c[j+1];
                swaps++;
            }
            comps++;
        }
    }
    // printf("%d\n\n%d\n\n",comps, swaps);
    for(i=0;i<m+n;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
