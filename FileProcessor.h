#ifndef FILEPROCESSOR_H // Header Guard
#define FILEPROCESSOR_H

#include "Translator.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/**
 * @brief FileProcessor class that takes text files (.txt con) containing English text and produces a HTML file 
 * containing the equivalent Rövarspråket translation that can be viewed in a standard web browser. 
 * @author Gabriella Bekhrad
*/
class FileProcessor {
    private:
        Translator *myTranslator = new Translator(); // declaring var to be used in .cpp file

    public:
        /** @brief Default FileProcessor Constructor */
        FileProcessor();

        /** @brief Default FileProcessor Destructor */
        ~FileProcessor();

        /**
         * @brief Uses input file to produce an HTML file with the orignal English text in bold followed by an empty line,
         * followed by the Rövarspråket translation in italics.
         * @param string representation of the input file (English) and a string representing the output file (where the Rövarspråket translation will be written). 
         * @return This method does not return any value. 
        */
       void processFile(string fInput, string fOutput);
};

#endif