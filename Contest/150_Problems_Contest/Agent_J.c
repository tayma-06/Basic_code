#include<stdio.h>
#include<math.h>
int main(){
    int T;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
        double R1, R2, R3;
        scanf("%lf %lf %lf", &R1, &R2, &R3);
        double a = R2 + R3, b = R1 + R3, c = R1 + R2;
        double s = (a + b + c) / 2.0;
        double A = sqrt(s * (s - a) * (s - b) * (s - c));
        double theta_1 = acos((b * b + c * c - a * a) / (2 * b * c));
        double theta_2 = acos((a * a + c * c - b * b) / (2 * a * c));
        double theta_3 = acos((a * a + b * b - c * c) / (2 * a * b));
        double segment_1 = 0.5 * theta_1 * R1 * R1;
        double segment_2 = 0.5 * theta_2 * R2 * R2;
        double segment_3 = 0.5 * theta_3 * R3 * R3;
        double Area = A - (segment_1 + segment_2 + segment_3);
        printf("Case %d: %.8lf\n", i, Area);
    }
    return 0;
}
