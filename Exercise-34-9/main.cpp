#include <cstdlib>
#include <cmath>
#include <iostream>

static double f(double x)
{
    return pow((3.0 + 2.0 * x), 4.0);
}

static double g(double x)
{
    double result = 81.0;

    result += (216.0 * x);
    result += (216.0 * x * x);
    result += (96.0 * pow(x, 3.0));
    result += (16.0 * pow(x, 4.0));

    return result;
}

int main()
{
    for (double x: { -3.0, -2.0, -1.0, 0.0, 1.0, 2.0, 3.0 })
    {
        auto diff = f(x) - g(x);
        std::cout << diff << std::endl;
    }

    return EXIT_SUCCESS;
}
