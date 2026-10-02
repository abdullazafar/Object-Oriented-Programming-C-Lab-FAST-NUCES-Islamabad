#include <iostream>
using namespace std;

struct Reading
{
    double value;
    int timestamp;
};

void adjustReading(Reading& r, double offset)
{
    r.value += offset;
}

bool isOutOfRange(const Reading& r, double minVal, double maxVal)
{
    return (r.value < minVal || r.value > maxVal);
}

void printReading(const Reading& r)
{
    cout<<"Value     : "<<r.value<<endl;
    cout<<"TimeStamp : "<<r.timestamp<<endl;
}