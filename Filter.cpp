#include <iostream>
#include <vector>

std::vector<int> filter_greater_then(std::vector<int>& arr, int threshold)
{
 //const int arrSize = arr.size();
 std::vector<int> catchedNums {};
 for (int el : arr)
 {
  if (threshold < el)
  {
   catchedNums.emplace_back(el);
  }
 }
 return catchedNums;
}

int main(void)
{
 std::vector<int> someNums {-9, -1, 1};
 std::vector<int> catchedNums = filter_greater_then(someNums, -2);
 int i;
 std::cout << "[";
 for (i=0; i<catchedNums.size()-1; ++i)
 {
     std::cout << catchedNums[i] << ", ";
 }
 std::cout << someNums.back() << "]";
 return 0;
}
