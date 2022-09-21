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

namespace excelNumber
{
    std::string convertFromNumberToExcelColumn(unsigned int n);
    unsigned int excelColumnStingToNumber(std::string col);

    unsigned int alphabetToNumber(char alphabet);
}

int main(int argc, char *argv[])
{
    std::cout << excelNumber::convertFromNumberToExcelColumn( 0 ) << std::endl ;
    std::cout << excelNumber::convertFromNumberToExcelColumn( 1 ) << std::endl ;
    std::cout << excelNumber::convertFromNumberToExcelColumn( 100 ) << std::endl ;
    std::cout << excelNumber::convertFromNumberToExcelColumn( UINT_MAX ) << std::endl ;
	
	std::cout << " ------------ " << std::endl ; 

    std::cout << excelNumber::alphabetToNumber('a') << std::endl ;
    std::cout << excelNumber::alphabetToNumber('z') << std::endl ;
    std::cout << excelNumber::alphabetToNumber('A') << std::endl ;
    std::cout << excelNumber::alphabetToNumber('Z') << std::endl ;
    std::cout << excelNumber::alphabetToNumber('5') << std::endl ;

    std::cout << " ------------ " << std::endl ;

    unsigned int debug1 = excelNumber::excelColumnStingToNumber("AB");
    std::string debug2 = excelNumber::convertFromNumberToExcelColumn( debug1 );
    std::cout << debug1 << "   " << debug2 << std::endl;
    assert( debug2 == "AB" );
	
    return 0;
}


namespace excelNumber
{

std::string convertFromNumberToExcelColumn(unsigned int n)
{
    if (0 == n)
    {
        return std::string();
    }

    // main code from https://www.geeksforgeeks.org/find-excel-column-name-given-number/
    // Function to print Excel column name for a given column number

    std::string stdString;

    char str[1000]; // To store result (Excel column name)
    memset( str, '\0', sizeof(str) );
    unsigned int i = 0; // To store current index in str which is result

    while ( n > 0 )
    {
        // Find remainder
        int rem = n % 26;

        // If remainder is 0, then a 'Z' must be there in output
        if ( rem == 0 )
        {
            str[i++] = 'Z';
            n = (n/26) - 1;
        }
        else // If remainder is non-zero
        {
            str[i++] = (rem-1) + 'A';
            n = n / 26;
        }
    }
    str[i] = '\0';

    // Reverse the string and print result
    std::reverse( str, str + strlen(str) );

    stdString = str;
    return stdString;
}

unsigned int alphabetToNumber(char alphabet)
{
	unsigned int ret = 0;
	
	// a .. z : 97 ... 122	
	// A .. Z : 65 ...  90
	
	unsigned int castAlphabet = (unsigned int) alphabet;
	
	if ( castAlphabet >= 97 && castAlphabet <= 122 ) 
	{
		ret = castAlphabet - 97 + 1; 
	}
	
	if ( castAlphabet >= 65 && castAlphabet <= 90 ) 
	{
		ret = castAlphabet - 65 + 1; 
	}	
		
	return ret; 
}

unsigned int excelColumnStingToNumber(std::string col)
{
    unsigned int ret = 0;
    unsigned int colSize = col.size();

    for (int colIt = 0 ; colIt < colSize ; colIt++)
    {
        char chCol = col.at( colSize - (colIt + 1) );
        unsigned int numCol = alphabetToNumber( chCol );

        unsigned int calc = pow( 26, colIt ) * numCol;
        ret = ret + calc;
    }
	
	return ret; 
}

} // end of namespace
