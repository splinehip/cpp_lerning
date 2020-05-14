void _binary_search(int64_t n, int64_t k)
{
    if (((0 < n) && (n < k)) || ((k < 0) && (0 < n)) || (((0 > n) && (n > k)) || ((k > 0) && (0 > n))))
    {
        std::cout << "Number given to find is out of range!\n" << std::endl;
        return;
    }
    int64_t* a;
    try
    {
        if (n < 0)
            a = new int64_t[(n * -1)];
        else
            a = new int64_t[n];
    }
    catch (...)
    {
        std::cerr << "Array to generate is too big!" << std::endl << std::endl;
        return;
    }

    if (n < 0)
    {
        n *= -1;
        for (int64_t i = 0; i < n; i++)
        {
            a[i] = (-1 * i) - 1;
        }
    }
    else
    {
        for (int64_t i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }
    }

    int64_t a_start = 0;
    int64_t a_end = n - 1;
    int64_t middle;
    int i = 0;

    while (true)
    {
        middle = (a_start + a_end) / 2;
        std::cout << (++i) \
                  << "\t middle = " << middle << "\t a[middle] = " << a[middle] \
                  << "\t a_start = " << a_start << "\t a_end = " << a_end << std::endl;

        if (a[middle] == k)
        {
            std::cout << "\n The number " << a[middle] << " is find at index: " << middle << std::endl;
            break;
        }
        else if (a[middle] < k)
        {
            if (k > 0)
                a_start = middle + 1;
            else
                a_end = middle - 1;
        }
        else if (a[middle] > k)
        {
            if (k > 0)
                a_end = middle - 1;
            else
                a_start = middle + 1;
        }

        if (a_start > a_end)
        {
            std::cout << "\n Number is not found!\n" << std::endl;
            break;
        }
    }

    delete[] a;
}

std::tuple<int64_t, int64_t> get_param_to_bs()
{
    int64_t n, k;
    std::cout << "Number of array elements to generate: ";
    std::cin >> n;
    std::cout << std::endl;
    std::cout << "Number to find: ";
    std::cin >> k;
    std::cout << std::endl;

    return std::make_tuple(n, k);
}

