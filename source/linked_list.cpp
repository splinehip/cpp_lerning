struct myArray
{
    int symbol;
    int array_index;
    myArray* next;
};

myArray* gen_linked_list (int n)
{
    myArray* a = new myArray;
    myArray* a_first = a;
    for (int i = 0; i < n; i++)
    {
        a->symbol = std::rand() % 10000;
        a->array_index = i;

        if (i == n-1)
        {
            a->next = nullptr;
        }
        else
        {
            a->next = new myArray;
            a = a->next;
        }
    }
    a = a_first;

    return a;
}

void print_linked_list (myArray* a)
{
    int array_size = 0;
    while (a != nullptr)
    {
        array_size++;
        std::cout << a->symbol << " index: " << a->array_index << std::endl;
        a = a->next;
    }

    std::cout << "total array size: " << array_size << std::endl;
}

void del_linked_list (myArray* a)
{
    while (true)
    {
        if (a->next != nullptr)
        {
            myArray* tmp = a->next;
            delete a;
            a = tmp;
        }
        else
        {
            delete a->next;
            delete a;
            break;
        }
    }
}
