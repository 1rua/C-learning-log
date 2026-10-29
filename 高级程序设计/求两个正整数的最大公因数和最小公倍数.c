#include <stdio.h>
#include <math.h>

#define MAX_N 10000

int pri[MAX_N];
int abpri[MAX_N];

int IsPrime(int n);

int main()
{
    int MaxSameFactor(int a, int b);
    int MinCommonMultiple(int a, int b);

    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d与%d的最大公因数为%d\n", a, b, MaxSameFactor(a, b));
    printf("%d与%d的最小公倍数为%d\n", a, b, MinCommonMultiple(a, b));

    return 0;
}

int IsPrime(int n)
{
    int flag;
    int i;

    if (n == 1)
    {
        flag = 0;
    }
    else if (n == 2)
    {
        flag = 1;
    }
    else
    {
        flag = 1;
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    return flag;
}
int MaxSameFactor(int a, int b)
{
    //存入素数
    int i;
    int n = 0;
    int gcd = 1;
    for(i = 2 ; i < MAX_N ; i++)
    {
        if(IsPrime(i) == 1)
        {
            pri[n++] = i;
        }
        
    }
    //存入最小指数
    for(n = 0 ; n < 1229 ; n++)
    {
        if(a % pri[n] == 0 && b % pri[n] == 0)
        {
            abpri[n]++;
            a = a / pri[n];
            b = b / pri[n];
            n--;
        }
    }
    //计算
    for(i = 0 ; i < 1229 ; i++)
    {
        if(abpri[i] != 0)
        {
            gcd = gcd * pow(pri[i] , abpri[i]);
        }
        
    }
    return gcd;
}

int MinCommonMultiple(int a, int b)
{
    int i;
    int lcm;
    for(i = 0; i < MAX_N; i++)
    {
    abpri[i] = 0;
    }
    lcm = (a * b) / MaxSameFactor(a , b);
    return lcm;
}

/* 
编写程序，求两个正整数的最大公约数    504
                                    2   5040   10584
                                     2  2520    5292
                                     2  1260    2646
                                     3   630    1323
                                      3  210     441
                                       7  70     147
                                          10      21 
pri[i]   2   3   5   7   11  13...  pri是质因数
    i    0   1   2   3   4   5 ...  i是余数
abpri[i] 3   2   0   1   0   0...   adpr是指数

*/