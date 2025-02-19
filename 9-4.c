#include <stdio.h>

struct Point {
    double x;
    double y;
};

struct Point shift_point(struct Point p, double dx, double dy) {
    p.x += dx;
    p.y += dy;
    return p;
}

int main() {
    struct Point p1;
    struct Point p2;

    printf("Enter the x-coordinate of the point: ");
    scanf("%lf", &p1.x);
    printf("Enter the y-coordinate of the point: ");
    scanf("%lf", &p1.y);

    double dx, dy;
    printf("Enter the x shift (dx): ");
    scanf("%lf", &dx);
    printf("Enter the y shift (dy): ");
    scanf("%lf", &dy);

    p2 = shift_point(p1, dx, dy);

    printf("The new coordinates of the point after shifting are (%.2lf, %.2lf)\n", p2.x, p2.y);

    return 0;
}