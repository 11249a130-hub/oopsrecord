#include<iostream>
using namespace std;
class student
{
    private:
    int rollno,m1,m2,m3,total;
    char name;
    float avg;
    public:
    void getdata();
    void calculate();
    void print();
};
void student::getdata()
{
    cout<<"Enter rollno";
    cin>>rollno;
    cout<<"Enter name";
    cin>>name;
    cout<<"Enter 3marks";
    cin>>m1;
    cin>>m2;
    cin>>m3;
}
void student::calculate()
{
    total=m1+m2+m3;
    avg=total/3;
}
void student::print()
{
    cout<<"\n name:"<<name;
    cout<<"\n rollno:"<<rollno;
    cout<<"\n mark1:"<<m1;
    cout<<"\n mark2:"<<m2;
    cout<<"\n mark3:"<<m3;
    cout<<"\n total:"<<total;
    cout<<"\n avg:"<<avg;
}
int main()
{
    student s;
    int i,n;
    cout<<"Enter the n value";
    cin>>n;
    for(i=0;i<n;i++)
    s.getdata();
    s.calculate();
    s.print();
}

























































































