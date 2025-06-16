//เขียนโปรแกรมคำ นวณพื้นที่ของวงกลม โดยรับรัศมีของวงกลมจากผู้ใช้
#include <stdio.h>
void main()
{
    const float PI = 3.14159265;
    float r, CArea=0;
    printf("Enter radius : ");
    scanf("%f",&r);
    printf("\nr = %.2f",r);
    CArea = PI*(r*r);
    printf("\n\nCircle area = %.2f",CArea);
}