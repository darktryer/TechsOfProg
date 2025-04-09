#include <iostream>
#include <set>
#include <string>

int count_unique_chars(std::string& str)
{
    std::set<char> letters{};
    for (char letter : str)
    {
        letters.insert(letter);
    }
    return letters.size();
}

int main(void)
{
    std::string str;
    std::getline(std::cin, str);
    std::cout << count_unique_chars(str);
    return 0;
}
