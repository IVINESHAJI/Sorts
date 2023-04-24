#include <stdio.h>


void insertionSort (int a[],int n) {
    int temp;int x;int j;
    for (int i = 1;i < n;i ++) {
        j = i - 1;
        x = a[i];
        while (j > -1 && x < a[j]){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x; 
    }
}


int main () { 
    int a[] = {8,1,7,6};int n = 4;
    insertionSort(a,n);
    for (int i = 0;i < n;i ++){
        printf("%d\t",a[i]);
    }
    return 0;
}