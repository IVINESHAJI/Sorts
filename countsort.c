#include <stdio.h>
#include <stdlib.h>

void countSort (int a[],int n) {
    int max = 0;
    for(int i = 0;i < n;i ++){
        if (a[i] > max) {
            max = a[i];
        }
    }

    int *count = (int *)malloc((max + 1) * sizeof (int));

    for (int i = 0;i <= max;i ++){
        count[i] = 0;
    }

    for (int i = 0;i <= n;i ++){
        count[a[i]] ++;
    }

    int k = 0,j = 0;

    while (j <= max) {
        if (count[j] > 0) {
            a[k] = j;
            k ++;
            count[j] --;
        }
        else {
            j ++;
        }
    }
}

int main () {

    int a[] = {2,1,5,3,4,4,12,3,7,9,8,8,2,8,1}, n = 15;
    countSort(a,n);
    for (int i = 0;i < n;i ++){
        printf("%d\t",a[i]);
    }
    return 0;
}