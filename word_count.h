#ifndef WORD_COUNT_H
#define WORD_COUNT_H

#include <vector>
#include <string>
#include "concordance.h"

class Word_count
{
    int m_count;
    string m_word;

public:
    Word_count(); //default constructor

    bool more_words(Concordance w) const; //true more input words to compute false if not
};

#endif
