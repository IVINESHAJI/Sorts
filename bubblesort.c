#include <stdio.h>


void bubbleSort (int a[],int n) {
    int temp;
    for (int i = 0;i < n;i ++){
        for (int j = 0;j < n - i -1;j ++){
                if (a[j + 1] < a[j]) {
                    temp = a[j];
                    a[j]  = a[j + 1];
                    a[j + 1] = temp;
                }
        }
    }
}
int main () {
    int a[4] = {8,1,7,6};int n = 4;
    bubbleSort(a,n);
    for (int i = 0;i < n;i ++) {
        printf("%d\t",a[i]);
    }
}