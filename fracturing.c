#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;

    // Input coordinates
    printf("Give coordinates in terms of x and y for the initial point: \n");
    scanf("%lf %lf", &x1, &y1);
    printf("Give coordinates in terms of x and y for the second point: \n");
    scanf("%lf %lf", &x2, &y2);

    // Output coordinates
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);

    // Outputs the distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
}

// Perimeter function
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * distance;
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    // Difficulty rating
    return 2.0;
}

// Area function
double calculateArea() {
    double width = calculateWidth();
    double height = calculateHeight();
    double area = width * height;

    // Output area
    printf("The area of the city encompassed by your request is %.2lf\n", area);

    return 3;
}

// Width function
double calculateWidth() {
    double x1, y1, x2, y2;

    // Input coordinates
    printf("Give coordinates in terms of x and y for the initial point: \n");
    scanf("%lf %lf", &x1, &y1);
    printf("Give coordinates in terms of x and y for the second point: \n");
    scanf("%lf %lf", &x2, &y2);

    // Output
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    
    double width = (x2 - x1);
    printf("The width of the city encompassed by your request is %.2lf\n", width);

    // Difficulty rating
    return 2;
}

// Height function
double calculateHeight() {
    double x1, y1, x2, y2;

    // Input coordinates
    printf("Give coordinates in terms of x and y for the initial point: \n");
    scanf("%lf %lf", &x1, &y1);
    printf("Give coordinates in terms of x and y for the second point: \n");
    scanf("%lf %lf", &x2, &y2);

    // Output coordinates and height
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    
    double height = (y2 - y1);
    printf("The height of the city encompassed by your request is %.2lf\n", height);

    // Difficulty rating
    return 2.5;
}

// Main function starts here
int main(int argc, char **argv) {
    // Function calls
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}
