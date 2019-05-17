#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[999],b[999];
    int n,m,s=0,t=0;
    gets(a);
    gets(b);
    n=strlen(a);
    m=strlen(b);
    for(int i=0;i<n;i++)
        s=s+a[i];
    for(int i=0;i<m;i++)
        t=t+b[i];
    if(s>t)
        printf("1>2\n");
    else if(s<t)
        printf("1<2\n");
    else
        printf("1==2\n");
printf("%s%s\n",a,b);
printf("%d",m+n);
    return 0;
}
