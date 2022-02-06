/**
 * @file Histogram.h
 * @author MP
 */
#include <istream>
#include <fstream>
#include "Byte.h"
#include "Image.h"

#ifndef _HISTOGRAM_H_
#define _HISTOGRAM_H_




/**
@brief A black and white histogram
 */
class Histogram {
public:
    static const int HISTOGRAM_LEVELS=256; ///< Max number of bytes allowd for
    static const double HISTOGRAM_TOLERANCE; ///< Default tolerance


    /**
     * @brief It builds an empty
     */
    Histogram();
    /**
     * @brief It returns the number of levels in the histogram
     * @return The number of levels
     */
    int size() const;
    /**
     * @brief Sets the whole histogram to 0
     */
    void clear();
    /**
     * @brief It returns the value associated to the level indicated
     * @param level The level indicated
     * @return The value associated to the level
     */
    int getLevel(Byte level) const;
    /**
     * @brief It sets the value associated to the level
     * @param level The level
     * @param npixeles The new value
     */
    void setLevel(Byte level, int npixeles);
    /**
     * @brief It returns the maximum value stored
     * @return The max of the levels
     */
    int getMaxLevel() const;
    /**
     * @brief it returns the average value stored
     * @return The average level
     */
    int getAverageLevel() const;
    /**
     * It returns a balance level, that is, the level that leaves half of the points
     * underneath or equal to it.
     * @return The point of balance of the histogram
     */
    int getBalancedLevel() const; 
    /**
     * @brief It returns a unique hash code for every object so that they might be compared
     * @return The hash code as an string
     */
    std::string inspect() const;

private:
    int _data[HISTOGRAM_LEVELS]; ///< datos de la imagen

};
#endif
