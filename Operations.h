#include <iostream>
#include <string>
#ifndef OPERATIONS_H
#define OPERATIONS_H


class Operations
{
    public:
        Operations();
        std::string operPrint;
        std::string str;
        double switchFunc(double &k, char l, double m, std::string str, std::string &operPrint);
        double addFunc(double &x, double y);
        double subFunc(double &x, double y);
        double mulFunc(double &x, double y);
        double divFunc(double &x, double y);
        double revFunc(double &x);
    protected:

    private:
};

#endif // OPERATIONS_H
