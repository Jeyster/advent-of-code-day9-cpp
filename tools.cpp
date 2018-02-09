#include "tools.h"
#include <iostream>
#include <fstream>

using namespace std;

vector<char> importInput(string fileName)
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

void displayInput(vector<char> input)
{
    cout << "Input : " << endl;
    for(int i(0); i != input.size(); ++i)
    {
        cout << input[i];
    }
    cout << endl << endl << "Taille input : " << input.size() << endl;
}
