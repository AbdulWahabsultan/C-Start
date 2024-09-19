#include <iostream>
void print(const int *const numb,int size)
{
	for (int i = 0; i < size; ++i)
		std::cout << numb[i]<<" ";
	std::cout<<std::endl;	

}
int* apply_all(const int* const a1, int size1, const int* const a2, int size2)
{
	int* temp{};
	int t=0;
	temp = new int[size1 * size2];
	for (int i = 0; i < size2; i++)
	{
		for (int y = 0; y < size1; y++)
		{
			temp[t] = a1[y] * a2[i];
			++t;
		}
	}
	return temp;
}
int main()
{
	
	int arr1[]{ 1,2,3,4,5};
	int arr2[]{ 10,20,30 };
	std::cout << "Array 1 is : ";
	print(arr1, 5);
	std::cout << "Array 2 is : ";
	print(arr2, 3);
	int *result = apply_all(arr1,5, arr2, 3);
	std::cout << "Result :";
	print(result, 15);

	delete[] result;
	return 0;
}