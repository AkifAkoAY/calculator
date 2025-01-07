#include "calculator.hpp"

calculator::~calculator()
{}
calculator::calculator()
{}

//set
void calculator::settop(double top)
{
    this->top = top;
}
void calculator::setcik(double cik)
{
    this->cik = cik;
}
void calculator::setcarp(double carp)
{
    this->carp = carp;
}
void calculator::setbol(double bol)
{
    this->bol = bol;
}
void calculator::setop(char op)
{
    this->op = op;
}
void calculator::setdegerX(double degerX)
{
    this->degerX = degerX;
}
void calculator::setdegerY(double degerY)
{
    this->degerY = degerY;
}

//get
double calculator::gettop()
{
    return(this->top);
}
double calculator::getcik()
{
    return(this->cik);
}
double calculator::getcarp()
{
    return(this->carp);
}
double calculator::getbol()
{
    return(this->bol);
}
char calculator::getop()
{
    return(this->op);
}
double calculator::getdegerX()
{
    return(this->degerX);
}
double calculator::getdegerY()
{
    return(this->degerY);
}


//Funcions

void calculator::selectOP()
{
    cout << "'+' '-' '*' '/' " << endl;
    cout << "Select operator :";
    cin >> this->op;
}
void calculator::enterONE()
{
    cout << "Enter the first number :";
    cin >> this->degerX; 
}
void calculator::enterTWO()
{
    cout << "Enter the second number :";
    cin >> this->degerY; 
}

int calculator::topla()
{
    return(this->getdegerX() + this->getdegerY());
}
int calculator::cikart()
{
    return(this->getdegerX() - this->getdegerY());
}
int calculator::carpp()
{
    return(this->getdegerX() * this->getdegerY());
}
int calculator::bolme()
{
    return(this->getdegerX() / this->getdegerY());
}

void calculator::Exit()
{
    if(this->getop() == '+')
    {
        cout << topla() << endl;
    }
    else if(this->getop() == '-')
    {
        cout << cikart() << endl;
    }
    else if(this->getop() == '*')
    {
        cout << carpp() << endl;
    }
    else if(this->getop() == '/')
    {
        cout << bolme() << endl;
    }
}
