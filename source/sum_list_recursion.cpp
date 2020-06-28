#include <vector>

int sum (std::vector<int> v, int var)
{
    int total = 0;
    if (var == 1)
    {
        if (v.empty())
        {
            return total;
        }
        else if (v.size() == 1)
        {
            return total = v[0];
        }
        else
        {
            int v_back = v.back();
            v.pop_back();
            total = v_back + sum(v, var);
        }
    }
    else if (var == 2)
    {
        if (v.empty())
        {
            return total = 0;
        }
        else
        {
            v.pop_back();
            total = 1 + sum(v, var);
        }
    }
    else if (var == 3)
    {
        if (v.empty())
        {
            return total;
        }
        else
        {
            int v_back = v.back();
            v.pop_back();
            int total_next = sum(v, var);
            total = v_back > total_next ? v_back : total_next;
        }
    }

    return total;
}

std::tuple<std::vector<int>, int> get_slr_param ()
{
    int n;
    std::cout << "Enter number of array elements to generate: ";
    std::cin >> n;
    int var;
    std::cout << "Enter variant: 1 to calculate summ of numbers; 2 to calculate " \
                 "quantity of elements; 3 to get biggest number from array: ";
    std::cin >> var;

    std::vector<int> v;
    std::cout << "Gettintg vector elements.." << std::endl << std::endl << '{';
    for (int i = 0; i < n; i++)
    {
        v.push_back(std::rand() % 10000);
        std::cout << ' ' << v.at(i) << ',';
    }
    std::cout << " }" << std::endl << std::endl;

    return std::make_tuple(v, var);
}
