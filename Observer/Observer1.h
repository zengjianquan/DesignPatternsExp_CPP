#pragma once
#include <iostream>
using namespace std;

/*
* 当subject状态更改时触发notify
* notify会更新observer
*/

class Observer1 {
public:
	void Update() {
		cout << "Obserber1 update" << endl;
	}
};

class Observer2 {
public:
	void Update() {
		cout << "Obserber2 update" << endl;
	}
};


//违背依赖倒置原则
//高层模块Subject(稳定)依赖低层模块Observer(变化)
//应改依赖抽象
class Subject1 {
private:
	Observer1* observer1;
	Observer2* observer2;

public:
	Subject1(Observer1* observer1, Observer2* observer2):
		observer1(observer1),
		observer2(observer2)
	{
	}

	void Notify() {
		observer1->Update();
	}
};