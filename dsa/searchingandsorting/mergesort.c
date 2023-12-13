#include<stdio.h>
#include<malloc.h>

void merge(int arr[], int lowb, int mid, int upb){
    int i = lowb;
    int j = mid+1;
    int k = lowb;
    // int b[k];
    int *b = (int *)malloc((upb + 1) * sizeof(int));

    while (i<=mid && j<=upb)
    {
        if (arr[i] <= arr[j])
        {
            b[k] = arr[i];
            i++;
        }
        else{
            b[k] = arr[j];
            j++;
        }
        k++;
    }
    if (i>mid)
    {
        while (j<=upb)
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    else{
        while (i<=mid)
        {
            b[k] = arr[i];
            i++;
            k++;
        }
    }
    
    for (k = lowb; k <= upb; k++)
    {
        arr[k] = b[k];
    }
    free(b);
}

int merge_sort(int arr[], int lowb, int upb){
    int mid;
    if (lowb<upb)
    {
        mid = (lowb+upb)/2;
        merge_sort(arr, lowb, mid);
        merge_sort(arr, mid+1, upb);
        merge(arr, lowb, mid, upb);
    }
    return -1;
}

int main(){
    int arr[] = {78, 64, 82, 19, 63, 82, 10, 56, 100};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = merge_sort(arr, 0, n-1);
    printf("The sorted array is: ");
    for (int a = 0; a < n; a++)
    {
        printf("%d ", arr[a]);
    }

    return 0;
}