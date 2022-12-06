#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream inputFile("Input.txt");
    string inputLine;
    int i = 0;

    getline(inputFile, inputLine);

    while(1)
    {
        std::cout << "Processing data iteration: " << i << std::endl;
        
        if(inputLine[i] != inputLine[i + 1] && inputLine[i] != inputLine[i + 2] && inputLine[i] != inputLine[i + 3])
        {
            if(inputLine[i + 1] != inputLine[i + 2] && inputLine[i + 1] != inputLine[i + 3])
            {
                if(inputLine[i + 2] != inputLine[i + 3])
                {
                    std::cout << "Marker Found" << std::endl;
                    break;
                }
                else
                {
                    i++;
                }
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }

    std::cout << "Marker found after: " << i + 4 << " characters" << std::endl;

    return 0;
}