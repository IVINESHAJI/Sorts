#include <stdio.h>

void selectionSort(int a[],int n) {
    int temp;int k,j;
    for(int i = 0;i < n - 1;i ++){
        k = i;
        for (j = i;j < n;j ++){
            if (a[k] > a[j]) {
                k = j;
            }
        }
        temp = a[k];
        a[k] = a[i];
        a[i] = temp;
    }
}

int main () {
    int arr[] = {8,1,7,6};int n = 4;
    selectionSort(arr,n);
    for(int i = 0;i < 4;i ++){
        printf("%d\t",arr[i]);
    }
    return 0;
}