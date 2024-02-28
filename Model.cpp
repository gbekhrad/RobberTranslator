#include "Model.h"

/**
 * @brief implements each method defined in Model.h
 * @author Gabriella Bekhrad
*/

// initializing default constructor and destructor. 
Model::Model(){}
Model::~Model(){}

string Model::translateSingleConsosant(char cons){
    string s; // initalizing a string to keep track of the string to be returned.
    s.append(1, cons); // append
    // return consonant + o + consonant
    return s + "o" + s;
}

string Model::translateSingleVowel(char vowel){
    string s; // initalizing a string to keep track of the string to be returned.
    s.append(1, vowel);
    // append just the vowel to string
    return s; // return just the vowel
}