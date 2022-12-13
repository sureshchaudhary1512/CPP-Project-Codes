#include<iostream>
using namespace std;

template<typename T>
void input_function(T f)
{
    f();
}


 // [capture_variable](parameter to pass)->return_type { body; };

int main()
{
    // [](){ body; };
    [](){cout<<"Hello Lambda Expressions"<<endl;}();
    auto expr = [](){cout<<"Hello Lambda Expressions extension"<<endl;};
    expr();

    // [](parameter to pass){ body; }();
    [](int x, int y){cout<<x+y<<endl;}(10,5);
    
    // [capture_variable]()->return_type { body; };
    int m = 8;
    int n = 9;
    
    auto s = [m,n](){cout<<m+n<<endl;};
    s();

    // [ &capture_variable]()->return_type { body; };
    // values modified through call by reference
    auto md = [&m,&n](){cout<<m+n<<endl;};
    ++m;
    ++n;
    md();
    cout<<"m : "<<m<<" n : "<<n<<endl;
    
    // Template fun()
    input_function(md);
}