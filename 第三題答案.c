#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    scanf("%d",&input);
    if(input<=0)
        printf("error");
    else
        printf("output:%d",input-input/5-input/3+2*input/15);
    return 0;
}
