#include <iostream>

using namespace std;

class A
{
public:
    static int x;
    A()
    {
    }
    ~A()
    {
    }
    void *operator new(size_t sz)
    {
        x++;
    }
    void operator delete(void *sz)
    {
        x--;
    }
};

int A::x = 0;

int main()
{
    A a, b; //local --> std::stack<T>
    A c, d, e;

    //dynamic --> in heap
    //A* ptr = (A*)malloc(sizeof(A));

    A *ptr = new A;

    //delete ptr;
    cout <<"A instances " << A::x;
    return 0;
}