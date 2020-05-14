int factorial (int x)
{
    std::cout << "factorial(" << x << ") is called\n";
    int result;
    if (x == 0)
    {
        result = 1;
    }
    else
    {
        result = factorial(x - 1) * x;
    }

    std::cout << "factorial(" << x << ") is exit\n";

    return result;
}
