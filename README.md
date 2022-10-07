# excelNumber

- Convert a column string in Excel to a number.

- Using pure C++ and STL

## Usgae 

```cpp
unsigned int debug1 = excelNumber::excelColumnStingToNumber("AB");
std::string debug2 = excelNumber::convertFromNumberToExcelColumn( debug1 );
assert( debug2 == "AB" );
```
