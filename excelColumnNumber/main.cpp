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

    std::cout << "   0 : " << QXlsx::columnNumberToString( 0 ) << std::endl ;
    std::cout << "   1 : " << QXlsx::columnNumberToString( 1 ) << std::endl ;
    std::cout << "   2 : " << QXlsx::columnNumberToString( 2 ) << std::endl ;
    std::cout << " 100 : " << QXlsx::columnNumberToString( 100 ) << std::endl ;
    std::cout << " UINT_MAX : " << QXlsx::columnNumberToString( UINT_MAX ) << std::endl ;
	
    std::cout << " [2] ------------ " << std::endl ;

    std::cout << " a : " << QXlsx::alphabetToNumber('a') << std::endl ;
    std::cout << " z : " << QXlsx::alphabetToNumber('z') << std::endl ;
    std::cout << " A : " << QXlsx::alphabetToNumber('A') << std::endl ;
    std::cout << " Z : " << QXlsx::alphabetToNumber('Z') << std::endl ;
    std::cout << " 5 : " << QXlsx::alphabetToNumber('5') << std::endl ;

    std::cout << " [3] ------------ " << std::endl ;

    std::string columnString = "AB";
    unsigned int debug1 = QXlsx::columnStringToNumber( columnString );
    std::string debug2 = QXlsx::columnNumberToString( debug1 );
    std::cout << debug1 << "   " << debug2 << std::endl;
    assert( debug2 == columnString );
	
    return 0;
}
