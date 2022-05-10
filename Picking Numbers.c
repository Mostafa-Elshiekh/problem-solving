#include <math.h>
#include <stdio.h>
#include <stdlib.h>



/*
 * Complete the 'pickingNumbers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int pickingNumbers(int a_count, int* arr_user)
{
    int i,j,max,index;
    int arr_freq[100]={0};  //This arr to store frequency for all elements

    //Bubble sort
    for (i = 0; i < a_count-1; i++)
    {
        // Last i elements are already in place
        for (j = 0; j < a_count-i-1; j++)
        {
            if (arr_user[j] > arr_user[j+1])
                swap(&arr_user[j], &arr_user[j+1]);
        }
    }

    //determine frequency for all elements
    for(i=0;i<a_count;i++)
    {
        for(j=0;j<a_count;j++)
        {
            if(arr_user[j]==i)
            {
                arr_freq[i]++;
            }
        }
    }

    //To determine the index of max element frequency
    max = arr_freq[0];
    for(i=0;i<a_count;i++)
    {
        if(arr_freq[i]>max)
        {
            max=arr_freq[i];
            index=i;
        }
    }

    //to determine The maximum length subarray
    if(arr_freq[index-1] > arr_freq[index+1])
    {
        return arr_freq[index-1]+arr_freq[index];
    }
    else
    {
        return arr_freq[index]+arr_freq[index+1];
    }
}

int main()
{
    int a_count,i;
    scanf("%d",&a_count);
    int arr_user[a_count];
    for(i=0;i<a_count;i++)
    {
        scanf("%d",&arr_user[i]);
    }

    printf("%d",pickingNumbers(a_count,arr_user));

    return 0;
}


