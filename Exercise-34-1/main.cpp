#include <cstdlib>
#include <cmath>
#include <iostream>

static double f(double x)
{
    return sin(2.0 * x);
}

static double g(double x)
{
    double result = (2.0 * x);

    result -= (4.0 * x * x * x / 3.0);
    result += (4.0 * x * x * x * x * x / 15.0);
    result -= (8.0 * x * x * x * x * x * x * x / 315.0);

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
