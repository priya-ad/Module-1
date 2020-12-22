//INPUT:3.45 6.56 4.78 8.65                                                                                                           
//OUTPUT : Slope : 1.57 Midpoint : (4.12,7.60)  
#include<stdio.h>

int main()
{
    float x1,x2,y1,y2,slope,midX,midY;
    printf(" Enter the X Coordinate and Y coordinate of Endpoint 1 and Endpoint 2: ");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    printf(" The Endpoints of a Line are : (%.2f,%.2f) and (%.2f,%.2f)",x1,y1,x2,y2);
    slope=(y2-y1)/(x2-x1);
    midX=(x1+x2)/2;
    midY=(y1+y2)/2;
    printf("Slope : %.2f",slope);
    printf("Midpoint : (%.2f,%.2f)",midX,midY);
    return 0;
}
