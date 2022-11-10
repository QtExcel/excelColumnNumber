# excelColumnNumber

- Convert a column string in Excel to a number. :kr: 엑셀 컬럼 문자열을 숫자료 변환합니다.

- Using pure C++ and STL :kr: 씨플러스와 에스티엘만을 사용

## Usgae 

```cpp
unsigned int debug1 = excelNumber::excelColumnStingToNumber("AB");
std::string debug2 = excelNumber::convertFromNumberToExcelColumn( debug1 );
assert( debug2 == "AB" );
```
