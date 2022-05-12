#pragma once
#include"Library.h"

//正常程序执行过程======================================
class Application {
public:
	bool Step2() {
		//...
		cout << "Application Step2" << endl;
		return true;
	}

	bool Step4() {
		//...
		cout << "Application Step4" << endl;
		return true;
	}
};


//模板方法设计模式=====================================
class Application1 : public Library1 {
protected:
	virtual void Step2() {
		//...子类实现虚方法
		cout << "Application1 Step2" << endl;
	}

	virtual void Step4() {
		//...子类实现虚方法
		cout << "Application1 Step4" << endl;
	}
};