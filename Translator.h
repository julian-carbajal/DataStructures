#ifndef TRANSLATOR_H
#define TRANSLATOR_H
#include <string>
#include "Model.h"

class Translator {
public:
    
    
    Translator();
    ~Translator();
    std::string translateEnglishWord(const std::string &word);
    std::string translateEnglishSentence(const std::string& word);
  
   };



#endif