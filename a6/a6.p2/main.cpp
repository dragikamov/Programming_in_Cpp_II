/*
CH08-320143
a6 p2.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include <sstream>

using namespace std;
/// The first mistake was that we weren't changing
/// the value, but we were moving with the address
/// and that's why we needed to put brackets
void foo(int *array, int n, int *odds)
{
    for(int i=0; i<n; i++)
        if (array[i] % 2 == 1)
            (*odds)++;
}

class Test
{
private:
    double *a;
    int n;
public:
    Test()
    {
        a=NULL;
        n=0;
    }
    Test(double *a, int n)
    {
        this->n = n;
        if (this->a != NULL)
        {
            delete this->a;
        }
        this->a = new double[n];
        for(int i=0; i<n; i++)
            this->a[i] = a[i];
    }
    string toString()
    {
        ostringstream ss;
        ss << "Length: " << n << endl << "Elements: ";
        for(int i=0; i<n; i++)
            ss << a[i] << " ";
        ss << endl;
        return ss.str();
    }
    ~Test()
    {
        delete a;
    }
};

int main()
{
    int array[3] = {1, 2, 3};
    int odd_values=0;
    foo(array, 3, &odd_values);
    cout << "Amount of odd values in the array=" << odd_values << endl;
    Test arr[5];
    double v[3] = {1.2, 2.3, 3.45};
    Test *obj1;
    obj1=&arr[0];
    Test *obj2 = new Test(v, 3);
    Test *obj3 = NULL;
    cout << obj1->toString();
    cout << obj2->toString();
    /// The second mistake was that we were trying to print a
    /// NULL pointer
    //cout << obj3->toString();
    /// Also we cannot deallocate something that we didn't allocate
    /// place for.
    //delete obj1;
    delete obj2;
    delete obj3;
    return 0;
}
