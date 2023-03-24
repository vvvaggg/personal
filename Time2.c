#include <stdio.h>
struct Time {
    int h;
    int m;
    int s;
};
int main() {
    struct Time t1, t2, dt;

    scanf("%d:%d:%d", &t1.h, &t1.m, &t1.s);
    scanf("%d:%d:%d", &t2.h, &t2.m, &t2.s);
    dt.h = t2.h - t1.h;
    dt.m = t2.m - t1.m;
    dt.s = t2.s - t1.s;
    if (dt.s < 0) {
        dt.s += 60;
        dt.m--;
    }
    if (dt.m < 0) {
        dt.m += 60;
        dt.h--;
    }
    printf("%02d:%02d:%02d\n", dt.h, dt.m, dt.s);
    getchar();
    return 0;
}
