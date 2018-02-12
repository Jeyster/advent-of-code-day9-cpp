#ifndef TOOLS_H_INCLUDED
#define TOOLS_H_INCLUDED

#include <string>
#include <vector>

std::vector<char> importInput(std::string const &fileName);
void displayInput(std::vector<char> const &input);
int scoreCalculationPart1(std::vector<char> const &input);
int charactersInGarbageCalculationPart2(std::vector<char> const &input);

#endif // TOOLS_H_INCLUDED
