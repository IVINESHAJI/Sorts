#include <stdio.h>


void merge(int a[],int low,int mid,int high) {

    int i = low,j = mid + 1,k = low;
    int c[high + 1];
    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            c[k] = a[i];
            i ++;
        }

        else {
            c[k] = a[j];
            j ++;
        }
        k ++;
    }

    for(;i <= mid;i ++){
        c[k] = a[i];
        k ++;
    }

    for(;j <= high;j ++) {
        c[k] = a[j];
        k ++;
    }

    for(int g = low;g < high + 1;g ++) {
        a[g] = c[g];
    }

}


void mergeSort(int a[],int low,int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(a,low,mid);
        mergeSort(a,mid + 1,high);
        merge(a,low,mid,high);
    }
}
int main () {
  int a[] = {5,9,1,8,2,0};int n = 6;
  mergeSort(a,0,n - 1);
  for(int i = 0;i < n;i ++){
    printf("%d\t",a[i]);
  }  
  return 0;
}