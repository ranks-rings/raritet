#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

// Function to calculate the volume of a frustum of a cone
double calculateFrustumVolume(double radius1, double radius2, double height) {
    return (1.0 / 3.0) * PI * height * (std::pow(radius1, 2) + radius1 * radius2 + std::pow(radius2, 2));
}

int main() {
    double radius1, radius2, height;

    // Get the radii and height from the user
    std::cout << "Enter the top radius of the frustum: ";
    std::cin >> radius1;

    std::cout << "Enter the bottom radius of the frustum: ";
    std::cin >> radius2;

    std::cout << "Enter the height of the frustum: ";
    std::cin >> height;

    // Calculate and display the volume of the frustum
    double frustumVolume = calculateFrustumVolume(radius1, radius2, height);

    std::cout << "Volume of the frustum: " << frustumVolume << std::endl;

    return 0;
}
