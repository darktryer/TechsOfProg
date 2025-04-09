#include <iostream>
#include <vector>
#include <climits>

int* find_min_max(std::vector<int>& arr)
{
    if (arr.empty())
    {
        std::cerr << "find_min_max(): Array is empty!";
        exit(2);
    }
    const int arrSize = arr.size();
    int* min_max = new int[arrSize] {INT_MAX, INT_MIN};
    for (int el : arr)
    {
        if (min_max[0] > el)
        {
            min_max[0] = el;
        }
        else if (min_max[1] < el)
        {
            min_max[1] = el;
        }
    }
    return min_max;
}

int main(void)
{
    std::vector<int> someNums {};
    int* min_max = find_min_max(someNums);
    std::cout << "min: " << min_max[0] << "\nmax: " << min_max[1];
    return 0;
}
