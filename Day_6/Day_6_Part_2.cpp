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

    while (1)
    {
        std::cout << "Processing data iteration: " << i << std::endl;

        if (
            inputLine[i] != inputLine[i + 1] &&
            inputLine[i] != inputLine[i + 2] &&
            inputLine[i] != inputLine[i + 3] &&
            inputLine[i] != inputLine[i + 4] &&
            inputLine[i] != inputLine[i + 5] &&
            inputLine[i] != inputLine[i + 6] &&
            inputLine[i] != inputLine[i + 7] &&
            inputLine[i] != inputLine[i + 8] &&
            inputLine[i] != inputLine[i + 9] &&
            inputLine[i] != inputLine[i + 10] &&
            inputLine[i] != inputLine[i + 11] &&
            inputLine[i] != inputLine[i + 12] &&
            inputLine[i] != inputLine[i + 13])
        {
            if (
                inputLine[i + 1] != inputLine[i + 2] &&
                inputLine[i + 1] != inputLine[i + 3] &&
                inputLine[i + 1] != inputLine[i + 4] &&
                inputLine[i + 1] != inputLine[i + 5] &&
                inputLine[i + 1] != inputLine[i + 6] &&
                inputLine[i + 1] != inputLine[i + 7] &&
                inputLine[i + 1] != inputLine[i + 8] &&
                inputLine[i + 1] != inputLine[i + 9] &&
                inputLine[i + 1] != inputLine[i + 10] &&
                inputLine[i + 1] != inputLine[i + 11] &&
                inputLine[i + 1] != inputLine[i + 12] &&
                inputLine[i + 1] != inputLine[i + 13])
            {
                if (
                    inputLine[i + 2] != inputLine[i + 3] &&
                    inputLine[i + 2] != inputLine[i + 4] &&
                    inputLine[i + 2] != inputLine[i + 5] &&
                    inputLine[i + 2] != inputLine[i + 6] &&
                    inputLine[i + 2] != inputLine[i + 7] &&
                    inputLine[i + 2] != inputLine[i + 8] &&
                    inputLine[i + 2] != inputLine[i + 9] &&
                    inputLine[i + 2] != inputLine[i + 10] &&
                    inputLine[i + 2] != inputLine[i + 11] &&
                    inputLine[i + 2] != inputLine[i + 12] &&
                    inputLine[i + 2] != inputLine[i + 13])
                {
                    if (
                        inputLine[i + 3] != inputLine[i + 4] &&
                        inputLine[i + 3] != inputLine[i + 5] &&
                        inputLine[i + 3] != inputLine[i + 6] &&
                        inputLine[i + 3] != inputLine[i + 7] &&
                        inputLine[i + 3] != inputLine[i + 8] &&
                        inputLine[i + 3] != inputLine[i + 9] &&
                        inputLine[i + 3] != inputLine[i + 10] &&
                        inputLine[i + 3] != inputLine[i + 11] &&
                        inputLine[i + 3] != inputLine[i + 12] &&
                        inputLine[i + 3] != inputLine[i + 13])
                    {
                        if (
                            inputLine[i + 4] != inputLine[i + 5] &&
                            inputLine[i + 4] != inputLine[i + 6] &&
                            inputLine[i + 4] != inputLine[i + 7] &&
                            inputLine[i + 4] != inputLine[i + 8] &&
                            inputLine[i + 4] != inputLine[i + 9] &&
                            inputLine[i + 4] != inputLine[i + 10] &&
                            inputLine[i + 4] != inputLine[i + 11] &&
                            inputLine[i + 4] != inputLine[i + 12] &&
                            inputLine[i + 4] != inputLine[i + 13])
                        {
                            if (
                                inputLine[i + 5] != inputLine[i + 6] &&
                                inputLine[i + 5] != inputLine[i + 7] &&
                                inputLine[i + 5] != inputLine[i + 8] &&
                                inputLine[i + 5] != inputLine[i + 9] &&
                                inputLine[i + 5] != inputLine[i + 10] &&
                                inputLine[i + 5] != inputLine[i + 11] &&
                                inputLine[i + 5] != inputLine[i + 12] &&
                                inputLine[i + 5] != inputLine[i + 13])
                            {
                                if (
                                    inputLine[i + 6] != inputLine[i + 7] &&
                                    inputLine[i + 6] != inputLine[i + 8] &&
                                    inputLine[i + 6] != inputLine[i + 9] &&
                                    inputLine[i + 6] != inputLine[i + 10] &&
                                    inputLine[i + 6] != inputLine[i + 11] &&
                                    inputLine[i + 6] != inputLine[i + 12] &&
                                    inputLine[i + 6] != inputLine[i + 13])
                                {
                                    if (
                                        inputLine[i + 7] != inputLine[i + 8] &&
                                        inputLine[i + 7] != inputLine[i + 9] &&
                                        inputLine[i + 7] != inputLine[i + 10] &&
                                        inputLine[i + 7] != inputLine[i + 11] &&
                                        inputLine[i + 7] != inputLine[i + 12] &&
                                        inputLine[i + 7] != inputLine[i + 13])
                                    {
                                        if (
                                            inputLine[i + 8] != inputLine[i + 9] &&
                                            inputLine[i + 8] != inputLine[i + 10] &&
                                            inputLine[i + 8] != inputLine[i + 11] &&
                                            inputLine[i + 8] != inputLine[i + 12] &&
                                            inputLine[i + 8] != inputLine[i + 13])
                                        {
                                            if (
                                                inputLine[i + 9] != inputLine[i + 10] &&
                                                inputLine[i + 9] != inputLine[i + 11] &&
                                                inputLine[i + 9] != inputLine[i + 12] &&
                                                inputLine[i + 9] != inputLine[i + 13])
                                            {
                                                if (
                                                    inputLine[i + 10] != inputLine[i + 11] &&
                                                    inputLine[i + 10] != inputLine[i + 12] &&
                                                    inputLine[i + 10] != inputLine[i + 13])
                                                {
                                                    if (
                                                        inputLine[i + 11] != inputLine[i + 12] &&
                                                        inputLine[i + 11] != inputLine[i + 13])
                                                    {
                                                        if (inputLine[i + 12] != inputLine[i + 13])
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
        else
        {
            i++;
        }
    }

    std::cout << "Marker found after: " << i + 14 << " characters" << std::endl;

    return 0;
}