#include <iostream>
using namespace std;

#include "customer.h"

customer::customer()
{
    name=" ";
    arrival=0;
    departure=0;
    service=0;
}
customer::customer(string inName,int inArrival,int inService)
{
    name=inName;
    arrival=inArrival;
    service=inService;

}
    void customer::setName (string inName)
    {
       name=inName;
    }
    string customer::getName()
    {
       return name;
    }

    void customer::setArrival(int inArrival)
    {
       arrival=inArrival;
    }
    int customer::getArrival()
    {
       return arrival;
    }

    void customer::setService(int inService)
    {
       service=inService;
    }
    int customer::getService()
    {
       return service;
    }

    void customer::setProcess(int inProcess)
    {
        process=inProcess;
    }
    int customer::getProcess()
    {
       return process;
    }
    void customer::setDeparture(int inDeparture)
    {
       departure=inDeparture;
    }
    int customer::getDeparture()
    {
       return departure;
    }



ostream &operator << (ostream &strm,const customer &obj)
{
   strm<< "Name: "<<obj.name<<endl;
   strm<<"Arrival: "<<obj.arrival<<endl;
   strm<<"Departure: "<<obj.arrival+obj.process<<endl;
   strm<<"Service: "<<obj.service<<endl;
   strm<<"Process: "<<obj.process<<endl;
   return strm;

}
