#pragma once
#include <iostream>
using namespace std;

enum TaxBase {
	CN,
	US,
	DE
};


//违背开放封闭原则
class SalesOrder {
	TaxBase tax;
public:
	SalesOrder(TaxBase _tax):tax(_tax){}

	void CaculateTax(){
		//...

		if (tax == CN) {
			//CN....
			cout << "CNTaxStrategy CaculateTax" << endl;
		}
		else if (tax == US) {
			//US....
			cout << "USTaxStrategy CaculateTax" << endl;
		}
		else if (tax == DE) {
			//DE....
			cout << "DETaxStrategy CaculateTax" << endl;
		}
	}
};
