#include <iostream>

using namespace std;

class A
{
    int size;
    int **p, r, c;

public:
    A() //Constructor
    {
        cout << "ENTER ROWS AND COLUMN" << endl;
        cin >> r >> c;
        p = new int *[r];
        for (int i = 0; i < r; i++)
        {
            p[i] = new int[c];
        }
    }
    A(const A &obj)
    { //Copy Constructor

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; i++)
            {
                p[i][j] = obj.p[i][j];
            }
        }
    }

    A &operator=(const A &obj)
    { //Assignment overloading
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; i++)
            {
                p[i][j] = obj.p[i][j];
            }
        }
        
    }
    ~A() 
    {
        for (int i = 0; i < r; i++)
        {
            delete p[i];
        }
        delete p;
    }


    int &operator ()(int a,int b)
      {
    if (a > r|| b >c )
    {
      cout << "INDEX OUT OF BOUND " << endl;
    }
    return p[a][b];
    }



    void set_data()
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> p[i][j];
            }
        }
    }

    void print()
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << p[i][j];
            }
            cout << endl;
        }
    }
};
int main()
{
    A obj;
    cout<<"ENTER THE VALUES"<<endl;
    obj.set_data();
    //obj(1,0)=9;
   // obj.print();
    
    
    //obj2 = obj;
    //obj3.set_data();
   // obj = obj3;
    obj.print();
}

