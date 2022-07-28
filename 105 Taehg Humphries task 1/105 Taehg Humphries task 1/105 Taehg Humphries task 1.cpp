// 105 Taehg Humphries task 1
#include <iostream>

using std::cout;

class Yacht {

public:
	int serial; //attribute

	Yacht(int n) {
		serial = n;
		for (int n = 1; n < 2; n++) {

		}
	}
	
};


class Location {
public:
	int degrees;
	float minutes;
	char direction;

};

int main() {
	cout << "************Ocean race 2021 - 22************\n\n";
	Yacht Obj(1);

	cout << Obj.serial;

}


