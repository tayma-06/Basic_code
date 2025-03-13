#include <stdio.h>
struct Point
{
    double x;
    double y;
};
struct Rectangle
{
    struct Point TopLeft;
    struct Point BottomRight;
};
struct Point Point_Make(double x, double y)
{
    struct Point A = {x, y};
    return A;
}
struct Rectangle Rectangle_Make(struct Point topLeft, struct Point bottomRight)
{
    struct Rectangle R = {topLeft, bottomRight};
    return R;
}
double Rectangle_Width(const struct Rectangle *rect)
{
    if (((*rect).TopLeft.x - (*rect).BottomRight.x) < 0)
        return -((*rect).TopLeft.x - (*rect).BottomRight.x);
    return ((*rect).TopLeft.x - (*rect).BottomRight.x);
}
double Rectangle_Height(const struct Rectangle *rect)
{
    if (((*rect).TopLeft.y - (*rect).BottomRight.y) < 0)
        return -((*rect).TopLeft.y - (*rect).BottomRight.y);
    return ((*rect).TopLeft.y - (*rect).BottomRight.y);
}
double Rectangle_Area(const struct Rectangle *rect)
{
    return (Rectangle_Height(rect) * Rectangle_Width(rect));
}
double Rectangle_Perimeter(const struct Rectangle *rect)
{
    return (2 * (Rectangle_Height(rect) + Rectangle_Width(rect)));
}
void Rectangle_Print(const struct Rectangle *rect)
{
    printf("Width : %lf\n", Rectangle_Width(rect));
    printf("Height : %lf\n", Rectangle_Height(rect));
    printf("Area : %lf\n", Rectangle_Area(rect));
    printf("Perimeter : %lf\n", Rectangle_Perimeter(rect));
}
int main()
{
    double x1, x2, y1, y2;
    printf("Enter the points : ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    struct Rectangle rect;
    rect = Rectangle_Make(Point_Make(x1, y1), Point_Make(x2, y2));
    Rectangle_Print(&rect);
    return 0;
}
