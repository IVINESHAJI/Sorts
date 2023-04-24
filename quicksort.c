#include <stdio.h>

int partition(int a[],int low,int high) {
    int i = low;int j = high;int temp;
    int pivot = a[low];

    while (i < j){
        do {
            i ++;
        }while (a[i] < pivot);
        do{
            j --;
        }while (pivot < a[j]);

        if (i < j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[j];
    a[j] = a[low];
    a[low] = temp;

    return j;
}

void quickSort (int a[],int low,int high) {
    if (low < high) {
        int j = partition(a,low,high);
        quickSort(a,low,j);
        quickSort(a,j + 1,high);
    }
}

int main () {
    int a[] = {5,9,1,8,2,0};int n = 6;
    quickSort(a,0,n);
    for(int i = 0;i < n;i ++){
        printf("%d\t",a[i]);
    }
    return 0;
}