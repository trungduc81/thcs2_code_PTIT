#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cnt[1005];

int cmp(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int xuly(int a[], int n, int res[]){
    memset(cnt, 0, sizeof(cnt));
    for (int i = 0; i < n; i++) {
        cnt[a[i]]++;
    }
    int idx = 0;
    for (int i = 0; i < 1000; i++){
        if (cnt[i]) {
            res[idx++] = i;
        }
    }
    return idx;
}

void giao(int a[], int b[], int m, int n){
    int i = 0, j = 0;
    while (i < m && j < n){
        if (a[i] == b[j]){
            printf("%d ", a[i]);
            i++;
            j++;
        } else if (a[i] < b[j]){
            i++;
        } else {
            j++;
        }
    }
    printf("\n");
}

void hieu(int a[], int b[], int m, int n){
    int i = 0, j = 0;
    while (i < m && j < n){
        if (a[i] < b[j]) {
            printf("%d ", a[i]);
            i++;
        } else if (a[i] > b[j]){
            j++;
        } else {
            i++;
            j++;
        }
    }
    while (i < m){
        printf("%d ", a[i++]);
    }
    printf("\n");
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    int res1[105], res2[105];
    int len1 = xuly(a, n, res1);
    int len2 = xuly(b, m, res2);

    qsort(res1, len1, sizeof(int), cmp);
    qsort(res2, len2, sizeof(int), cmp);

    giao(res1, res2, len1, len2);     
    hieu(res1, res2, len1, len2);     
    hieu(res2, res1, len2, len1);    
}

