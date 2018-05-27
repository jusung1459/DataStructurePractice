#include <iostream>
#include <utility>

int binaryFib(int num) {
    if(num <= 1) {
        return num;
    } else {
        return binaryFib(num-1) + binaryFib(num-2);
    }
}

std::pair<int,int> linearFibonicci(int k) {
    if(k==1) {
        return std::make_pair(k,0);
    } else {
        std::pair<int,int> p1 = linearFibonicci(k-1);
        return std::make_pair(p1.first + p1.second, p1.first);
        //p1(i+j,i);
    }
}

/*int main(void) {
    int fubnum = 0;
    int num;
    std::cin >> num;
    fibnum = binaryFib(num);
    std::cout << fibnum;
    return 0;
}*/

int main(void) {
    int num;
    std::cin >> num;
    std::pair<int,int> fibnum;
    fibnum = linearFibonicci(num);
    std::cout << fibnum.first;
    return 0;
}