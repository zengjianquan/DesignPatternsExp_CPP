#pragma once
#include <iostream>
using namespace std;

//正常程序执行过程==================================
class Library {
public:
	void Step1() {
		//...
		cout << "Library Step1" << endl;
	}

	void Step3() {
		//...
		cout << "Library Step3" << endl;
	}

	void Step5() {
		//...
		cout << "Library Step5" << endl;
	}
};


//模板方法设计模式==================================
class Library1 {
public:
	virtual ~Library1() {

	}

	//template method
	//Run 方法即模板方法
	void Run() {
		Step1();
		Step2();	//虚方法
		Step3();
		Step4();	//虚方法
		Step5();
	}

protected:
	//一次性实现一个算法不变的部分
	void Step1() {		//稳定
		//...
		cout << "Library1 Step1" << endl;
	}

	void Step3() {		//稳定
		//...
		cout << "Library1 Step3" << endl;
	}

	void Step5() {		//稳定
		//...
		cout << "Library1 Step5" << endl;
	}


	//可变的行为留给子类实现
	virtual void Step2() = 0;

	virtual void Step4() = 0;
};