/**
 * @brief Model class encodes the rules of the the Robber langauge for single characters, either consonants or vowels.
 * @author Gabriella Bekhrad
*/

#ifndef MODEL_H // Header Guard
#define MODEL_H

#include <iostream>
#include <string>
using namespace std;

class Model{
    public: 
        /** 
         * @brief default Model constructor 
         * */
        Model();

        /** 
         * @brief default Model destructor 
         * */
        ~Model(); 

        /** 
         * @brief translates single consonant to its encoding in Rövarspråket. 
         * (Consonant is now consononant + o + consonant.) 
         * Capitalization is preserved.
         * @param cons the consonant passed in to be encoded
         * @return string representation of newly encoded consonant. 
         */
        string translateSingleConsosant(char cons);

        /**
         * @brief translates single vowel to its encoding in Rövarspråket. 
         * (Vowels do not change.)
         * Capitalization is preserved.
         * @param vowel the vowel passed in to be encoded
         * @return string representation of newly encoded character
        */
       string translateSingleVowel(char vowel);
};

#endif