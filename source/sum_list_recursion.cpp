#include <vector>

int sum (std::vector<int> v)
{
    int total;
    if (v.empty())
    {
       total = 0;
       return total;
    }
    else if (v.size() == 1)
    {
        total = v[0];
        return total;
    }
    else
    {
        int v_back = v.back();
        v.pop_back();
        total = v_back + sum(v);
    }

    return total;
}

std::vector<int> get_slr_param ()
{
    int n;
    std::cout << "Enter number of array elements to generate: ";
    std::cin >> n;

    std::vector<int> v;
    std::cout << "Gettintg vector elements.." << std::endl << std::endl << '{';
    for (int i = 0; i < n; i++)
    {
        v.push_back(std::rand() % 10000);
        std::cout << ' ' << v.at(i) << ',';
    }
    std::cout << " }" << std::endl << std::endl;

    return v;
}
