//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class Java
//{
//public:
//    void header()
//    {
//        cout<<"首页、公开课、登录"<<endl;
//    }
//    void footer()
//    {
//        cout<<"帮助中心、交流合作、站内地图"<<endl;
//    }
//    void left()
//    {
//        cout<<"Java、Python、C++"<<endl;
//    }
//    void content()
//    {
//        cout<<"Java学科视频"<<endl;
//    }
//};
//class Python
//{
//public:
//    void header()
//    {
//        cout<<"首页、公开课、登录"<<endl;
//    }
//    void footer()
//    {
//        cout<<"帮助中心、交流合作、站内地图"<<endl;
//    }
//    void left()
//    {
//        cout<<"Java、Python、C++"<<endl;
//    }
//    void content()
//    {
//        cout<<"Python学科视频"<<endl;
//    }
//
//};
//class Cpp
//{
//public:
//    void header()
//    {
//        cout<<"首页、公开课、登录"<<endl;
//    }
//    void footer()
//    {
//        cout<<"帮助中心、交流合作、站内地图"<<endl;
//    }
//    void left()
//    {
//        cout<<"Java、Python、C++"<<endl;
//    }
//    void content()
//    {
//        cout<<"C++学科视频"<<endl;
//    }
//
//};
////class animals
////{
////public:
////    animals(){}
////    ~animals(){}
////private:
////
////};
//int main()
//{
//    Java ja;
//    ja.header();
//    ja.footer();
//    ja.left();
//    ja.content();
//    cout<<"---------------------------------"<<endl;
//    Python py;
//    py.header();
//    py.footer();
//    py.left();
//    py.content();
//    cout<<"---------------------------------"<<endl;
//    Cpp cpp;
//    cpp.header();
//    cpp.footer();
//    cpp.left();
//    cpp.content();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//    void header()
//    {
//        cout<<"首页、公开课、登录"<<endl;
//    }
//    void footer()
//    {
//        cout<<"帮助中心、交流合作、站内地图"<<endl;
//    }
//    void left()
//    {
//        cout<<"Java、Python、C++"<<endl;
//    }
//};
//class Java:public Base
//{
//public:
//    void content()
//    {
//        cout<<"Java学科视频"<<endl;
//    }
//};
//class Cpp:public Base
//{
//public:
//    void content()
//    {
//        cout<<"C++学科视频"<<endl;
//    }
//};
//class Python:public Base
//{
//public:
//    void content()
//    {
//        cout<<"Python学科视频"<<endl;
//    }
//};
//int main()
//{
//    Java ja;
//    ja.header();
//    ja.footer();
//    ja.left();
//    ja.content();
//    cout<<"---------------------------------"<<endl;
//    Python py;
//    py.header();
//    py.footer();
//    py.left();
//    py.content();
//    cout<<"---------------------------------"<<endl;
//    Cpp cpp;
//    cpp.header();
//    cpp.footer();
//    cpp.left();
//    cpp.content();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//    int a;
//    cin>>a;
//    cout<<a<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    int a;
//protected:
//    int b;
//private:
//    int c;
//};
//class B:public A
//{
//    void f(){a=10;}
//};
//int main()
//{
//
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    int a;
//protected:
//    int b;
//private:
//    int c;
//};
//class B:public A
//{
//public:
//    int d;
//};
//int main()
//{
//    A a;
//    B b;
//    cout<<sizeof(a)<<" "<<sizeof(b)<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    A(){cout<<"A::A()"<<endl;}
//    ~A(){cout<<"A::~A()"<<endl;}
//};
//class B:public A
//{
//public:
//    B(){cout<<"B::B()"<<endl;}
//    ~B(){cout<<"B::~B()"<<endl;}
//};
//int main()
//{
//    B a;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class  A
//{
//public:
//    A():a(10){}
//    void f(){cout<<"A::f()"<<endl;}
//    int a;
//};
//class B:public A
//{
//public:
//    B():a(100){}
//    void f(){cout<<"B::f()"<<endl;}
//    int a;
//};
//int main()
//{
//    B c;
//    cout<<c.a<<endl;
//    cout<<c.A::a<<endl;
//    c.f();
//    c.A::f();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    static int i;
//};
//int A::i=0;
//class B:public A
//{
//public:
//    static int i;
//};
//int B::i=0;
//int main()
//{
//    B a;
//    A b;
//    a.i=100;
//    a.A::i=1000;
//    cout<<B::i<<" "<<B::A::i<<" "<<b.i<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class Animal
//{
//public:
//    Animal(){cout<<"Animal::Animal()"<<endl;}
//    int age;
//};
//class Sheep: virtual public Animal
//{
//public:
//
//    Sheep(){cout<<"Sheep"<<endl;}
//};
//class Tuo:  virtual public Animal
//{
//public:
//
//    Tuo(){cout<<"Tuo"<<endl;}
//};
//class SheepTuo:public Sheep,public Tuo
//{
//
//};
//int main()
//{
//    SheepTuo p;
//    //p.age=100;
//    cout<<sizeof(p)<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class Animal
//{
//public:
//    virtual void speak(){cout<<"动物在说话"<<endl;}
//};
//class Cat:public Animal
//{
//public:
//    virtual void speak(){cout<<"小猫在说话"<<endl;}
//};
//void dospeak(Animal &animal)
//{
//    animal.speak();
//}
//int main()
//{
//    Cat cat;
////    Animal &animal=cat;
//    dospeak(cat);
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class Animal
//{
//public:
//    Animal():i(0){cout<<this<<endl;}
//    void fff(){cout<<"fff"<<endl;}
//    virtual void f(){cout<<"动物在叫"<<endl;}
//    int i;
//};
//class Cat:public Animal
//{
//public:
//    Cat(){cout<<this<<endl;}
//    virtual void f(){cout<<"猫在叫"<<endl;}
//    void ff(){cout<<"Cat::ff()"<<endl;}
//};
//void f(Animal a)
//{
//    cout<<a.i<<endl;
//}
//int main()
//{
//    Cat cat;
//    cat.i=100;
//    cout<<&cat<<endl;
//    f(cat);
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    A(){cout<<"A::A()"<<endl;}
//    virtual void f(){cout<<"A::f()"<<endl;}
//    int i;
//};
//class B:public A
//{
//public:
//    virtual void f(){cout<<"B::f()"<<endl;}
//    int i;
//};
//void ff(A&b)
//{
//    b.f();
//    cout<<b.i<<endl;
//}
//int main()
//{
//    B b;
//    b.i=100;
//    b.A::i=1000;
//    ff(b);
//    cout<<sizeof(b)<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    int i;
//};
//class B:virtual public A
//{
//public:
//    int a;
//};
//class C:virtual public A
//{
//public:
//    int a;
//};
//class D:public C,public B
//{
//
//};
//int main()
//{
//    D d;
//    d.a=100;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//#include<string>
//class Calculator
//{
//public:
//    Calculator(int a,int b):num1(a),num2(b){}
//    int getresult(string oper)
//    {
//        if(oper=="+")
//            return num1+num2;
//        else if(oper=="-")
//            return num1-num2;
//        else if(oper=="*")
//            return num1*num2;
//    }
//    int getnum1(){return num1;}
//    int getnum2(){return num2;}
//private:
//    int num1;
//    int num2;
//};
//int main()
//{
//    Calculator c(10,10);
//    cout<<c.getnum1()<<" + "<<c.getnum2()<<" = "<<c.getresult("+")<<endl;
//    cout<<c.getnum1()<<" - "<<c.getnum2()<<" = "<<c.getresult("-")<<endl;
//    cout<<c.getnum1()<<" * "<<c.getnum2()<<" = "<<c.getresult("*")<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class  Base
//{
//public:
//    Base(int a,int b):num1(a),num2(a){}
//    int getnum1(){return num1;}
//    int getnum2(){return num2;}
//    virtual int getresult(){return 0;}
//    virtual ~Base(){}
//protected:
//    int num1;
//    int num2;
//};
//class Add:public Base
//{
//public:
//    Add(int a,int b):Base(a,b){}
//    virtual int getresult(){return num1+num2;}
//    virtual ~Add(){}
//};
//class Sub:public Base
//{
//public:
//    Sub(int a,int b):Base(a,b){}
//    virtual int getresult(){return num1-num2;}
//    virtual ~Sub(){}
//};
//class Mul:public Base
//{
//public:
//    Mul(int a,int b):Base(a,b){}
//    virtual int getresult(){return num1*num2;}
//    virtual ~Mul(){}
//};
//int main()
//{
//    Base*a=new Add(10,10);
//    cout<<a->getnum1()<<"+"<<a->getnum2()<<"="<<a->getresult()<<endl;
//    delete a;
//    a=new Sub(10,10);
//    cout<<a->getnum1()<<"-"<<a->getnum2()<<"="<<a->getresult()<<endl;
//    delete a;
//    a=new Mul(10,10);
//    cout<<a->getnum1()<<"*"<<a->getnum2()<<"="<<a->getresult()<<endl;
//    delete a;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    virtual void f()=0;
//};
//class B:public A
//{
//public:
//    virtual void f(){cout<<"B::B()"<<endl;}
//
//};
//class C:public A
//{
//public:
//    virtual void f(){cout<<"C::C()"<<endl;}
//};
//void f(A &a)
//{
//    a.f();
//}
//int main()
//{
//    C c;
//    B b;
//    f(b);
//    f(c);
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class Zuo
//{
//public:
//    virtual void boil()=0;
//    virtual void chongpao()=0;
//    virtual void dao()=0;
//    virtual void fuliao()=0;
//    virtual void makeDrink()=0;
//};
//class Water:public Zuo
//{
//public:
//    virtual void boil(){cout<<"正在煮水"<<endl;}
//    virtual void chongpao(){cout<<"冲泡茶水"<<endl;}
//    virtual void dao(){cout<<"倒茶"<<endl;}
//    virtual void fuliao(){cout<<"加入茶水辅料"<<endl;}
//    virtual void makeDrink(){boil();chongpao();dao();fuliao();}
//};
//class Coffee:public Zuo
//{
//public:
//    virtual void boil(){cout<<"正在煮水"<<endl;}
//    virtual void chongpao(){cout<<"冲泡咖啡"<<endl;}
//    virtual void dao(){cout<<"倒咖啡"<<endl;}
//    virtual void fuliao(){cout<<"加入咖啡辅料"<<endl;}
//    virtual void makeDrink(){boil();chongpao();dao();fuliao();}
//};
//void f(Zuo&z)
//{
//    z.makeDrink();
//    cout<<"------------------"<<endl;
//}
//int main()
//{
//    Water w;
//    Coffee c;
//    f(w);
//    f(c);
//    return 0;
//}
#include<iostream>
using namespace std;
int main()
{
    return 0;
}
