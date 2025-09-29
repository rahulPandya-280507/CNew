#include <stdio.h>
int raise (int x, int y) {
    int pro = 1;
    for (int i=0; i<y; i++) {
        pro *= x;
    }
    return pro;
}
int main() {
    int n, m;
    printf("Enter the base and exponent: ");
    scanf("%d %d", &n, &m);
    int res = raise(n,m);
    printf("%d", res);
}