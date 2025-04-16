#include<stdio.h>
struct Point{
    float x;
    float y;
};
struct Point midPoint(struct Point p1, struct Point p2){
    struct Point mid;
    mid.x = (p1.x + p2.x)/2;
    mid.y = (p1.y + p2.y)/2;
    return mid;
}
void output(struct Point p){
    printf("The midpoint of the two points is : x = %g  y = %g\n", p.x, p.y);
}
int main(){
    struct Point p1, p2;
    printf("Enter the coordinates of the first point A(x, y) : ");
    scanf("%f, %f", &p1.x, &p1.y);
    printf("Enter the coordinates of the second point B(x, y) : ");
    scanf("%f, %f", &p2.x, &p2.y);
    struct Point mid = midPoint(p1, p2);
    output(mid);
    return 0;
}