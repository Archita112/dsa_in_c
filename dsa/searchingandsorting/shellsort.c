#include<stdio.h>

int shell_sort(int arr[], int n){
    int gap, i, j;
    int temp;
    for (gap = n/2; gap >= 1; gap/=2)
    {
        for (j = gap; j < n; j++)
        {
            for (i = j-gap; i >= 0; i-=gap)
            {
                if (arr[i] > arr[i + gap])
                {
                    temp = arr[i];
                    arr[i] = arr[i + gap];
                    arr[i + gap] = temp;
                }
                else{
                    break;
                }
            }
        }
    }

    return -1;
}

int main(){
    int arr[] = {78, 64, 82, 19, 63, 82, 10, 56, 100};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = shell_sort(arr, n);
    printf("The sorted array is: ");
    for (int a = 0; a < n; a++)
    {
        printf("%d ", arr[a]);
    }

    return 0;
}