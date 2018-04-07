#include <stdio.h>

int main(void)
{
    int f=1; int N=10;
    for(int n=1; n<=N; ++n)
    {f=f*n;
    printf("%i\n", f);
    }

    return 0;
}