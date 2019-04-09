#include <iostream>

int main()
{
    int num1=10;
    int num2=20;
    const int *p1=&num1;//常量指针所指对象的值不能通过解引用更改
    num1=1;             //但其指向的对象可改
    *p1=100;
    p1=&num2;

    int const *p2=&num1;//等价于p1

    int *const p3=&num1;//指针常量所指对象的值，可通过解引用更改
    *p3=100;
    p3=&num2;//但其指向不可改

    const int *const p4=&num1;//二者皆不可改


    std::cout << "Hello world" << std::endl;
    return 0;
}

