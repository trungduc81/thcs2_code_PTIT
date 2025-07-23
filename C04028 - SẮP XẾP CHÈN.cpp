#include<stdio.h>

void insertion_sort(int a[], int n){
    for (int i = 0; i < n; i++){
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        printf("Buoc %d: ", i) ;
        for (int k = 0; k <= i; k++){
            printf("%d ", a[k]) ;
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    insertion_sort(a, n);
}
