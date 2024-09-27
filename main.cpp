#include <iostream>
#include "Model.h"
#include "FileProcessor.h"
#include "Translator.h"

int main () {     //utilized ChatGPT in the main file
    Model model;

    FileProcessor process = FileProcessor();
    std::string filename = "example.txt";
    process.processFile(filename);
   


    return 0;
}
