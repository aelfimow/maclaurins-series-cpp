#include <cstdlib>
#include <cmath>
#include <iostream>

static double f(double x)
{
    return (sin(x) * sin(x));
}

static double g(double x)
{
    double result = (x * x);

    result -= (pow(x, 4.0) / 3.0);
    result += ((2.0 * pow(x, 6.0)) / 45.0);

    return result;
}

int main()
{
    for (double x: { 0.0, 0.1, 1.0, 2.0, 3.141592 })
    {
        auto diff = f(x) - g(x);
        std::cout << diff << std::endl;
    }

    return EXIT_SUCCESS;
}
