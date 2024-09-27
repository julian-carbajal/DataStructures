#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H
#include <string>
#include <fstream>
#include "Model.h"
#include "Translator.h"

class FileProcessor {
    public:
    FileProcessor();
    ~FileProcessor();
    void processFile(std::string filename);

};



#endif