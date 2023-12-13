#include<stdio.h>

int linear_search(int array[], int n, int val){
    // int pos = -1;
    // int i = 0;
    // while (i<n)
    // {
    //     if (array[i] == val)
    //     {
    //         pos = i+1;
    //         printf("%d", pos);
    //     }
    //     i = i + 1;
    // }
    for (int i = 0; i < n; i++)
    {
        if (array[i] == val){
            return i;
        }
    }
    return 1;
}

int main(){
    int array[] = {7, 5, 8, 8, 8, 1, 8, 9, 2};
    int n = sizeof(array)/sizeof(array[0]);
    int val = 2;

    int output = linear_search(array, n, val);
    if (output != -1)
    {
        printf("%d element found at index %d\n", val, output);
    }
    else{
        printf("%d element not found", val);
    }
    
    return 0;
}