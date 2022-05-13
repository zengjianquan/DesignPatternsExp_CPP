// Decorator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Decorator.h"
#include "Decorator1.h"
using namespace std;

int main()
{
    ReadPrintComponent* readPrintComponent = new ReadPrintComponent();
    readPrintComponent->Dowork();
    delete readPrintComponent;
    cout <<endl;

    ReadCoutComponent* readCoutComponent = new ReadCoutComponent();
    readCoutComponent->Dowork();
    delete readCoutComponent;
    cout << endl;

    //============== Decorator ==============
    cout << "==========Decorator========" << endl;
    cout << endl;

    PrintComponent_Decorator* printComponent = new PrintComponent_Decorator();

    CoutComponent_Decorator* coutComponent = new CoutComponent_Decorator();

    //装饰器中传入不同的component, 为component添加不同的操作(职责)
    ReadDecorator* readPrintCompoentDecorator = new ReadDecorator(printComponent);
    readPrintCompoentDecorator->Dowork();
    
    WriteDecorator* writePrintCompoentDecorator = new WriteDecorator(printComponent);
    writePrintCompoentDecorator->Dowork();

    cout << endl;

    ReadDecorator* readCoutComponentDecorator = new ReadDecorator(coutComponent);
    readCoutComponentDecorator->Dowork();

    WriteDecorator* writeCoutComponentDecorator = new WriteDecorator(coutComponent);
    writeCoutComponentDecorator->Dowork();
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
