#ifndef CONCORDANCE_H
#define CONCORDANCE_H

#include <vector>
#include <string>

class Concordance
{
    std::vector<list> m_list;

public:

    std::vector<double> word_list();//hold words and times used

    string choose_word()//choose next word to add to concordance vector

    bool more_words(Concordance w) const; //true more input words to compute false if not

    void print() const;

private:
    string word;

};

#endif
