#include <iostream>
#include <string>
#include <tuple>

#include "_binary_search.cpp"
#include "bin_digits_generator.cpp"
#include "Euclid_gcd.cpp"
#include "get_factorial.cpp"
#include "linked_list.cpp"
#include "selection_sorter.cpp"
#include "sum_list_recursion.cpp"

int main (int argc, char* argv[])
{
    if (argc == 1)
    {
        std::cout << std::endl \
                  <<" For usage:" << std::endl << std::endl \
                  <<" -bs  --- Binary search" << std::endl \
                  <<" -bdg --- Gen binary digits" << std::endl \
                  <<" -gcd --- Get GCD" << std::endl \
                  <<" -f   --- Get factorial" << std::endl \
                  <<" -ll  --- Linked list" << std::endl \
                  <<" -ss  --- Selection sorter" << std::endl \
                  <<" -slr --- Sum numbers in array" << std::endl << std::endl \
                  <<" For help -h, --help, ?" << std::endl << std::endl;
    }
    else if (argv[1] == std::string("-bs"))
    {
        std::cout << "Generate integers numbers array of n length and searching k number"\
                    << "in this array using binary search." << std::endl;
        int64_t n, k;
        std::tie(n, k) = get_param_to_bs();
        _binary_search(n, k);

        return 0;
    }
    else if (argv[1] == std::string("-bdg"))
    {
        std::cout << "Generate binary digits of n length" << std::endl;
        std::cout << "Enter n: ";
        int n;
        std::cin >> n;
        bin_digits_generator(n);
    }
    else if (argv[1] == std::string("-gcd"))
    {
        int m, n;
        std::cout << "Searching the greatest common divisor (GCD) for m and n numbers"\
                    << std::endl;
        std::cout << "Enter number m: ";
        std::cin >> m;
        std::cout << "Enter number n: ";
        std::cin >> n;
        std::cout << "GCD for m and n: " << get_gcd(m, n) << std::endl;
        return 0;
    }
    else if (argv[1] == std::string("-f"))
    {
        std::cout << "Getting the factorial using recursion for n number" << std::endl;
        std::cout << "Enter n: ";
        int x;
        std::cin >> x;
        std::cout << factorial(x) << std::endl;
    }
    else if (argv[1] == std::string("-ll"))
    {
        std::cout << "Creating the linked list array, fill it of random values in" \
                    << "range 0 - 10.000 and print it." << std::endl;
        int64_t n;
        std::cout << "Enter number of array elements: ";
        std::cin >> n;
        std::cout << std::endl;
        myArray* a = gen_linked_list(n);
        print_linked_list(a);
        del_linked_list(a);

        return 0;
    }
    else if (argv[1] == std::string("-ss"))
    {
        std::cout << "Generate integers numbers array, fill it of random values in" \
                    << "range 0 - 10.000, then sorting it using \"selection sort\"." \
                    << std::endl;
        int n;
        std::cout << "Number of array elements: ";
        std::cin >> n;
        std::cout << std::endl;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = std::rand() % 10000;
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl << std::endl;

        selection_sorter(arr, n);

        std::cout << "Sorted array:" << std::endl << std::endl;
        for (int i = 0; i < n; i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl << std::endl;
    }
    else if (argv[1] == std::string("-slr"))
    {
        int numbers_of_element = sum(get_slr_param());
        std::cout << "Summ of array elements equally: " << numbers_of_element \
                  << std::endl << std::endl;
    }
    else if (argv[1] == std::string("-h") || argv[1] == std::string("--help") \
                ||  argv[1] == std::string("?"))
    {
        std::cout << std::endl \
                  <<" For usage: test <options>" << std::endl << std::endl \
                  <<" -bs  --- Generate integers numbers array of n length and searching"\
                    << " k number in this array using binary search." << std::endl \
                  <<" -bdg --- Generate binary digits of n length" << std::endl \
                  <<" -gcd --- Searching the greatest common divisor (GCD) for m and " \
                    << "n numbers." << std::endl \
                  <<" -f   --- Getting the factorial using recursion for n number" \
                    << std::endl \
                  <<" -ll  --- Creating the linked list array, fill it of random values "\
                    << "in range 0 - 10.000 and print it." << std::endl \
                  <<" -ss  --- Generate integers numbers array, fil it of random values "\
                    <<"in range 0 - 10.000, then sorting it using \"selection sort\"." \
                    << std::endl \
                  <<" -slr --- Generating vector array of n length and fill it of " \
                    <<"random generated nambers. Getting sum of numbers using recursion."\
                    << std::endl << std::endl \
                  <<" For this help -h, --help, ?" << std::endl << std::endl;
    }
    else
    {
        std::cout << std::endl \
                  <<" Incorrect argument!" << std::endl << std::endl \
                  <<" For usage:" << std::endl << std::endl \
                  <<" -bs  --- Binary search" << std::endl \
                  <<" -bdg --- Gen binary digits" << std::endl \
                  <<" -gcd --- Get GCD" << std::endl \
                  <<" -f   --- Get factorial" << std::endl \
                  <<" -ll  --- Linked list" << std::endl \
                  <<" -ss  --- Selection sorter" << std::endl << std::endl \
                  <<" -slr --- Sum numbers in array" << std::endl << std::endl \
                  <<" For help -h, --help, ?" << std::endl << std::endl;
    }

    return 0;
}
