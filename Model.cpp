#include <iostream>
#include <cctype>
#include <string>
#include "Model.h"
#include "Translator.h"



Model::Model() {}


std::string Model::translateSingleConsonant(char c) {
    if (std::isalpha(c)) {
        switch (c) {
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
                return std::string(1, c);
            default:
                if (std::isupper(c)) {
                    return std::string(1, c) + "O" + c;
                } else {
                    return std::string(1, c) + "o" + c;
                }
        }
    } else {
        return std::string(1, c);
    }
}


std::string Model::translateSingleVowel(char vowel) {
    if (std::isalpha(vowel)) {
        switch (vowel) {
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
                return std::string(1, vowel);
            default:
                return "try again";
        }
    } else {
        return std::string(1, vowel);
    }
}


Model::~Model() {}

