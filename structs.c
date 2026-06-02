#include <stdio.h>

struct point
{
    int x;
    int y;
};

struct point makepoint(int x, int y)
{
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

struct point addpoint(struct point p1, struct point p2)
{
    p1.x += p2.x;
    p1.y += p2.y;
    return p1;
}

void printPoint(struct point *p)
{
    printf("x=%d% | y=%d", (*p).x, (*p).y);
    printf("x=%d% | y=%d", p->x, p->y);
}