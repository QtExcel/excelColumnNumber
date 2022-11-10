// excelColumnNumber.cpp

#include "excelColumnNumber.h"

namespace excelColumnNumber { // {{ begin of namespace

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

} // }} end of namespace