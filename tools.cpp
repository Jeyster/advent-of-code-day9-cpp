#include "tools.h"
#include <iostream>
#include <fstream>

using namespace std;

vector<char> importInput(string const &fileName)
{
    ifstream myStream(fileName.c_str());
    if(!myStream)
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
        //exit(0);
    }

    char a;
    vector<char> input;
    while(myStream.get(a))
    {
        input.push_back(a);
    }

    return input;
}

void displayInput(vector<char> const &input)
{
    cout << "Input : " << endl;
    for(int i(0); i != input.size(); ++i)
    {
        cout << input[i];
    }
    cout << endl << endl << "Taille input : " << input.size() << endl;
}


int scoreCalculationPart1(vector<char> const &input)
{
    int score(0);
    int groupValue(1);
    bool isGarbage(false);

    for(int i(0); i != input.size(); ++i)
    {
        while(input[i] == '!')
        {
            i += 2;
        }

        if(input[i] == '<')
        {
            isGarbage = true;
        }

        if(input[i] == '>')
        {
            isGarbage = false;
        }

        if( !isGarbage && (input[i] == '{'))
        {
            score += groupValue;
            ++groupValue;
        }

        if( !isGarbage && (input[i] == '}'))
        {
            --groupValue;
        }
    }

    return score;
}

int charactersInGarbageCalculationPart2(vector<char> const &input)
{
    int charactersInGarbageNumber(0);
    bool isGarbage(false);

    for(int i(0); i != input.size(); ++i)
    {
        while(input[i] == '!')
        {
            i += 2;
        }

        if(!isGarbage && (input[i] == '<'))
        {
            isGarbage = true;
        }
        else if(isGarbage && (input[i] == '>'))
        {
            isGarbage = false;
        }
        else if(isGarbage)
        {
            ++charactersInGarbageNumber;
        }
    }

    return charactersInGarbageNumber;
}
