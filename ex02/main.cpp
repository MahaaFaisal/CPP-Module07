#include <iostream>
#include <stdlib.h>
#include "Array.hpp"
#include "Utils.hpp"
#include <string>

#define MAX_VAL 6
int main(int, char**)
{
    Utils::printMsg("--- int array ---\n", "green");
    Array<int> newInts(MAX_VAL);
    for (int i = 0; i < MAX_VAL; i++)
        newInts[i] = i * 2;
    for (int i = 0; i < MAX_VAL; i++)
        std::cout << newInts[i] << ' ';
    std::cout << "\n\n";

    Utils::printMsg("--- float array ---\n", "green");
    Array<float> newFloats(MAX_VAL);
    for (int i = 0; i < MAX_VAL; i++)
        newFloats[i] = i / 2.0;
    for (int i = 0; i < MAX_VAL; i++)
        std::cout << newFloats[i] << ' ';
    std::cout << "\n\n";

    Utils::printMsg("--- string array ---\n", "green");
    Array<std::string> newStrings(MAX_VAL);
    for (int i = 0; i < MAX_VAL; i++)
        newStrings[i] = "12345678" + i;
    for (int i = 0; i < MAX_VAL; i++)
        std::cout << newStrings[i] << ' ';
    std::cout << "\n\n";
}
