/* Problrms on N numbers 

1)  In this topic we accept *multiple* numbers from the user and perform the operstions on that N numbers(multiple).
2)  In the previous topiucs we create a single variable but in this topic to store multiple the numbers we have to create an *ARRAY*.
3)  To solve the questions in this topic we are follow  below rules :- 
    i       We are accepting the number elements from user.
    ii      According to the number of elements we are going to allocate the memory *dynamicaly*    
    iii     After allocating the dynamic memory we accept actual numbers from user and store it in that dynamicaly allocated memory.
    iv      After storing all the elements in that memory we pass that ARRAY to the function which is going to perform the operation.
    v       Afer completing the task we have to *deallocate* that dynamic memory explicitly.

    refer this file :- 
*/

/*Problem St : Accept the N number from user and perform of the addition of that N numbers */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int Arr[5];

    printf("Entre the elements : ");
    scanf("%d", &Arr[0]);
    scanf("%d", &Arr[1]);
    scanf("%d", &Arr[2]);
    scanf("%d", &Arr[3]);
    scanf("%d", &Arr[4]);

    printf("Elements from array are : ");

    printf("%d\n", Arr[0]);
    printf("%d\n", Arr[1]);
    printf("%d\n", Arr[2]);
    printf("%d\n", Arr[3]);
    printf("%d\n", Arr[4]);
    
    return 0;
}