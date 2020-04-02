#include <cstdlib>
#include <cmath>
#include <iostream>

static double f(double x)
{
    return cosh(3.0 * x);
}

static double g(double x)
{
    double result = 1.0;

    result += ((9.0 * pow(x, 2.0)) / 2.0);
    result += ((27.0 * pow(x, 4.0)) / 8.0);
    result += ((81.0 * pow(x, 6.0)) / 80.0);

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
