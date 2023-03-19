#include <iostream>

using namespace std;

class A
{
    int size;
    int *p, **arr, r, c;

public:
    A() //Constructor
    {
        cout << "ENTER ROWS " << endl;
        cin >> r;
        p = new int[r];
        arr = new int *[r];
        for (int i = 0; i < r; i++)
        {
            cout << "ENTER NUMBER OF COLUMNS IN ROW " << i << " ";
            cin >> p[i];
            arr[i] = new int[p[i]];
        }
    }
    A(A &obj)
    { //Copy Constructor

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; i < p[i]; i++)
            {
                arr[i][j] == obj.arr[i][j];
            }
        }
    }
    A &operator=(A &obj)
    { //Assignment overloading
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; i < p[i]; i++)
            {
                arr[i][j] == obj.arr[i][j];
            }
        }
    }

    void set_data()
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < p[i]; j++)
            {
                cin >> arr[i][j];
            }
        }
    }

    void print()
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < p[i]; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
};
int main()
{
    A obj;
    obj.set_data();
    //A obj1 = obj;
    obj.print();
}

