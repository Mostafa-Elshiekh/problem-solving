#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Complete the 'designerPdfViewer' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY h
 *  2. STRING word
 */
int designerPdfViewer(int h_count, int* h, char* word)
{
    char *English_letters = "abcdefghijklmnopqrstuvwxyz";
    int i, j, max = 0;
    int index[10];       //this array store the indexes corresponding litters
    int store_high[10]; //this array store height corresponding to these indexes

    //determine the index in English_letters and store it in index
    for (i = 0; i < strlen(word); i++) {
        for (j = 0; j < 26; j++) {
            if (word[i] == English_letters[j]) {
                index[i] = j;
            }
        }
    }

    //determine the heights corresponding this indexes
    for (i = 0; i < strlen(word); i++)
    {
        store_high[i] = h[index[i]];
    }

    //determine the max height litter
    max = store_high[0];
    for (j = 0; j < strlen(word); j++)
    {
        if (max < store_high[j])
            max = store_high[j];
    }

    //Return
    return  max * strlen(word);

}

int main()
{
    //i make h array not enter from user because long length array
    int h[26]={1,3,1,3,1,4,1,3,2,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5};
    char word[10];
    //scanning the word
    scanf("%s",word);
    printf("%d",designerPdfViewer(26,h,word));
    return 0;
}
