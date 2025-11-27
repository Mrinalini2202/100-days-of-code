#include <stdio.h>

int main() {
    float length = 40.4;
    float breadth = 26.0;
    float area, perimeter;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Length: %.2f\n", length);
    printf("Breadth: %.2f\n", breadth);
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}
