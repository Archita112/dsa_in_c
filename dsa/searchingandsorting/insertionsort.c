#include<stdio.h>

int insertion_sort(int arr[], int n){
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    return -1;
}

int main(){
    int arr[] = {9, 7, 2, 8, 4, 5, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = insertion_sort(arr, n);
    printf("The sorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}