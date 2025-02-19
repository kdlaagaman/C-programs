#include <stdio.h>
#include <math.h>
struct Point {
    double x;
    double y;
};

double calculate_distance(struct Point p1, struct Point p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}
int main() {
    struct Point p1, p2;
    double distance;
    printf("Enter the x-coordinate of the first point: ");
    scanf("%lf", &p1.x);
    printf("Enter the y-coordinate of the first point: ");
    scanf("%lf", &p1.y);
    printf("Enter the x-coordinate of the second point: ");
    scanf("%lf", &p2.x);
    printf("Enter the y-coordinate of the second point: ");
    scanf("%lf", &p2.y);
    distance = calculate_distance(p1, p2);
    printf("The distance between the points (%.2lf, %.2lf) and (%.2lf, %.2lf) is: %.2lf\n", p1.x, p1.y, p2.x, p2.y, distance);
    return 0;
}