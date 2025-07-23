#include<stdio.h>

void bubble_sort(int a[], int n){
    int cnt = 0;
    for (int i = 0; i < n - 1; i++){
        int check = 0;
        for (int j = 0; j < n - i - 1; j++){ 
            if (a[j] > a[j+1]){            
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                check = 1;
            }
        }
        if (!check) break;
        cnt++;
        printf("Buoc %d: ", cnt) ;
        for (int k = 0; k < n; k++) printf("%d ", a[k]) ;
        printf("\n");
    }
}

int main(){
    int n; 
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    bubble_sort(a,n);
}

