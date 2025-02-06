#include<stdio.h>
#include<math.h>
int main(){
    int T;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
        int ox, oy, ax, ay, bx, by;
        scanf("%d%d%d%d%d%d", &ox, &oy, &ax, &ay, &bx, &by);
        double radius = sqrt((ax - ox) * (ax - ox) + (ay - oy) * (ay - oy));
        double dot_product = (ax - ox) * (bx - ox) + (ay - oy) * (by - oy);
        double cos_theta = dot_product / (radius * radius);
        if(cos_theta > 1.0) cos_theta = 1.0;
        if(cos_theta < -1.0) cos_theta = -1.0;
        double theta = acos(cos_theta);
        double arc_distance = radius * theta;
        printf("Case %d: %.8lf\n", i, arc_distance);
    }
    return 0;
}
