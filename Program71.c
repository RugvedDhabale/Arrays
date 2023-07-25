#include <stdio.h>
#include <stdlib.h>

void DisplayRverse(int Arr[], int iSize)
{
    int iCnt = 0; 

    for(iCnt = iSize - 1; iCnt >= 0; iCnt--)
    {
        printf("%d  ", Arr[iCnt]);
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;

    printf("Entre number o elements : \n");     //1
    scanf("%d", &iLength);

    ptr = (int *)malloc(sizeof(int) * iLength);     //2

    printf("Entre the element : \n");   //3
    for(i = 0; i < iLength; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("Elements in the reverse order : \n");

    DisplayRverse(ptr, iLength);   //4

    free(ptr);

    return 0;
}