#include<iostream>

using namespace std;

class A{
int size;
int **p,r,c;
public:
A()                               //Constructor
{
cout<<"ENTER ROWS AND COLUMN"<<endl;
cin>>r>>c;
p=new int*[r];
for(int i=0;i<r;i++)
{
p[i]=new int[c];
}
}
A(A &obj){                         //Copy Constructor

for(int i=0;i<r;i++)
{
for(int j=0;i<c;i++)
{
p[i][j]=obj.p[i][j];
}
}
}

A &operator =(A &obj){                         //Assignment overloading
for(int i=0;i<r;i++)
{
for(int j=0;i<c;i++)
{
p[i][j]=obj.p[i][j];
}
}
}
~A()                             //Destructor
{
for(int i=0;i<r;i++)
{
delete p[i];
}
delete p;
}
void set_data()
{
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
cin>>p[i][j];
}
}
}

void print()
{
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
cout<<p[i][j];
}
cout<<endl;
}

}
void deleteR()                                         //delete Row
{
for(int i=0+1;i<r;i++)
{
for(int j=0;j<c;j++)
{
cout<<p[i][j];
}
cout<<endl;
}
}
void deleteC()                                           //Delete Column
{
for(int i=0;i<r;i++)
{
for(int j=0+1;j<c;j++)
{
cout<<p[i][j];
}
cout<<endl;
}
}
void insertC()                                          //Insert Column
{

int arr[100];

for(int j=0;j<c;j++)
{
cout<<"ENTER COLUMN VALUES ";
    cin>>arr[j];
}


for(int j=0;j<c;j++)
{
int i=r;
p[i][j]=arr[j];
}


for(int i=0;i<=r;i++)
{
for(int j=0;j<c;j++)
{
cout<<p[i][j];
}
cout<<endl;

}
}




};
int main()
{
A obj;
obj.set_data();
obj.insertC();
obj.print();
//obj.deleteR();
//obj.deleteC();

}
