#include <stdio.h>

void insert(int a[],int n) /*n - Pos at which ele was added*/
{
    int i = n;
    int temp = a[n];

    while (i > 0 && temp > a[(i - 1) / 2]) {
        
        a[i] = a[(i - 1) / 2];
        i = (i - 1) / 2;

    }

    a[i] = temp;

}

int main () {
    
    int a[] = {30,25,24,20,12,20,18,40};
    int n = 7;
    insert(a,n);

    for (int i = 0;i <= n;i ++) {
        printf("%d\t",a[i]);
    }

    return 0;
}