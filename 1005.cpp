#include<stdio.h>
int main()
{
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int A, B, i;
    long n;
    int f[201];
    f[1] = f[2] = 1;
    while (scanf_s("%d %d %ld", &A, &B, &n))
    {
        if (A == 0 && B == 0 && n == 0) break;
        int cnt = 0;
        if (n < 3){
            printf("%d\n", f[n]);
            continue;
        }
        for (i = 3; i <= 200; i++)//����ҵ����� 
        {
            f[i] = (A*f[i - 1] + B*f[i - 2]) % 7;
            if (f[i] == 1 && f[i - 1] == 1)break;
            if (f[i] == 0 && f[i - 1] == 0){ cnt = 1; break; }//�����и�С���壬���A=7��B=7����涼Ϊ0�� 
        }
        if (cnt){ printf("0\n"); continue; }
        if (i>n){ printf("%d\n", f[n]); continue; }
        i -= 2;//iΪ����
        n %= i;
        if (n == 0)n = i;
        printf("%d\n", f[n]);
    }
    return 0;

}
