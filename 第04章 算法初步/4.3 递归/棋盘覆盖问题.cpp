#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

const int MAXN = (256 * 256 - 1) / 3;

struct Point {
    int x, y;
    Point() {}
    Point(int _x, int _y) {x = _x; y = _y;}
} cards[MAXN];

int num = 0;

bool cmp(Point a, Point b) {
    if (a.x != b.x) return a.x < b.x;
    else return a.y < b.y;
}

void cover(int x, int y, int n, int cx, int cy) {
    if (n == 1) {
        return;
    } else {
        int h = n / 2;
        if (cx < x + h && cy >= y + h) {
            cards[num++] = Point(x + h, y + h - 1);
            cover(x, y + h, h, cx, cy);
        } else {
            cover(x, y + h, h, x + h - 1, y + h);
        }
        if (cx >= x + h && cy >= y + h) {
            cards[num++] = Point(x + h - 1, y + h - 1);
            cover(x + h, y + h, h, cx, cy);
        } else {
            cover(x + h, y + h, h, x + h, y + h);
        }
        if (cx < x + h && cy < y + h) {
            cards[num++] = Point(x + h, y + h);
            cover(x, y, h, cx, cy);
        } else {
            cover(x, y, h, x + h - 1, y + h - 1);
        }
        if (cx >= x + h && cy < y + h) {
            cards[num++] = Point(x + h - 1, y + h);
            cover(x + h, y, h, cx, cy);
        } else {
            cover(x + h, y, h, x + h, y + h - 1);
        }
    }
}

int main() {
    int k, cx, cy;
    scanf("%d%d%d", &k, &cx, &cy);
    cover(1, 1, (int)pow(2.0, k), cx, cy);
    sort(cards, cards + num, cmp);
    for(int i = 0; i < num; i++) {
        printf("%d %d\n", cards[i].x, cards[i].y);
    }
    return 0;
}
