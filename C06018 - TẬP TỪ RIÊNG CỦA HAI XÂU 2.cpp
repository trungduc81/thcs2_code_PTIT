#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int cmp(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int ktra(char res[100][50], int n, char *word) {
	int check = 0 ; 
    for (int i = 0; i < n; i++) {
        if (strcmp(res[i], word) == 0) return 1 ;
    }
    return 0;
}

void solve() {
    char s1[205], s2[205];
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = 0;
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = 0;

    char a[100][50], b[100][50], res[100][50];
    int idx1 = 0, idx2 = 0, idx3 = 0;

    char *token = strtok(s1, " ");
    while (token != NULL) {
        strcpy(a[idx1++], token);
        token = strtok(NULL, " ");
    }
    
    token = strtok(s2, " ");
    while (token != NULL) {
        strcpy(b[idx2++], token);
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < idx1; i++) {
        int check = 0;
        for (int j = 0; j < idx2; j++) {
            if (strcmp(a[i], b[j]) == 0) {
                check = 1 ;
                break ;
            }
        }
        if (!check && !ktra(res, idx3, a[i])) {
            strcpy(res[idx3++], a[i]);
        }
    }

    qsort(res, idx3, sizeof(res[0]), cmp);

    for (int i = 0; i < idx3; i++) {
        printf("%s ", res[i]);
    }
    printf("\n") ; 
}

int main(){
	int t ; scanf("%d",&t) ;
	getchar() ; 
	while(t--){
		solve() ; 
	}
}



