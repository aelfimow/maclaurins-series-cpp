#include <cstdlib>
#include <cmath>
#include <iostream>

static double f(double x)
{
    return (exp(2.0 * x) * cos(3.0 * x));
}

static double g(double x)
{
    double result = 1.0;

    result += (2.0 * x);
    result -= ((5.0 * x * x) / 2.0);

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
