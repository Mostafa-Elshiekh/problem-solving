#include <stdio.h>

/*
 * Complete the 'findDigits' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int findDigits(int n)
{
    int count_digit=0,i,mod=0,Result=0;
    int copy1_n=n,copy2_n=n;

    //determine number of digits in n
    while (n!=0)
    {
        n=n/10;
        count_digit++;
    }


    for (i=1;i<=count_digit;i++)
    {
        //Split each digit separately
        if(i==1)
        {
            mod = (copy1_n % 10);
        }
        else
        {
            copy1_n=copy1_n/10;
            mod = (copy1_n)%10;
        }

        //determine whether it is a divisor
        if(mod!=0 && copy2_n%mod==0)
            Result++;
    }

    return Result;

}


int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",findDigits(n));
    return 0;
}
