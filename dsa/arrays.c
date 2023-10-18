#include<stdio.h>
#define size 6

//adding an element to the array
// int main(){
//     int arr[size] = {1, 2, 3, 4, 5, 6};
//     int pos, value;

//     printf("Enter the position and value of the element:");
//     scanf("%d%d", &pos, &value);

//     if (pos <= size && pos >= 0)
//     {
//         // for shifting the elements of the array
//         for (int i = 0; i > pos; i--)
//         {
//             arr[i] = arr[i-1];
//         }
        
//         // for giving the needed position to the element entered
//         arr[pos] = value;

//         //now printing the entire array again
//         for (int i = 0; i <= size; i++)
//         {
//             printf("%d\n", arr[i]);
//         }
//     }
//     else{
//         printf("Sorry for the inconvenience!");
//     }
    
//     return 0;
// }

//deleting an element from an array
int main(){
    int arr[size] = {1, 2, 3, 4, 5, 6};
    int pos, i, index = -1;

    printf("Enter the position of the element:");
    scanf("%d", &pos);

    for (i = 0; i <= size; i++)
    {
        if (arr[i] == pos)
        {
            index = i;
            break;
        }
    }
    if (index != -1)
    {
        for ( i = index; i < size -1; i++)
        {
            arr[i] = arr[i+1];
        }
        
        //printing the elements of new array again
        printf("New Array:\n ");
        for ( i = 0; i < size -1; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else{
        printf("Element not found!");
    }
    
}
