const int MAX_BIN_DIGITS_TO_GENERATE = 100;

void bin_digits_generator(int left_bin_digits_to_generate)
{
/** recursion schem for n = 2
        gbd(2)
        bgc[0] = 0 // {0,}
        top = 1
        2-gbg(1)
        	bgc[1] = 0 // {0,0}
        	top = 2
        	3-gbd(0)
        		00
        	top = 1
        2-gbd(1)
        	bgc[1] = 1 // {0,1}
        	top = 2
        	4-gbd(0)
        		01
        	top = 1
        2-gbd(1)
        	top = 0
        gbd(2)
        bgc[0] = 1 // {1,1}
        top = 1
        5-gbd(1)
        	bgc[1] = 0 // {1,0}
        	top = 2
        	6-gbd(0)
        		10
        	top = 1
        5-gbd(1)
        	bgc[1] = 1 // {1,1}
        	top = 2
        	7-gbd(0)
        		11
        	top = 1
        5-gbd(1)
        	top = 0
        gdb(2)
        top = -1
**/

    static int bin_digits_combination[MAX_BIN_DIGITS_TO_GENERATE];
    static int top = 0;
    static int count_func_call;
    count_func_call++;
    std::cout << "function call: " << count_func_call << std::endl;

    if (left_bin_digits_to_generate == 0)
    {
        for (int i = 0; i < top; i++)

            std::cout << bin_digits_combination[i] << std::endl;
    }
    else
    {

        bin_digits_combination[top++] = 0;
        bin_digits_generator(left_bin_digits_to_generate - 1);

        bin_digits_combination[top++] = 1;
        bin_digits_generator(left_bin_digits_to_generate - 1);
    }

    top--;
}
