/*
File name: cis201-final-project-millardt
Description: make a concordance generator program that takes 
a list of all words found in a text and count number of occurences.
Author: Troy Millard
Email: naglet@student.vvc.edu
*/
/*#include <string>
#include <vector>
#include <iostream>
#include <fstream>
*/
//#include "concordance.h"

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

/**
Reads numbers from a file and finds the maximum vale
@param in the input stream to read from
@return the maximum value or 0 if the file has no numbers
*/

/*



class Concordance
{
    std::vector<list> m_list;

public:
    Concordance(); //default constructor

    std::vector<double> word_list();

    void read(); //read in this concordance object

    bool more_words(Concordance w) const; //true more input words to compute false if not

    void print() const;

private:
    string word;

};

Concordance::Concordance()
{

}

void Concordance::read()
{

}

bool Concordance::more_words(Concordance w) const
{

}

void Concordance::print() const
{

}
*/
double read_data(ifstream& in)
{
    double word;

    double next;
    
    bool more_words const; //true more input words to compute false if not


return 0;
}

int main()
{
    string filename;
    cout << "Please enter the data file name: ";
    cin >> filename;

    ifstream infile;
    infile.open(filename.c_str());

    if (infile.fail())
    {
    cout << "Error opening" << filename << "\n";
    return 1;
}

double count = read_data(infile);
cout << "the word occurs: " << max << " times " << "\n";

infile.close();

/*
    bool more = true; //more input words bool y more n stop
    while(more)
    {
        
        
        cout << "More words? (y/n) ";
        string answer;
        getline(cin, answer);
        if (answer != "y")
            more = false;
    }
*/

return 0;
}
