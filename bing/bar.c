#include <stdio.h>
#include <graphics.h>
#include <conio.h>
 
void drawBarChart(int m1, int m2, int m3){
    // Draw bar chart
    /*rectangle(100, 100+m1, 120, 200);
    rectangle(200, 50+m2, 220, 200);
    rectangle(300, 20+m3, 320, 200);*/

    rectangle(100,  200, 150, 200-m1);
    rectangle(200,  200, 250, 200-m2);
    rectangle(300,  200, 350, 200-m3);
}
 
int main() {  
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    // Draw a bar chart
    drawBarChart(150,140,130);
    getch();
    closegraph();
    return 0;
}  