# excelColumnNumber

- Convert a column string in Excel to a number. 
  - :kr: 엑셀 컬럼 문자열을 숫자로 변환합니다.

- Using pure C++ and STL 
  - :kr: 씨플러스와 에스티엘만을 사용
  
## Example

### :one: number to string

```cpp
    std::cout << " [1] ------------ " << std::endl ;

    std::cout << "   0 : " << QXlsx::columnNumberToString( 0 ) << std::endl ;
    std::cout << "   1 : " << QXlsx::columnNumberToString( 1 ) << std::endl ;
    std::cout << "   2 : " << QXlsx::columnNumberToString( 2 ) << std::endl ;
    std::cout << " 100 : " << QXlsx::columnNumberToString( 100 ) << std::endl ;
    std::cout << " UINT_MAX : " << QXlsx::columnNumberToString( UINT_MAX ) << std::endl ;
```

- Output : 

```
 [1] ------------ 
   0 : 
   1 : A
   2 : B
 100 : CV
 UINT_MAX : MWLQKWU
```

### :two: alphabet to number

```cpp
    std::cout << " [2] ------------ " << std::endl ;

    std::cout << " a : " << QXlsx::alphabetToNumber('a') << std::endl ;
    std::cout << " z : " << QXlsx::alphabetToNumber('z') << std::endl ;
    std::cout << " A : " << QXlsx::alphabetToNumber('A') << std::endl ;
    std::cout << " Z : " << QXlsx::alphabetToNumber('Z') << std::endl ;
    std::cout << " 5 : " << QXlsx::alphabetToNumber('5') << std::endl ;
```

- Output : 

```
 [2] ------------ 
 a : 1
 z : 26
 A : 1
 Z : 26
 5 : 0
``` 

### :three: string to number

```cpp
    std::cout << " [3] ------------ " << std::endl ;

    std::string columnString = "AB";
    unsigned int debug1 = QXlsx::columnStringToNumber( columnString );
    std::string debug2 = QXlsx::columnNumberToString( debug1 );
    std::cout << debug1 << "   " << debug2 << std::endl;
    assert( debug2 == columnString );
```

- Output : 

```
 [3] ------------ 
28   AB
```
