#include <stdio.h>
/*
 * Complete the 'utopianTree' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int utopianTree(int n)
{
    int hight=1,i;  //height of 1 meter is planted at the onset of spring

    for(i=1;i<=n;i++)
    {
        if(i%2!=0 && n!=0)  //Each spring, it doubles in height
        {
            hight = hight*2;
        }
        else if(i%2==0 && n!=0 ) //Each summer, its height increases by 1 meter.
        {
            hight = hight+1;
        }
    }
    return hight;
}

int main()
{
    int cycle,i;
    //scanning number of cycle
    scanf("%d",&cycle);

    //scanning numbers of cycles
    int arr[cycle];
    for (int i = 0; i <cycle ; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<cycle;i++)
    {
        printf("%d\n",utopianTree(arr[i]));
    }
    return 0;
}
