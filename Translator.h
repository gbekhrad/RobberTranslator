#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include "Model.h"
#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Translator class translates English sentences to Rövarspråket sentences using the Model class. 
 * @author Gabriella Bekhrad
*/
class Translator{
    private: 
        // defining a pointer to the model class on the heap, in order to reference the same model
        Model* myModel; 

    public:
        /** 
         * @brief default constructor 
         * */
        Translator();

        /** 
         * @brief default destructor 
         * */
        ~Translator(); //default destructor

        /** 
         * @brief translates string to its encoding in Rövarspråket. 
         * @param string the English word passed in to be encoded
         * @return string representation of newly encoded Rövarspråket translation
         */
        string translateEnglishWord(string word);

        /**
         * @brief translates sentence to its encoding in Rövarspråket, accounting for punctuation.
         * @param string the English sentence passed in to be encoded
         * @return string representation of newly encoded Rövarspråket translation
        */
       string translateEnglishSentence(string sentence);  
};

#endif