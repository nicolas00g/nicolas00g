#include<iostream>

using namespace std;
 template <typename T>
T suma(T a,T b){
    return a+b;
}

int main (){
int a,b;
a=4;
b=5;
cout<<"la suma de"<<a<<"y"<<b<<"es:"<<suma<int>(a,b)<<endl;

return 0;
}
