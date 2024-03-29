#include "Array.hpp"

int main()
{	
    
    Array<char> chararray;
    Array<char> chararray2(chararray);
	Array<unsigned int> unsignedArray(22);
    Array<unsigned int> unsignedArray2 = unsignedArray;
    std::cout << chararray.size() << std::endl;
    std::cout << unsignedArray.size() << std::endl;
    try
    {
        unsignedArray[22] = 22;
    }
    catch(std::out_of_range & oor)
    {
        std::cout << oor.what() << std::endl;
    }
    try
    {
        unsignedArray[-1] = 22;
    }
    catch(std::out_of_range & oor)
    {
        std::cout << oor.what() << std::endl;
    }
    try
    {
        unsignedArray[1] = 22;
        std::cout << unsignedArray[1] << std::endl;
        std::cout << unsignedArray2[1] << std::endl;
    }
    catch(std::out_of_range & oor)
    {
        std::cout << oor.what() << std::endl;
    }
}

//Main inclus dans la page du projet 

/*
#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
*/