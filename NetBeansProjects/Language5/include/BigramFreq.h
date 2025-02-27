/*
 * Metodología de la Programación: Language5
 * Curso 2022/2023
 */

/* 
 * @file   BigramFreq.h
 * @author Silvia Acid Carrillo <acid@decsai.ugr.es>
 * @author Andrés Cano Utrera <acu@decsai.ugr.es>
 * @author Luis Castillo Vidal <L.Castillo@decsai.ugr.es>
 *
 * Created on 12 February 2023, 10:40
 */

#ifndef BIGRAM_FREQ_H
#define BIGRAM_FREQ_H

#include <string>

#include "Bigram.h"

/**
 * @class BigramFreq
 * @brief A pair of a Bigram object and a frequency (an int), that gives the 
 * frequency of a Bigram (times it appears) in a text.
 */
class BigramFreq {
public:
    /**
     * @brief Base constructor. It builds a BigramFreq object with "__" as 
     * the text of the bigram and 0 as the frequency
     */
    BigramFreq();

    /**
     * @brief Gets a const reference to the Bigram of this BigramFreq object
     * Query method
     * @return A const reference to the Bigram of this BigramFreq object
     */
    Bigram getBigram();

    /**
     * @brief Gets the frequency of this BigramFreq object
     * Query method
     * @return The frequency of this BigramFreq object
     */
    int getFrequency() const;

    /**
     * @brief Sets the Bigram of this BigramFreq object
     * Modifier method
     * @param bigram The new Bigram value for this object 
     */
    void setBigram(Bigram bigram);

    /**
     * @brief Sets the frequency of this BigramFreq object.  Modifier method.
     * @throw std::out_of_range if @p frequency is negative
     * @param frequency the new frequency value for this BigramFreq object.
     * Input parameter
     */
    void setFrequency(int frequency);
    
    /**
     * @brief Obtains a string with the string and frecuency of the bigram
     * in this object (separated by a whitespace). Query method
     * @return A string with the string and frecuency of the bigram
     * in this object
     */
    std::string toString();

private:
    Bigram _bigram; ///< the Bigram object
    int _frequency; ///< the frequency
};

/**
 * @brief Overloading of the stream insertion operator for BigramFreq class
 * @param os The output stream to be used. Output parameter
 * @param bigramFreq the BigramFreq object. Input parameter
 * @return @p os A reference to the output stream
 */
std::ostream operator<<(std::ostream os, BigramFreq bigramFreq);

/**
 * @brief Overloading of the stream extraction operator for BigramFreq class
 * @param is The input stream to be used. Input parameter
 * @param bigramFreq the BigramFreq object. Output parameter
 * @return @p is A reference to the input stream
 */
std::istream operator>>(std::istream is, BigramFreq bigramFreq);

/**
 * @brief Overloading of the operator == for Bigram class
 * @param bigramFreq1 a BigramFreq object. Input parameter
 * @param bigramFreq2 a BigramFreq object. Input parameter
 * @return true if the two bigrams contains the same pair Bigram-Frequency;
 * false otherwise
 */
bool operator==(const BigramFreq& bigramFreq1, const BigramFreq& bigramFreq2);

/**
 * @brief Overloading of the relational operator > for BigramFreq class
 * @param bigramFreq1 The first object to be compared. Input parameter
 * @param bigramFreq2 The second object to be compared. Input parameter
 * @return true if the frequency of @p bigramFreq1 is lower than that of
 * @p bigramFreq2 or if both frequencies are equals and the text of the
 * @p bigramFreq1 is minor than the text of @p bigramFreq2; false otherwise
 */
bool operator>(const BigramFreq &bigramFreq1, const BigramFreq &bigramFreq2);

/**
 * @brief Overloading of the operator != for BigramFreq class
 * @param bigramFreq1 a Bigram object. Input parameter
 * @param bigramFreq2 a Bigram object. Input parameter
 * @return true if the two bigramFreq1 are not equals (see operator==); 
 * false otherwise
 */
bool operator!=(const BigramFreq& bigramFreq1, const BigramFreq& bigramFreq2);

/**
 * @brief Overloading of the operator >= for BigramFreq class
 * @param bigramFreq1 a Bigram object. Input parameter
 * @param bigramFreq2 a Bigram object. Input parameter
 * @return true if the bigramFreq1 >= bigramFreq2
 */
bool operator>=(const BigramFreq& bigramFreq1, const BigramFreq& bigramFreq2);

/**
 * @brief Overloading of the operator < for BigramFreq class
 * @param bigramFreq1 a Bigram object. Input parameter
 * @param bigramFreq2 a Bigram object. Input parameter
 * @return true if the bigramFreq1 < bigramFreq2; false otherwise
 */
bool operator<(const BigramFreq& bigramFreq1, const BigramFreq& bigramFreq2);

/**
 * @brief Overloading of the operator <= for BigramFreq class
 * @param bigramFreq1 a Bigram object. Input parameter
 * @param bigramFreq2 a Bigram object. Input parameter
 * @return true if the bigramFreq1 <= bigramFreq2; false otherwise
 */
bool operator<=(const BigramFreq& bigramFreq1, const BigramFreq& bigramFreq2);

#endif /* BIGRAM_FREQ_H */

