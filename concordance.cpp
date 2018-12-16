#include <iostream>
#include <fstream>
#include <sstream>

#include <string>
#include <vector>

#include "concordance.h"

string Concordance::choose_word()//receive input after prompt for next word to add to vector
{
    string choose;
    cin << choose;
    return choose;
}

void Concordance::print() const//print word type, and count of each word
{

}
