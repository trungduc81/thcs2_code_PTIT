#include<stdio.h>

typedef struct {
    int w, h ;
} hcn ;

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void ghep(hcn *r){
    if(r->w < r->h){
        swap(&r->w, &r->h);
    }
}

int main(){
    hcn r[3];
    for(int i = 0; i < 3; i++){
        scanf("%d%d", &r[i].w, &r[i].h);
        ghep(&r[i]);
    }

    for(int i = 0; i < 2; i++){
        for(int j = i + 1; j < 3; j++){
            if(r[j].w > r[i].w){
                hcn tmp = r[i];
                r[i] = r[j];
                r[j] = tmp;
            }
        }
    }

    if(r[0].w == r[1].w && r[1].w == r[2].w){
        int tong_h = r[0].h + r[1].h + r[2].h;
        if(r[0].w == tong_h){
            printf("YES\n");
            return 0;
        }
    }

    int ok = 0;
    for(int xoay0 = 0; xoay0 < 2; xoay0++){
        int a, b;
        if(xoay0 == 0){
            a = r[0].w;
            b = r[0].h;
        } else {
            a = r[0].h;
            b = r[0].w;
        }

        for(int xoay1 = 0; xoay1 < 2; xoay1++){
            int c, d;
            if(xoay1 == 0){
                c = r[1].w;
                d = r[1].h;
            } else {
                c = r[1].h;
                d = r[1].w;
            }

            for(int xoay2 = 0; xoay2 < 2; xoay2++){
                int e, f;
                if(xoay2 == 0){
                    e = r[2].w;
                    f = r[2].h;
                } else {
                    e = r[2].h;
                    f = r[2].w;
                }

                if(a == d + f && c == e && b + c == a){
                    ok = 1;
                    break;
                }
            }

            if(ok) break;
        }

        if(ok) break;
    }

    if(ok) printf("YES\n");
    else printf("NO\n");
}
