/*
 * Metodología de la Programación: Language2
 * Curso 2022/2023
 */

/* 
 * File:   main.cpp
 * @author Silvia Acid Carrillo <acid@decsai.ugr.es>
 * @author Andrés Cano Utrera <acu@decsai.ugr.es>
 * @author Luis Castillo Vidal <L.Castillo@decsai.ugr.es>
 *
 * Created on 7 de febrero de 2023, 14:02
 */


#include <iostream>

#include "Language.h"

using namespace std;

/**
 * This program reads an undefined number of Language objects from the files
 * passed as parameters to main(). It obtains as result the union of all the 
 * input Language objects. The result is then sorted by decreasing order of 
 * frequency and alphabetical order of bigrams when there is any tie in 
 * frequencies. Finally the result Language is saved in an output file. The 
 * program must have at least an input file and an output file. 
 * The output Language will have as language identifier, the one of the first 
 * file (<file1.bgr>). If a input file <file*.bgr> has a language identifier
 * different from the one of the first file (<file1.bgr>), then it will not
 * be included in the union.
 * Running example:
 * > language2 <file1.bgr> [<file2.bgr> ... <filen.bgr>] <outputFile.bgr> 
 */
int main(int argc, char* argv[]) {
    Language inputLanguage, inputLanguageAux;

    if (argc < 3) {
        cerr << "Error, run with the following parameters:" << endl;
        cerr << "language2 <file1.bgr> [<file2.bgr> ... <filen.bgr>] <outputFile.bgr> " << endl;
        return 0;
    }


    inputLanguage.load(argv[1]);
    for (int i = 2; i < argc - 1; i++) {
        inputLanguageAux.load(argv[i]);
        if (inputLanguageAux.getLanguageId() == inputLanguage.getLanguageId()) {
            inputLanguage.join(inputLanguageAux);
        }
    }
    inputLanguage.sort();
    inputLanguage.save(argv[argc - 1]);
}

