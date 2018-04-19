#include <stdio.h>
#define pi 3.1416
int main()
{
    int i,a;
    float L,W,R,rarea,area,garea;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        scanf("%f",&L);
        W=((L*60)/100);
        R=((L*20)/100);
        rarea=2*pi*R;
        area=L*W;
        garea=area-rarea;
        printf("%.2f %.2f\n",rarea,garea);

    }
    return 0;

}
