// C++ Implementation for drawing line 
#include <graphics.h> 
#include<stdio.h>
int main() 
{ 
   
    int gd = DETECT, gm; 
    initgraph(&gd, &gm,"c:\\tc\\bgi"); 
    line(150, 150, 450, 150); 
  
    getch(); 
  
    closegraph(); 
    return 0;
} 
