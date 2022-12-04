#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream inputFile("Input.txt");
    string inputLine;
    int numbers[4]; // [0] start range 1, [1] end range 1, [2] start range 2, [3] end range 2
    char x;
    int counter = 0;

    while(getline(inputFile, inputLine))
    {
        inputFile >> numbers[0] >> x >> numbers[1] >> x >> numbers[2] >> x >> numbers[3];
        std::cout << numbers[0] << "-" << numbers[1] << "," << numbers[2] << "-" << numbers[3] << std::endl;

        if((numbers[0] >= numbers[2] && numbers[1] <= numbers[3]))
        {
            std::cout << "Range 1 fits in range 2" << std::endl;
            counter++;
        }
        else if((numbers[2] >= numbers[0] && numbers[3] <= numbers[1])) 
        {
            std::cout << "Range 2 fits in range 1" << std::endl;
            counter++;
        }
        else
        {

        }
    }

    inputFile.close();

    std::cout << "The amount of completely overlapping ranges is: " << counter << std::endl;
    
    return 0;
}

