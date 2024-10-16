#include <iostream>
#include "Model.h"
#include "FileProcessor.h"
#include "Translator.h"

int main () {     
    Model model;

    FileProcessor process = FileProcessor();
    std::string filename = "example.txt";
    process.processFile(filename);
   


    return 0;
}
