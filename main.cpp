#include "FileProcessor.h"

int main(int argc, char **argv){
    FileProcessor *myProcessor = new FileProcessor(); // Instantiating a FileProcessor object. 
    myProcessor->processFile("EnglishFile.txt", "RobberTranslation.html"); // This will translate the input file to the output file. 
    return 0; // exit
}