#include <iostream>
main() {
    float first_num, second_num, result_add, result_div;
    std::cout<<"Enter first number: ";
    std::cin>>first_num;
    std::cout<<"Enter second number: ";
    std::cin>>second_num;
    result_add = first_num + second_num;
    result_div = first_num / second_num;
    std::cout<<"Addition result:\t" << result_add << std::endl;
    std::cout<<"Division result:\t" << result_div << std::endl;
    return 0;
}