#include <stdio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm,"c:\\tc\\bgi");
    rectangle(100, 100, 70,70);
    getch();
    closegraph();

    return 0;
}