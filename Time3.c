#include <stdio.h>
#define MAXN 1000
struct Time {
    int h;
    int m;
    int s;
};
struct Skier {
    int num;
    struct Time start;
    struct Time finish;
    struct Time diff;
};

struct Time diff_time(struct Time t2, struct Time t1);
int main() {
    struct Time t1, t2, dt;
    struct Skier v[MAXN];
    int n;
    scanf("%d", &n);
    int i = 0;
    while (i < n) {
        scanf("%d", &v[i].num);
        scanf("%d", &v[i].start.h);
        scanf("%d", &v[i].start.m);
        scanf("%d", &v[i].start.s);
        scanf("%d", &v[i].finish.h);
        scanf("%d", &v[i].finish.m);
        scanf("%d", &v[i].finish.s);
        v[i].diff = diff_time(v[i].finish, v[i].start);
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        printf("%d. %02d:%02d:%02d %02d:%02d:%02d %02d:%02d:%02d\n", v[i].num,
            v[i].start.h, v[i].start.m, v[i].start.s,
            v[i].finish.h, v[i].finish.m, v[i].finish.s,
            v[i].diff.h, v[i].diff.m, v[i].diff.s
            );
        i = i + 1;
    }
    getchar();
    return 0;
}

struct Time diff_time(struct Time t2, struct Time t1) {
    struct Time dt;

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
    return dt;
};
