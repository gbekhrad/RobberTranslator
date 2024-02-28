#include "FileProcessor.h"
#include "Translator.h"
#include "Model.h"

FileProcessor::FileProcessor(){
    myTranslator = new Translator(); // Creating a translator object to be used in the file processing.
};

FileProcessor::~FileProcessor(){
    delete myTranslator; // Deleting the translator object. 
};

void FileProcessor::processFile(string fInput, string fOutput){
    ifstream fin(fInput); // Input file stream
    if (!fin.is_open()){ // If the file is not open
        cout << "Error: Input file does not exist.\n"; // Throw string error that the file DNE.
        return;
    }

    ofstream fout(fOutput); // Output file stream must be opened 
    if(!fout.is_open()) { // Do the same error handling for output 
        cout << "Error: Output file does not exist.\n"; // Throw string error that the file DNE.;
        return;
    }

    fout << "<!DOCTYPE html> <head> <title> Rövarspråket Translation </title> </head> <body>\n"  << endl; // This will create the header of the HTML file.

    string sentence; // String holding the sentence from the input file to be translated. 
    string englishPlaceholder; // this string stores the input for translation purposes

    while(getline(fin,sentence)){ // For each line in the file,
        fout << "<p><b>" + sentence + "<p><b>" << endl; // fout a new paragraph, bold the text, then original sentence, then next line
    } // Above code block prints the original file in bold and also stores the file in a seperate string var. 

    fout << "\n"; // separate lines in HTML file

    fin.close();
    ifstream newInput(fInput); // Input file stream
    if (!newInput.is_open()){ // If the file is not open
        cout << "Error: Input file does not exist.\n"; // Throw string error that the file DNE.
        return;
    }
    while(getline(newInput,sentence)){ // For each line in the file,
        fout << "<p><i>" + myTranslator->translateEnglishSentence(sentence) + "<p><i>" << endl; // Translate the sentence and print with itals
    } 

    fin.close(); // input has been stored and printed, now we close it.

    // End the HTML file by closing body and html. 
    fout << "</body> </html>" << endl;
    
    // Finally, close the output file.
    fout.close();
}