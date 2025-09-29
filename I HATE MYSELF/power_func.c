#include <stdio.h>

int raise (int x, int y) {
    int pro = 1;
    for (int i=0; i<y; i++) {
        pro *= x;
    }
    return pro;
}
