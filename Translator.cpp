#include <iostream>
#include <cctype>
#include <string>
#include "Translator.h"
#include "Model.h"


Translator::Translator() {} // default constructor

std::string Translator::translateEnglishWord(const std::string& word) { 
    Model model;
    std::string newString;
    for (std::string::size_type i = 0; i < word.length(); ++i) {
        
        char c = word[i];
        char lower_c = tolower(c);
        if (std::isalpha(c)) {
            switch(c) {
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    newString += model.translateSingleVowel(c);
                    break; 
                default:
                    newString += model.translateSingleConsonant(c);
                    break; 
            }
        } else {
            newString += c;
        }
        
    }
    return newString; 
}


std::string Translator::translateEnglishSentence(const std::string& word) {
    Model model;
    std::string newString;

    for (std::string::size_type i = 0; i < word.length(); ++i) {
        char c = word[i];
        char lower_c = tolower(c);
        if (std::isalpha(c)) {
            switch(c) {
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    newString += model.translateSingleVowel(c);
                    break; 
                default:
                    newString += model.translateSingleConsonant(c);
                    break; 
            }
        } else {
            newString += c;
        }
        
    }
    return newString; 
}




Translator::~Translator() {}


