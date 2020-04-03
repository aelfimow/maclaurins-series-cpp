#include <cstdlib>
#include <cmath>
#include <iostream>

static double f(double x)
{
    return exp((3.0 * x) / 2.0);
}

static double g(double x)
{
    double result = 1.0;

    result += ((3.0 * x) / 2.0);
    result += ((9.0 * x * x) / 8.0);
    result += ((9.0 * pow(x, 3.0)) / 16.0);

    return result;
}

int main()
{
    for (double x: { 0.0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5, 5.0, 5.5, 6.0 })
    {
        auto diff = f(x) - g(x);
        std::cout << diff << std::endl;
    }

    return EXIT_SUCCESS;
}
