#include <cstdlib>
#include <cmath>
#include <iostream>

static double f(double x)
{
    return log(1.0 + exp(x));
}

static double g(double x)
{
    double result = log(2.0);

    result += (x / 2.0);
    result += ((x * x) / 8.0);

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
