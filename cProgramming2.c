#include<stdio.h>
int main()
{
    float  base,height,area;

    printf("Type base:");
    scanf("%f",&base);

    printf("Type height:");
    scanf("%f",&height);

    area=1/(float)2*base*height;
    printf("Area:%.1f\n",area);
    return 0;

}
