#include<stdio.h>
#include<math.h>

int main()

{
    double X1,X2,Y1,Y2,distance;
    scanf("%lf%lf%lf%lf",&X1,&Y1,&X2,&Y2);
    distance = sqrt((X2-X1)*(X2-X1)+(Y1-Y2)*(Y1-Y2));
    printf("%.4lf\n",distance);

    return 0;
}
