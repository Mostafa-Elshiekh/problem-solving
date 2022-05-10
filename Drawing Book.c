#include <stdio.h>
#include <stdlib.h>

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p)
{
    int CountFromStart=0;
    int CountFromEnd=0;

    //From start
    if(p%2==0) //p is even
    {
        CountFromStart = p/2;
    }
    else //p in odd
    {
        p=p-1;
        CountFromStart = p/2;
    }

    //From End
    if(p%2==0) //p is even
    {
        CountFromEnd = (n-p)/2;
    }
    else //p in odd
    {
        p=p-1;
        CountFromEnd = (n-p)/2;
    }

    //Return
    if(CountFromStart <= CountFromEnd)
        return CountFromStart;
    else
        return CountFromEnd;
}

int main()
{
 int n,p;
 scanf("%d %d",&n,&p);
 printf("%d",pageCount(n,p));
    return 0;
}
