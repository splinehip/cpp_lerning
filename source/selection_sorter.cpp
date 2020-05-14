int get_smaller (int _array[], int array_length, int left_array_edge = 0)
{
    int tmp = _array[left_array_edge];
    int smaller_index = left_array_edge;

    for (int i = left_array_edge; i < array_length; i++)
    {
        if (_array[i] < tmp)
        {
            tmp = _array[i];
            smaller_index = i;
        }
    }

    return smaller_index;
}

void selection_sorter (int _array[], int n)
{
    int tmp;
    int smaller_index;

    for (int i = 0; i < n-1; i++)
    {
        smaller_index = get_smaller(_array, n, i);

        if (smaller_index != i)
        {
            tmp = _array[smaller_index];
            _array[smaller_index] = _array[i];
            _array[i] = tmp;
        }
    }
}
