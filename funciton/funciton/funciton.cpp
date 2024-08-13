#include<iostream>
const double pi{ 3.14159 };
double cal_area_circ(double radius)
{
	return pi * radius * radius;


}
double calc_vol( double radius,double hight) 
{
	return cal_area_circ(radius) * hight;
}
void area_circle() {
	double radius;
	std::cout << "input radius of circle\n";
	std::cin >> radius;
	std::cout << "the area of circle with radius" << radius << " is " << cal_area_circ(radius)<<std::endl;

}
void vol_cirl() {
	double hight, radius;
	std::cout << "Inout radius of cyln";
	std::cin >> radius;
	std::cout << "input hight of cyln";
	std::cin >> hight;
	std::cout << "The voulme of cylender with radius :" << radius << "and hight :" << hight << " is " << calc_vol(radius, hight); //fusion


}
int main()
{
	area_circle();
	vol_cirl();
	return 0;
}