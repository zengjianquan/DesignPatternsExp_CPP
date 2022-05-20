#pragma once

#include "IClass.h"
#include "Class.h" //依赖具体实现类

//违背依赖倒置原则
class Application {
public:
	Application() {}

public:
	void DoWork() {
		IPrint* printObject = new PrintClass();	//这行违背依赖倒置原则, 依赖具体类
		//应该依赖抽象, 而不应该依赖具体实现细节

		printObject->PrintFunc();
	}
};