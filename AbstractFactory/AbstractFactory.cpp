// AbstractFactory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ApplicationFactoryMethod.h"
#include"FactoryMethodSeries.h"

#include"ApplicationAbstractFactory.h"
#include"AbstractFactory.h"

int main()
{
    PrintClass1Factory* printClass1Factory = new PrintClass1Factory();
    CoutClass1Factory* coutClass1Factory = new CoutClass1Factory();
    ApplicationFactoryMethod* app = new ApplicationFactoryMethod(printClass1Factory, coutClass1Factory);    //此时传入的具体工厂为一个系列 Class1
    app->DoWork();
    /*
    * 当传入的工厂为不同系列
    * 如: PrintClass1Factory + CoutClass2Factory (Class1 + Class2), 则会导致程序出错
    *
    * 当具体工厂创建的对象为一个系列时
    * 使用工厂方法设计模式可能会导致传入的具体的工厂不为同一系列, 会导致程序出错
    * 
    * 在这种存在系列接口的情况下, 工厂方法不太适用
    */

    std::cout << std::endl;

    AbstractFactoryClass1* abstractFactory = new AbstractFactoryClass1();
    ApplicationAbstractFactory* app1 = new ApplicationAbstractFactory(abstractFactory);
    app1->DoWork();
    /*
    * 抽象工厂
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
