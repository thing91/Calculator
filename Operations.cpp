#include "Operations.h"
#include <iostream>
#include <string>
#include <iomanip>

Operations::Operations()
{

}
// addition function
double Operations::addFunc(double &x, double y){
    x = x + y;
    return x;
}
// substraction function
double Operations::subFunc(double &x, double y){
    x = x - y;
    return x;
}
// multiplication function
double Operations::mulFunc(double &x, double y){
    x = x * y;
    return x;
}
// division function
double Operations::divFunc(double &x, double y){
    x = x / y;
    return x;
}
// factor function
double Operations::revFunc(double &x){
    x = (1 / x);
    return x;
}
// switch function
double Operations::switchFunc(double &k, char l, double m, std::string str, std::string &operPrint){
        double x = k;
        switch(l){
            case '+':
//                str2 = to_string(y);
                operPrint += " + " + str;
                std::cout << std::defaultfloat << operPrint << " = " << addFunc(x, m) << std::endl;
//                std::cout << addFunc(&x, m);
                break;
            case '-':
//                str2 = to_string(y);
                operPrint += " - " + str;
                std::cout << operPrint << " = " << subFunc(x, m) << std::endl;
//                std::cout << subFunc(&x, m);
                break;
            case '*':
//                str2 = to_string(y);
                operPrint = "(" + operPrint + ") * " + str;
                std::cout << operPrint << " = " << mulFunc(x, m) << std::endl;
//                std::cout << mulFunc(&x, m);
                break;
            case '/':
//                str2 = to_string(y);
                operPrint = "(" + operPrint + ") / " + str;
                std::cout << operPrint << " = " << divFunc(x, m) << std::endl;
//                std::cout << divFunc(&x, m);
                break;
            case '\\':
//                str2 = to_string(y);
                operPrint = "1 / (" + operPrint + ")";
                std::cout << operPrint << " = " << revFunc(x) << std::endl;
                break;
        }
        k = x;
        return k;
}
