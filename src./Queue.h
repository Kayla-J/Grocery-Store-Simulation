
#include <iostream>

using namespace std;


class Queue
{
private:
    int *front;
    int *rear;
    int *temp;

    string *arr;

    int size;
    int count;

    int none;

public:
    Queue(int size,int count);
    bool empty(int queueNum);
    bool full();
    void enqueue(string name,int queueNum);
    string dequeue(int queueNum);
    void update(int process,int queueNum);
};



