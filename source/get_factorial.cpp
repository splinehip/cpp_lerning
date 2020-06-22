int factorial (int x)
{
    std::cout << "factorial(" << x << ") is called" << std::endl;
    int result;
    if (x == 0)
    {
        result = 1;
    }
    else
    {
        result = factorial(x - 1) * x;
    }

    std::cout << "factorial(" << x << ") is exit" << std::endl;

    return result;
}
