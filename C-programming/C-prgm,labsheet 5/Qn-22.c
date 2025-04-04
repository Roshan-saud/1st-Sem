
#include <graphics.h> 
#include<stdio.h>
int main() 
{ 
  
    int gd = DETECT, gm; 
    initgraph(&gd, &gm,"c:\\tc\\bgi"); 
    circle(200, 200, 50); 
  
    getch(); 
    closegraph(); 
  
    return 0; 
} 