#include "include.h"
bool figure::operator==(figure& F) {
	if (this->GetSquare() == F.GetSquare())
		return(1);
	else
		return(0);
}
triangle::triangle() {
	A = B = C = 0;
}
triangle::triangle(double one, double two, double three) {
	A = one;
	B = two;
	C = three;
}
triangle::triangle(triangle& F) {
	A = F.A;
	B = F.B;
	C = F.C;
}
bool triangle::check() const {
	double MAX;
	if ((A > C) and (A > B))
		MAX = A;

	else if (C > B)
		MAX = C;

	else
		MAX = B;

	if ((A + B + C > MAX + MAX) and (A > 0) and (B > 0) and (C > 0))
		return(1);
	else
		return(0);
}
double triangle::GetSquare() {
	double P = A / 2 + B / 2 + C / 2;
	return(sqrt(P * (P - A) * (P - B) * (P - C)));
}
double triangle::GetPerimeter() {
	return(A + B + C);
}
rectangle::rectangle() {
	A = B = 0;
}
rectangle::rectangle(double one, double two) {
	A = one;
	B = two;
}
rectangle::rectangle(rectangle& F) {
	A = F.A;
	B = F.B;
}
bool rectangle::check() const {
	if ((A > 0) and (B > 0))
		return(1);
	else
		return(0);
}
double rectangle::GetSquare() {
	return(A * B);
}
double rectangle::GetPerimeter() {
	return((A + B) * 2);
}
circle::circle() {
	R = 0;
}
circle::circle(double one) {
	R = one;
}
circle::circle(circle& F) {
	R = F.R;
}
bool circle::check() const {
	if (R > 0)
		return(1);
	else
		return(0);
}
double circle::GetSquare() {
	return(R * R * Pi);
}
double circle::GetPerimeter() {
	return(2 * Pi * R);
}