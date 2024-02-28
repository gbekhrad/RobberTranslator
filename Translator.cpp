#include "Translator.h"

Translator::Translator(){ // constructor
    myModel = new Model;
}
Translator::~Translator(){ // destructor
    delete myModel;
}

string Translator::translateEnglishWord(string word){
    string newWord; // this keeps track of the word to be returned in robber language. 
    for (int i = 0; i < word.length(); ++i){ // for every letter in the word,
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){ // if the letter is a vowel
            newWord += myModel->translateSingleVowel(word[i]); // append to the new word the translation of a single vowel
        } else { // if the letter is a consonant
            newWord += myModel->translateSingleConsosant(word[i]); // append to the new word the translation of a single consonant
        }
    }
    return newWord; // return the word that has been created
}

string Translator::translateEnglishSentence(string sentence){
    string newSentence; // this keeps track of the new word to be returned in robber language. 
    for (int i = 0; i < sentence.length(); ++i){ // for each character in the sentence
        if (ispunct(sentence[i]) || sentence[i] == ' '){ // if the index is a space or punctuation
            newSentence += sentence[i]; // preserve the punctuation. 
        } else if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u'){ // if the letter is a vowel
            newSentence += myModel->translateSingleVowel(sentence[i]); // append to the new word the translation of a single vowel
        } else { // if the letter is a consonant
            newSentence += myModel->translateSingleConsosant(sentence[i]); // append to the new word the translation of a single consonant
        }
    }
    return newSentence; // return the new sentence that has been created
}