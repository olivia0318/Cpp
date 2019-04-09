#include <iostream>

int main()
{
    int num=2;
    int &ref=num;
    std::cout << &ref <<" "<<&num<<std::endl
        <<ref<<" "<<num<<std::endl;


    std::cout << "Hello world" << std::endl;
    return 0;
}

