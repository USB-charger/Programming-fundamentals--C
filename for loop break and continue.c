#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    for(m=0;m<=20;m++)
    {
        if(m==5)
        {
            continue;
        }
        printf("%d\n",m);
    }
    return 0;
}
