# excelNumber

- Convert a column string in Excel to a number.

## Usgae 

```cpp
unsigned int debug1 = excelNumber::excelColumnStingToNumber("AB");
std::string debug2 = excelNumber::convertFromNumberToExcelColumn( debug1 );
assert( debug2 == "AB" );
```
