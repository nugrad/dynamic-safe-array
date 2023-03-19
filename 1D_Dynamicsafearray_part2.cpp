#include <iostream>

using namespace std;

class A
{
  int size;
  int *p;

public:
  A(int s)
  {
    size = s;
    p = new int[size];
  }
  void set_data()
  {
    for (int i = 0; i < size; i++)
    {
      cin >> p[i];
    }
  }

  //copy constructor
  A(A &obj)
  {
    size = obj.size;
    p = new int[size];
    for (int i = 0; i < size - 1; i++)
    {
      p[i] = obj.p[i];
    }
  }

  //destructor
  ~A()
  {
    delete[] p;
  }

  //overloading
  A &operator=(A &obj)
  {
    size = obj.size;
    p = new int[size];
    for (int i = 0; i < size; i++)
    {
      p[i] = obj.p[i];
    }
  }

  //   [] overloading

  int &operator[](int a)
  {
    if (a > size)
    {
      cout << "INDEX OUT OF BOUND " << endl;
    }
    return p[a];
  }

  void print()
  {
    for (int i = 0; i < size; i++)
    {
      cout << p[i] << " ";
    }
    cout << endl;
  }

  void insert(int data)
  {
    p[size] = data;
    for (int i = 0; i <= size; i++)
    {
      cout << p[i] << " ";
    }
    cout << endl;
  }

  void delete1(int position)
  {

    for (int i = position; i <= size; i++)
    {
      p[i] = p[i + 1];
    }
    size--;
  }
};
int main()
{
  A obj(5);
  cout << "ENTER VALUES " << endl;
  obj.set_data();
  obj.print();
  cout << "AFTER INSERTING " << endl;
  obj.insert(8);
  cout << "AFTER DELETING " << endl;
  obj.delete1(1);
  obj.print();
  //obj.delete1(2);
  //obj.print();

  // A obj1=obj;//copy constructor
  // obj1.print();
  // A obj2(5);
  // obj2.set_data();
  // obj1=obj2;// Overloading
  // obj1.print();
}

