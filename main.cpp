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


int main()
{

    bool more = true; //more input words bool y more n stop
    while(more)
    {
        
        
        cout << "More words? (y/n) ";
        string answer;
        getline(cin, answer);
        if (answer != "y")
            more = false;
    }

    return 0;
}
