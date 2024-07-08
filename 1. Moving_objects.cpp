#include <iostream>
#include <vector>

template <typename T>

void move_vectors(std::vector<T>& source, std::vector<T>& destination) 
{
    destination.insert(destination.end(), std::make_move_iterator(source.begin()), std::make_move_iterator(source.end()));
    source.clear();
}
int main()
{
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::vector <std::string> two;
    move_vectors(one,two);

    std::cout << "vector 1: ";
    for (std::string element : one)
    {
        std::cout << element << " ";
    }

    std::cout << std::endl << "vector 2: ";
    for (std::string element : two)
    {
        std::cout << element << " ";
    }
}