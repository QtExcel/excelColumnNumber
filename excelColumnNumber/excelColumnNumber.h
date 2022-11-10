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

namespace excelColumnNumber
{
    std::string convertFromNumberToExcelColumn(unsigned int n);
    unsigned int excelColumnStingToNumber(std::string col);

    unsigned int alphabetToNumber(char alphabet);
}

