#include <stdio.h>
#include <stdlib.h>

// Complete the catAndMouse function below.
char* catAndMouse(int x, int y, int z)
{
    int distance_A = abs(x-z);
    int distance_B  = abs(y-z);

    if(distance_A < distance_B)
    {
        return "Cat A";
    }
    else if(distance_B < distance_A)
    {
        return "Cat B";
    }
    else
    {
        return "Mouse C";
    }

}

int main()
{
    int query,i;
    int x,y,z;
    scanf("%d",&query);

    for(i=0;i<query;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        printf("%s\n",catAndMouse(x,y,z));
    }

    return 0;
}
