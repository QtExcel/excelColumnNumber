// excelColumnNumber.h 

#include <iostream>
#include <string>
#include <limits>
#include <iterator>
#include <algorithm>

#include <cstdio>
#include <cstring>
#include <cmath>
#include <cassert>

namespace QXlsx
{
    ///
    /// \brief convert from number to excel column string
    /// \param n
    /// \return
    ///
    std::string columnNumberToString(unsigned int n);

    ///
    /// \brief convert from excel column string to number
    /// \param col
    /// \return
    ///
    unsigned int columnStringToNumber(std::string col);

    ///
    /// \brief convert from alphabet to number
    ///        a .. z : 97 ... 122
    ///        A .. Z : 65 ...  90
    /// \param alphabet
    /// \return
    ///
    unsigned int alphabetToNumber(char alphabet);
}

