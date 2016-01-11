//Yiwei Shen
//ECE 2620
//Lab 3

#include <iostream>
#include "circle.cc"
using namespace std;

void menu(){ //displays the differet menu options
	cout <<"Select the following: " << endl;
	cout <<"1.Computer the radius of the circle" << endl;
	cout <<"2.Compute the circumference of the circle" << endl;
	cout <<"3.Compute the area of the circle" << endl;
	cout <<"4.Enter new x1, y1, x2,y2 values for Object 1" << endl;
	cout <<"5.Enter new x1, y2,x2, y2 values for Object 2" << endl;	
	cout <<"6.Exit" << endl;
}
int main()
{
	circle<int> my_obj1(1,3);
	circle<double> my_obj2(-1.5,-6.65,-0.5,10.0);
	int a; //menu optioin
	int x1;
	int x2;
	int y1;
	int y2;
	double _x1;
	double _x2;
	double _y1;
	double _y2;
	menu();
	cin >> a;
	while (a !=6){ //runs the menu until option is 4
		switch (a) { //menu
			case 1: {
				cout << "Radius of Circle 1:" << endl;
				cout << my_obj1.radius() << endl;
				cout << "Radius of Circle 2:" << endl;
				cout << my_obj2.radius() << endl;
				break;
			}	
			case 2: {
				cout << "The circumference of circle 1:" << endl;
				cout << my_obj1.circumference() << endl;
				cout << "The circumference of circle 2:" << endl;
				cout << my_obj2.circumference() << endl;
				break;
			}
			case 3: {
				cout << "The area of circle 1:" << endl;
				cout << my_obj1.area() << endl;
				cout << "The area of circle 2:" << endl;
				cout << my_obj2.area() << endl;
				break;
			}
			case 4: {
				cout << "X1: ";
				cin >> x1;
				cout << "Y1: ";
				cin >> y1;
				cout << "Second point:" << endl;
				cout << "X2: ";
				cin >> x2;
				cout << "Y2: ";
				cin >> y2;
				my_obj1.populate_classobj(x1, y1, x2, y2);
				break;
			}
			case 5: {
				cout << "X1: ";
				cin >> _x1;
				cout << "Y1: ";
				cin >> _y1;
				cout << "Second point:" <<endl;
				cout << "X2: ";
				cin >> _x2;
				cout << "Y2: ";
				cin >> _y2;
				my_obj2.populate_classobj(_x1, _y1, _x2, _y2);
				break;
			}
			case 6: {
				break;
			}
			default:
				cout << "Not an option." << endl;
				break;
		}
		menu();
		cin >> a;
	}
	return 0;
}

