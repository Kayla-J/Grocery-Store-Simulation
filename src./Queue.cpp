#include <iostream>
#include "Queue.h"
#include "customer.h"
using namespace std;

Queue::Queue(int size,int count)
{
    front=new int[count];
    rear=new int[count];
    arr=new string [size];
    temp=new int[size];

    for (int i=0;i<count;i++)
    {
        front[i]=-1;
    }
    none=0;
    for (int i=0;i<size-1;i++)
    {
        temp[i]=i+1;

    }
temp[size-1]=-1;
}
bool Queue::empty(int queueNum)
{
    return (front[queueNum]=-1);
}
bool Queue::full()
{
    return none==-1;
}
void Queue::enqueue(string name,int queueNum)
{
if (full())
{
    cout<<"Queue is Full"<<endl;
}
none=temp[none];
if (empty(queueNum))
{
    front[queueNum]=none;
}
else
{
    temp[rear[queueNum]]=none;
}
temp[none]=-1;

rear[queueNum]=none;

arr[none]=name;

}
string Queue::dequeue(int queueNum)
{
 if (!full())
 {
     cout<<"Queue is empty"<<endl;
 }
 int index=front[queueNum];

 front[queueNum]=temp[queueNum];

 temp[index]=none;
 none=index;

 return arr[index];
}
void Queue::update(int process,int queueNum)
{
    for (int i =0; i<queueNum;i++)
    {
        front[queueNum]=process++;
    }
}
