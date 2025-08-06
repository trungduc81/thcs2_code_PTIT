#include<stdio.h>

int max(int a, int b){
    return a > b ? a : b ;
}

int min(int a, int b){
    return a < b ? a : b ;
}

int main(){
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    scanf("%d%d%d%d", &x3, &y3, &x4, &y4);

    int minx = min(x1, x3);
    int maxx = max(x2, x4);
    int miny = min(y1, y3);
    int maxy = max(y2, y4);

    int canh = max(maxx - minx, maxy - miny);
    printf("%d\n", canh * canh);
}
