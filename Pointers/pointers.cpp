#include <iostream>

void display(int* array, int stop)
{
    while (*array != stop)
        std::cout << *array++ << std::endl;

}
int* create_array(int size, int init_value = 0)
{
    int *new_storg = nullptr;
    new_storg = new int[size];
    for (int i = 0; i < size; ++i)
    {
        *(new_storg + i) = init_value;

    }
    return new_storg;

}
void display_ar(const int* const array, int size)
{
    for (int i = 0; i < size; ++i)
        std::cout << array[i]<<" ";
    std::cout << std::endl;


}
int main()
{    
    //Learnt about declearing and derefrencing pointer
    int var = 55;
    int* score_ptr=&var;
    std::cout << *score_ptr << std::endl;
    *score_ptr = var;
    std::cout << *score_ptr << "\nnew "<<var;
    std::cout << "\n...........................\n";

    //Learnt about new function for pointer
    
    
    int *newint_ptr=nullptr;
    size_t size = 0;
    std::cout << "How much size in heap ?:";
    std::cin >> size;
    newint_ptr = new int[size];
    std::cout << newint_ptr<<std::endl;
    delete [] newint_ptr;
    std::cout << "\n...............................\n";
    
    //Sending pointers to a function
    int b[]{ 100,200,300,400,-1};
    display(b, -1);
    std::cout << "\n..............................\n";
    
    //Returning a pointer from function
    int* array = nullptr;
    int a = 0;
    int int_val = 0;
    std::cout << "How many integers to allocate :";
    std::cin >> a;
    std::cout << "\n What should be integers initial value:";
    std::cin >> int_val;
    array = create_array(a, int_val);
    display_ar(array, a);
    delete[]array;

    return 0;
}