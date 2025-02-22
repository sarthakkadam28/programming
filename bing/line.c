#include <stdio.h>
#include <graphics.h>

#include <conio.h>

void drawFace(int x, int y){
    // Draw face (circle)
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(x, y, YELLOW); // Fill the face with yellow
    circle(x, y, 100); // Face outline

     // Draw eyes (two circles)
    setcolor(BLACK);
    circle(x - 40, y - 30, 10); // Left eye
    circle(x + 40, y - 30, 10); // Right eye

     // Draw pupils (two smaller circles)
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(x - 40, y - 30, BLACK); // Left pupil
    floodfill(x + 40, y - 30, BLACK); // Right pupil

    // Draw mouth (ellipse)
     arc(x, y + 20, 180, 360, 50); // Smile
}


int main() {
    //declare variable for driver and mode
    int gd = DETECT, gm;
    //initgraph initializes the graphics system 
    //by loading a graphics driver from disk
    initgraph(&gd, &gm, "");
    //setcolor sets the current drawing color using the color value
    /*int centerx = 200;
    int centery = 200;
    int radius = 50;
    circle(centerx, centery, radius);
    */
    /*int x1 = 10, y1 = 10, x2 = 200, y2 = 200;
    line(x1, y1, x2, y2);
    */

   //logic for smily face
    int centerx = getmaxx() / 2;
    int centery = getmaxy() / 2;

    drawFace(centerx, centery);
    getch();
    closegraph();
    return 0;
}   