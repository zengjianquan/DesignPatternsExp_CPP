// FactoryMethod.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Application.h"
#include"ApplicationFactoryMethod.h"

int main()
{
    //普通调用, 违背依赖倒置原则
    Application *app = new Application();
    app->DoWork();


    //调用具体工厂, 在运行时进行装载
    PrintClassFactory* printFactory = new PrintClassFactory();
    Application_FactoryMethod* app1 = new Application_FactoryMethod(printFactory);
    app1->DoWork();

    CoutClassFactory* coutFactory = new CoutClassFactory();
    Application_FactoryMethod* app2 = new Application_FactoryMethod(coutFactory);
    app2->DoWork();

    /*
    * 工厂方法
    * 在main函数中会因为factory的不同而导致多种依赖
    * 但是在application中却不会依赖具体类
    * 
    * 并不会消除变化, 而是将变化转移
    * 这样设计会将类的变化转移到局部的位置, 而不是将变化充斥整个类
    */
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
