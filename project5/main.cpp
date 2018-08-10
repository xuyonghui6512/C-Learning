#include <iostream>

int main() {
    int array[3]={2,5,9};
    for(int &e:array)
    {
        std::cout<<e<<std::endl;
    }

    return 0;
}