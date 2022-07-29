// 105 Taehg Humphries task 1
#include <iostream>
#include <vector>

using std::cout;
using std::cin;

class Location {
public:
	int longDegrees;
	float longMinutes;
	char longDirection;

	int latDegrees;
	float latMinutes;
	char latDirection;

	void getpos() { // getting the input of the locations. using longitude and latitude
		cout << "\nEnter the location of the first ship:\n";
		cout << "Input degrees between 0 and 180: ";
		cin >> longDegrees;
		cout << "Input degrees between 0 and 60: ";
		cin >> longMinutes;
		cout << "Input direction (N/S) : ";
		cin >> longDirection;
		cout << "Input degrees between 0 and 180: ";
		cin >> latDegrees;
		cout << "Input degrees between 0 and 60: ";
		cin >> latMinutes;
		cout << "Input direction (E/W) : ";
		cin >> latDirection;
	}
};

class Yacht {
	Location location;
	int number;

public:
	int serial; //attribute

	Yacht(int i) {
		number == num;
	}

	void get_pos() {
		location.getpos();
	};

	void display() {
		cout << "\nThe ship serial number is :";
		
		cout << "\nand it's posistion is : " << location.latDegrees << "\xF8" << location.latMinutes << "'" << location.latDirection << " Latitude  " << location.longDegrees << "\xF8" << location.longMinutes << "'" << location.longDirection << " Longtitude";
	};
};


int main() {
	Yacht stuff;

	cout << "******************Ocean Race 2021-22******************\n\n";
	
	std::vector<Yacht*> Yachts;
	for (int i = 0; i < 3; i++) {
		cout << "\n*************************************";
		Yachts.push_back(new Yacht(i+1));
		stuff.get_pos();
	}

	/*for (int i = 0; i < 3; i++) {
		stuff.display();
	}*/
}


