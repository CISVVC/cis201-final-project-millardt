#ifndef CONCORDANCE_H
#define CONCORDANCE_H

#include <vector>
#include <string>

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

#endif
