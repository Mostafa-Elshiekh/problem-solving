#include <stdio.h>



/*
* Complete the 'hurdleRace' function below.
*
* The function is expected to return an INTEGER.
* The function accepts following parameters:
*  1. INTEGER k
*  2. INTEGER_ARRAY height
*/

int hurdleRace(int k, int height_count, int* height)
{
    int i,max=0;
    //Determine max element
    max=height[0];
    for(i=0;i<height_count;i++)
    {
        if(max<height[i])
            max=height[i];
    }
    if(k > max)
        return 0;
    else
        return (max-k) ;
}


int main()
{
    //k: the height the character can jump naturally
    //arr[height_count]: the heights of each hurdle
    int height_count,i,k;
    scanf("%d%d",&height_count,&k);
    int arr[height_count];

    for(i=0;i<height_count;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",hurdleRace(k,height_count,arr));
    return 0;
}
