#include <stdio.h>
#include <math.h>
int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int a,b,c=0;
        scanf("%d%d", &a, &b);
        for(int i=sqrt(a);i<=sqrt(b);i++)
        {
            int k=i*i;
            if(k>=a && k<=b)
                c++;
        }
        printf("%d\n", c);
    }
    return 0;
}
