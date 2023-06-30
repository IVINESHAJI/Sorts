#include <stdio.h>
#include <stdlib.h>


void swap (int *a,int *b) {

    int temp = *a;
    *a = *b;
    *b = temp;

}
void heapify (int a[],int n,int i) {

    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[largest]) {

        largest = left;

    }

    if (right < n && a[right] > a[largest]) {

        largest = right;

    }

    if (largest != i) {

        swap (&a[i],&a[largest]);
        heapify (a,n,largest);

    }

}

int main () {
    int a[] = {12, 11, 13, 5, 6, 7};
    int n = 6;

    for (int i = (n - 1) / 2;i >= 0;i --) {

        heapify(a,n,i);

    }

    for (int i = 0;i < n;i ++) {
        printf("%d\t",a[i]);
    }

    printf("\n");
    return 0;
}