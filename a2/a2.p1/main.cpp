/*
CH08-320143
a2 p1.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

class Complex
{
private:
    double real, imag;
public:
    Complex(){}
    Complex(float a, float b)
    {
        real=a;
        imag=b;
    }
    friend ostream& operator<<(ostream &os, const Complex &a)
    {
        if(a.imag)
        {
            os<<noshowpos<<a.real<<showpos<<a.imag<<"i";
        }
        else
        {
            os<<noshowpos<<a.real;
        }
        return os;
    }
    friend istream& operator>>(istream &in, Complex &a)
    {
        in>>a.real>>a.imag;
        return in;
    }
    Complex operator+(const Complex &a)
    {
        return Complex(this->real+a.real, this->imag+a.imag);
    }
    Complex operator-(const Complex &a)
    {
        return Complex(this->real-a.real, this->imag-a.imag);
    }
    Complex operator*(const Complex &a)
    {
        return Complex(this->real * a.real - this->imag * a.imag,
                       this->real * a.imag + this->imag * a.real);
    }
    bool operator<(const Complex &a)
    {
        double v1=abs(sqrt(this->real*this->real+this->imag*this->imag));
        double v2=abs(sqrt(a.real*a.real+a.imag*a.imag));
        return v1<v2;
    }
};

template <class T>
T array_min(T arr[], int size)
{
    int i;
    T small=arr[0];
    for(i=1;i<size;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    return small;
}

template <class A>
void print(A arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

int main()
{
    int intarr[]={1,2,3,4,5,6};
    cout<<"This is the integer array: ";
    print(intarr,6);
    cout<<"The smallest element is: "<<array_min(intarr,6)<<endl;

    double darr[]={1.1,2.2,3.3,4.4,5.5,6.6};
    cout<<"This is the double array: ";
    print(darr,6);
    cout<<"The smallest element is: "<<array_min(darr,6)<<endl;

    Complex carr[]={Complex(1,2),Complex(3,4),Complex(-3,-5)};
    cout<<"This is the complex array: ";
    print(carr,3);
    cout<<"The smallest element is: "<<array_min(carr,3)<<endl;
}
