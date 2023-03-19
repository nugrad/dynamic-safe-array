#include<iostream>

using namespace std;

class A{
   int size;
   int *p;
   public:
   A(int s)
   {
     size=s;
     p=new int[size];
    }
    void set_data()
    {
    	
     for(int i=0;i<size;i++)
     {
       cin>>p[i];
     }
    }

//copy constructor
    A(const A &obj)
    {
        size=obj.size;
        p=new int[size];

        for(int i=0;i<size;i++)
        {
            p[i]=obj.p[i];
        }
    }


//destructor
    ~A()
    {
      delete []p;    
    }


//Assignment operator
    A &operator =(const A &obj)
    {
       size=obj.size;
       p=new int[size];

    for(int i=0;i<size;i++)
     {
        p[i]=obj.p[i];
     }
    }
    //   [] overloading
    
    int & operator[](int a)
    {
    	if(a>size)
    	{
    		cout<<"INDEX OUT OF BOUND "<<endl;
		}
		return p[a];
	}
    void print()
     {
        for(int i=0;i<size;i++)
     {

       cout<<p[i]<<" ";
    }
cout<<endl;
}

};
int main()
{
A obj(5);
cout<<"Enter Values for Object 1 "<<endl;
obj.set_data();
obj[1]=6;
obj.print();
/*A obj1=obj;//copy constructor 
cout<<"values are copied in object 2 using copy constructor  "<<endl;
obj1.print();
A obj2(5);
cout<<"Enter Values for Object 3 "<<endl;
obj2.set_data();
obj1=obj2;// Overloading
cout<<"values are copied in object 2 using Assignmnet Operator  "<<endl;
obj1.print();*/
}
