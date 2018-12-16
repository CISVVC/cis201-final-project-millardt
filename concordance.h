#ifndef CONCORDANCE_H
#define CONCORDANCE_H

#include <string>

class Concordance
{
public:
        
    Concordance(); //

    void read(); //read in this concordance object

    bool more_words(Concordance w) const; //true more input words to compute false if not

    void print() const;

private:
    string word;

};

#endif
