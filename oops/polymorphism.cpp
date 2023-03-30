#include <iostream>
using namespace std;
class base{
    public:
    virtual void print(){
        cout<<"this is base claas"<<endl;
    }
    void display(){
        cout<<"this is display"<<endl;
    }
};
class derived : public base{
    public:
    void print(){
        cout<<"this is derived claas"<<endl;
    }
    void display(){
        cout<<"this is derived display"<<endl;
    }
       
};

class complex{
    private:
    int real,imag;
    public:
        complex(int r=0,int i=0){
            real=r;
            imag=i;
        } 
        complex operator + (complex const &obj){
            complex res;
            res.imag=imag + obj.imag;
            res.real=real + obj.real;
            return res;
        }
        void display(){
            cout<<real<< " + i"<<imag<<endl;
        }

};
class poly{
    public:
    void fun(){
        cout<<" no argument"<<endl;
    }
    void fun(int x){
        cout<<" int argument"<<endl;
    }
    void fun(double x){
        cout<<" double argument"<<endl;
    }
};
int main(){
    /*poly obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);

    complex c1(2,3);
    complex c2(3,4);
    complex c3=c1+c2;
    c3.display();
    */
   base *baseptr;
   derived d;
   baseptr = &d;
   baseptr -> print();
   baseptr -> display();
   return 0;

}