#include <stdio.h>

/*
 * Complete the 'angryProfessor' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY a
 */

char* angryProfessor(int k, int a_count, int* a)
{
    int i;
    int Count_On_Time=0;
    int Count_Out_Time=0;
    for(i=0;i<a_count;i++)
    {
        if(a[i]<=0)
        {
            Count_On_Time++;
        }
        else
        {
            Count_Out_Time++;
        }
    }
    if( Count_On_Time>=k)
        return "NO";
    else
        return "YES";

}

int main()
{
    int k,num,j;
    scanf("%d %d",&num,&k);
    int arr[num];

    for(j=0;j<num;j++)
    {
        scanf("%d",&arr[j]);
    }
    printf("%s",angryProfessor(k,num,arr));
    return 0;
}
