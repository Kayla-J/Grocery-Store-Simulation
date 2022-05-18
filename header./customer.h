#include <iostream>

using namespace std;
class customer;

ostream &operator << (ostream &,const customer &);

class customer
{
private:
    string name;
    int arrival;
    int departure;
    int service;
    int process;
public:
    customer();
    customer(string inName,int inArrival,int inService);

    void setName (string inName);
    string getName();

    void setArrival(int inArrival);
    int getArrival();

    void setService(int inService);
    int getService();

    void setProcess(int inProcess);
    int getProcess();

     void setDeparture(int inDeparture);
    int getDeparture();






    friend ostream &operator << (ostream &,const customer &);

};













