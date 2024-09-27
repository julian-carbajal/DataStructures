#include <iostream>
#include <fstream>
#include <string>
#include "FileProcessor.h"
#include "Translator.h"

using namespace std;



FileProcessor::FileProcessor(){ // default constructor
}

void FileProcessor::processFile(std::string filename) {  // inputs txt file and outputs new translation html file
    std::string line;
    std::ifstream myfile;
    myfile.open(filename);

    std::ofstream outfile ("Translation.html");

    outfile << "<!DOCTYPE html>" << std::endl;
    outfile <<  "<html>" << std::endl;
    outfile <<  "<head>" << std::endl;
    outfile << "<title>English to Robber Translation</title>"<< std::endl;
    outfile << "</head>" << std::endl;
    outfile << "<body>" << std::endl;
    outfile << "<p><b></b><br></p>" << std::endl;

    std::string to_write;

    if(!myfile.is_open()) {
        perror("Error open");
        exit(EXIT_FAILURE);
    }
    while(getline(myfile, line)) {
       
        Translator t;
        string res = t.translateEnglishSentence(line);
        std::cout << res << std::endl;
        outfile << "<p><b>" + line + "</b><br></p>" << std::endl;
        to_write += "<p><i>" + res + "</i><br></p> \n";
    }
    outfile << "<p><b></b><br></p>" << std::endl;
    outfile << to_write << std::endl;

    outfile << "</body>" << std::endl;
    outfile << "</html>" << std::endl;
}

FileProcessor::~FileProcessor() {} // deconstructor
