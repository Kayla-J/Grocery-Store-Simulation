#include <iostream>
#include "Queue.h"
#include "customer.h"
#include <unistd.h>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{
    //argument inputs
    int runTime=atoi(argv[1]);
    double customersAvg=atof(argv[2]);
    double checkOutTime=atof(argv[3]);
    int numQueue=atoi(argv[4]);
    int verbose=atoi(argv[5]);





    if (argc<5)
    {
        cout<<"Incorrect number of arguments"<<endl;
    }
    else if (customersAvg<0)
    {
        cout<<"second argument invalid: minimum is 0 "<<endl;

    }
    else if (checkOutTime<1)
    {
        cout<<" Third argument invalid: the minimum is 1"<<endl;
    }
    else if (verbose!=1||verbose!=0)
    {
        cout<< "Fifth arguments needs to be 1 or 0 "<<endl;
    }




    int const MAX=numQueue;

//customer c1,c2;



int static num=0;
int tick=0;
srand (time(0));
while (tick <runTime)
{
    for (int i=0;i<customersAvg;i++)
{

    string nameArr[8]={"Bob","Jane","Steve","Sally","Dave","Kayla","John","J.cole"};
int randName=rand()%8;

int randService=rand()%int(checkOutTime)+1;

    customer person;
     person.setName(nameArr[randName]);
     person.setService(randService);
     person.setArrival(tick);
     person.setProcess(num);


if (verbose==1)
{
   cout<<"Minute :"<<tick<<endl;
}



int registerNum =rand()%numQueue+1;
Queue reg(int (customersAvg),MAX);

     reg.enqueue(person.getName(),registerNum);
cout<<person.getName()<<" arrives with "<<person.getService()<<"-minute service time"<<endl;
cout<<person.getName()<<" enters queue "<<registerNum<<endl;
cout<<person.getName()<<" begins service "<<endl;
for (int j=0;j<numQueue;j++)
{


if(person.getService()==person.getProcess())
{
  cout<<reg.dequeue(registerNum)<<" exit queue "<<registerNum<<endl;
}
else
{

   person.setProcess(num++);

}
}

}


tick ++;

sleep(checkOutTime);//how many seconds it sleeps


}

    return 0;
}


