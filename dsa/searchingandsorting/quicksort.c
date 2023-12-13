#include<stdio.h>

int partition(int arr[], int lowb, int upb){
    int pivot = arr[lowb];
    int start = lowb;
    int end = upb;
    int temp, temp1;

    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            //basically here we did swapping for the elements
        }
    }
    if (start > end)
    {
        temp1 = arr[lowb];
        arr[lowb] = arr[end];
        arr[end] = temp1;
        //here we did swapping of first element on lowb and the element where end pointer is 
        //pointing
    }
    
    return end;
}

int quicksort(int arr[], int lowb, int upb){
    if (lowb < upb)
    {
        int location = partition(arr, lowb, upb);
        quicksort(arr, lowb, location-1);
        quicksort(arr, location+1, upb);
    }
    return 0;
}

int main(){
    int arr[] = {78, 64, 82, 19, 63, 82, 10, 56, 100};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = quicksort(arr, 0, n-1);
    printf("The sorted array is: ");
    for (int a = 0; a < n; a++)
    {
        printf("%d ", arr[a]);
    }

    return 0;
}