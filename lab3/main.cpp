#include <iostream>

#include "String.h"

int main() {
    int n;



    while (true){
        std::cout <<"Please input size of your string 1"<<std::endl;
        std::cin >> n;
        String first(n);

        //String forth = 4;
        //String fifth(4);

        std::cout <<"Please input your string 1"<<std::endl;
        std::cin >> first;
        std::cout <<"Please input size of your string 2"<<std::endl;
        std::cin >> n;
        String second(n);
        std::cout <<"Please input your string 2"<<std::endl;
        std::cin >> second;

        std::cout << ((first++) + (++first) - (--second) + (second--) / first + (first - first) + (second - first) +
        second - first / second + second / (first*2)) % first + (first == second ) ? (first+second) : (first - second) -
        second % first + first % second;
        if (first != second || first > second || first < second || first == second){
            first += second;
            first -= second;
            second /= first;
            first %= second;
            second *= 3;
            std::cout << first(0,2) << " " << second[0] << std::endl;
        }



        std::cout <<"What are you want to do" << std::endl;
        std::cout <<"1.Summation" << std::endl;
        std::cout <<"2.Difference" << std::endl;
        std::cout <<"3.Multiplication" << std::endl;
        std::cout <<"4.Division" << std::endl;
        std::cout <<"5.Remainder of the division" << std::endl;

        int action = 0;
        std::cin >> action;
        switch (action){
            case 1:{
                String answer = first + second;
                std::cout << answer << std::endl;;
                break;
            }
            case 2:{
                first-=second;
                std::cout << first << std::endl;;
                break;
            }
            case 3:{
                std::cout << first * 3 << std::endl;
                std::cout << second * 3 << std::endl;
                break;
            }
            case 4:{
                std::cout << first / second << std::endl;
                break;
            }
            case 5:{
                String third = first % second;
                std::cout << third << std::endl;
                break;
            }
            default:{
                std::cout << "Please input number" << std::endl;
                break;
            }
        }

        int end = 1;
        std::cout << "If You want to close input 0";
        std::cin >> end;
        if (!end){
            break;
        }
    }
}