#include <iostream>
using namespace std;

void badfunc()
{
    int *p4 = new int{45};
    //.....
    delete p4;
    return;
}

int main()
{
    int i{1};
    int *p1 = &i;
    cout << "p1 = " << p1 << endl;
    cout << "*p1 = " << *p1 << endl;

    int *p2 = new int;
    int *p3 = new int{36};
    cout << "*p2 = " << *p2 << endl;
    cout << "*p3 = " << *p3 << endl;
    badfunc();

    cout << "Allocating memory for array" << endl;
    int *pa = new int[20];

    cout << "Populating array" << endl;
    for(int i=0; i<20; i++)
    {
        pa[i]=i;
    }

    cout << "Array elements: " << endl;
    for(int i=0; i<20; i++)
    {
        cout << pa[i] << ", "; 
    }
    cout << endl;

    cout << "Releasing array's memory" << endl;
    delete[] pa;

    cout << "Finished!" << endl;
}