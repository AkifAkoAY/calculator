#pragma once
#include <iostream>

using namespace std;

class calculator
{
    private:
        double top;
        double cik;
        double carp;
        double bol;
        double degerX;
        double degerY;
        char op;
    public:
//con-des
        calculator();
        ~calculator();
//Set
        void settop(double top);
        void setcik(double cik);
        void setcarp(double carp);
        void setbol(double bol);
        void setop(char op);
        void setdegerX(double degerX);
        void setdegerY(double degery);
//Get
        double gettop();
        double getcik();
        double getcarp();
        double getbol();
        char getop();
        double getdegerX();
        double getdegerY();
//Funcions
        int topla();
        int cikart();
        int carpp();
        int bolme();
        void selectOP();
        void enterONE();
        void enterTWO();
        void Exit();
};