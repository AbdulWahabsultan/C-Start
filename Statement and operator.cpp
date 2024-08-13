/*#include <iostream>
#include <string>

int main()
{
    int t = 0;
    std::string input;
    std::cout << "Enter shit";
    std::cout << "\n";
    getline(std::cin, input);
    std::cout << "\n";
    std::string temp = "";
    for (int x = 0; x < input.length(); x++)
    {
        temp += input[x];
        if (input[x] == ' ')
        {
            temp.pop_back();

            std::string temp2 = "";

            for (int y = 0; y < input.length(); y++)
            {
                temp2 += input[y];
                if (temp == temp2)
                {
                    t++;
                    std::cout << temp2 << " is repeated :" << t << "\n";
                    break;
                }
                else if (input[y] == ' ')
                {
                    temp2 = "";
                    t = 0;
                }
            }
            temp = "";
        }
    }

    return 0;
}*/