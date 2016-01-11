#include "circle.h"
#include <cmath>
#define PI (4*atan(1))

template <class T>
double circle<T>::distance(){
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
} //caculates distance between any 2 points
template <class T>
double circle<T>::radius(){
	return distance ();
} //caculates distance of radius
template <class T>
double circle<T>::circumference(){
	double r = radius();
	return (double)(2 * PI * r);
} //caculates the cirumference of the circle
template <class T>
double circle<T>::area(){
	double r = radius();
	return (double)(PI * r *r);
} //caculates the area of the circle
template <class T>
void circle<T>::populate_classobj(T x3, T y3, T x4, T y4){
	x1 = x3;
	x2 = x4;
	y1 = y3;
	y2 = y4;
}
template <class T>
circle<T>::circle(T _x1, T _y1, T _x2, T _y2){
	x1 = _x1;
	x2 = _x2;
	y1 = _y1;
	y2 = _y2;
}


