// main.cpp

#include <iostream>
#include <string>
#include <limits>
#include <iterator>
#include <algorithm>

#include <cstdio>
#include <cstring>
#include <cmath>
#include <cassert>

#include "excelColumnNumber.h"

int main(int argc, char *argv[])
{
    std::cout << " [1] ------------ " << std::endl ;

    std::cout << "   0 : " << excelColumnNumber::convertFromNumberToExcelColumn( 0 ) << std::endl ;
    std::cout << "   1 : " << excelColumnNumber::convertFromNumberToExcelColumn( 1 ) << std::endl ;
    std::cout << "   2 : " << excelColumnNumber::convertFromNumberToExcelColumn( 2 ) << std::endl ;
    std::cout << " 100 : " << excelColumnNumber::convertFromNumberToExcelColumn( 100 ) << std::endl ;
    std::cout << " UINT_MAX : " << excelColumnNumber::convertFromNumberToExcelColumn( UINT_MAX ) << std::endl ;
	
    std::cout << " [2] ------------ " << std::endl ;

    std::cout << " a : " << excelColumnNumber::alphabetToNumber('a') << std::endl ;
    std::cout << " z : " << excelColumnNumber::alphabetToNumber('z') << std::endl ;
    std::cout << " A : " << excelColumnNumber::alphabetToNumber('A') << std::endl ;
    std::cout << " Z : " << excelColumnNumber::alphabetToNumber('Z') << std::endl ;
    std::cout << " 5 : " << excelColumnNumber::alphabetToNumber('5') << std::endl ;

    std::cout << " [3] ------------ " << std::endl ;

    unsigned int debug1 = excelColumnNumber::excelColumnStingToNumber("AB");
    std::string debug2 = excelColumnNumber::convertFromNumberToExcelColumn( debug1 );
    std::cout << debug1 << "   " << debug2 << std::endl;
    assert( debug2 == "AB" );
	
    return 0;
}
