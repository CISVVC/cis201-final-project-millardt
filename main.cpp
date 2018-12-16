/*
File name: cis201-final-project-millardt
Description: make a concordance generator program that takes 
a list of all words found in a text and count number of occurences.
Author: Troy Millard
Email: naglet@student.vvc.edu
*/
#include<vector>
#include<iostream>

#include "concordance.h"
#include "word_count.h"


int main()
{
    //prompt for which file to use then open it
    string filename;
    cout << "Please enter the data file you would like to check concordance for ";
    cin >> filename;
    ifstream infile;
    infile.open(filename.c_str());

    if(infile.fail())
    {
        cout << "Error opening " << filename << "\n";
        return 1;
    }


    bool more = true; //more input words check. y for more, n to stop
    while(more)
    {
        cout << "More words? (y/n) ";
        string answer;
        getline(cin, answer);
        if (answer != "y")
            more = false;
    }
    

    infile.close(); //close chosen file
    return 0;
}
