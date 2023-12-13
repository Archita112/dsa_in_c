#include<stdio.h>

int binary_search(int arr[], int lowb, int upb, int val){
    int beg = lowb;
    int end = upb;
    // int pos = -1;
    while (lowb <= upb)
    {
        int mid = beg + (end - beg)/2;
        if (arr[mid]==val)
        {
            return mid;
        }
        else if (arr[mid] < val)
        {
            beg = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = 7;
    
    int result = binary_search(arr, 0, n-1, val);
    if (result != -1)
    {
        printf("%d element found at index %d\n", val, result);
    }
    else{
        printf("%d element not found\n", val);
    }
    return 0;
}