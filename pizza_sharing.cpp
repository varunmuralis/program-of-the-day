#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14;
    const double SLICE_AREA = 14.13;
    double radius;
    double totalArea;
    int numSlices;

    // Get radius from user
    cout << "Enter the radius of the pizza: ";
    cin >> radius;

    // Calculate area of the pizza
    totalArea = PI * pow(radius, 2);

    // Calculate number of slices (whole number)
    numSlices = static_cast<int>(totalArea / SLICE_AREA);

    // Display result
    cout << "The pizza can be divided into " << numSlices << " slices." << endl;

    return 0;
}
