#include "Operations.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

double switchFunc(double a, char c, double b);
double a ;
double b ;
char c;
std::string str1;
std::string str2;
std::string opera = "";
std::stringstream ss1;
std::stringstream ss2;
int main()
{

        std::cout << "\nHello in your new Calculator\nby Krzysztof Natusiewicz\n\n";
        Operations op;
        std::cout << "Input number, operation sign, number" << std::endl;
        std::cin >> a;
        ss1 << std::defaultfloat << a;
        str1 = ss1.str();
        opera += str1;
    do{
        std::cin >> c;
        if(c=='\\'){
            if(a-int(a)==0){
                op.switchFunc(a, c, b, str2, opera);
            }else{
                std::cout << "This operation cannot be executed (argument is not an integer)." << std::endl;
            }
        }else{
            std::cin >> b;
            ss2 << b;
            str2 = ss2.str();
            op.switchFunc(a, c, b, str2, opera);
            ss2.str(std::string());
        }
//        std::cout << a << std::endl;
    }while(c!=0);

}



