#include<iostream>
void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(const int arr[], size_t size) // i added const in the function to avoid the issu which is caused at line 10
{
	for (size_t i{0}; i < size; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	//arr[0] = 5000; to avoid this becuse this changes first element of array which is not required 

}
void set_array(int arr[], size_t size, int value)
{
	for (size_t i{ 0 }; i < size; ++i)
		arr[i] = value;


}	
int main()
{
	int my_score[]{ 100,200,300,400,500 };
	print_array(my_score, 5);
	set_array(my_score, 5, 100);
	print_array(my_score, 5);
	return 0;

}