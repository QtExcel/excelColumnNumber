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
    std::cout << excelColumnNumber::convertFromNumberToExcelColumn( 0 ) << std::endl ;
    std::cout << excelColumnNumber::convertFromNumberToExcelColumn( 1 ) << std::endl ;
    std::cout << excelColumnNumber::convertFromNumberToExcelColumn( 100 ) << std::endl ;
    std::cout << excelColumnNumber::convertFromNumberToExcelColumn( UINT_MAX ) << std::endl ;
	
	std::cout << " ------------ " << std::endl ; 

    std::cout << excelColumnNumber::alphabetToNumber('a') << std::endl ;
    std::cout << excelColumnNumber::alphabetToNumber('z') << std::endl ;
    std::cout << excelColumnNumber::alphabetToNumber('A') << std::endl ;
    std::cout << excelColumnNumber::alphabetToNumber('Z') << std::endl ;
    std::cout << excelColumnNumber::alphabetToNumber('5') << std::endl ;

    std::cout << " ------------ " << std::endl ;

    unsigned int debug1 = excelColumnNumber::excelColumnStingToNumber("AB");
    std::string debug2 = excelColumnNumber::convertFromNumberToExcelColumn( debug1 );
    std::cout << debug1 << "   " << debug2 << std::endl;
    assert( debug2 == "AB" );
	
    return 0;
}