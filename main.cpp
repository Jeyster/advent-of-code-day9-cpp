#include <iostream>
#include "tools.h"

using namespace std;

int main()
{
    vector<char> input(importInput("input.txt"));
    displayInput(input);

    int scorePart1 = scoreCalculationPart1(input);
    cout << endl << "Resultat partie 1 : " << scorePart1 << endl;

    int charactersInGarbageNumber(charactersInGarbageCalculationPart2(input));
    cout << endl << "Resultat partie 2 : " << charactersInGarbageNumber << endl;

    return 0;
}
