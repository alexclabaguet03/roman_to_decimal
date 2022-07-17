#include<iostream>
#include "roman.h"
#include<cstring>

Roman::Roman(){
    std::cout << "Enter a roman number: ";
    std::cin >> roman_string;
    bool test = 1;
    int a,count=0;
    do{
    a = strlen(roman_string); 
    for (int i=0; i<a; i++){
        if ((roman_string[i] != 'I') && (roman_string[i] != 'V') && (roman_string[i] != 'X') && (roman_string[i] != 'L') && (roman_string[i] != 'C') && (roman_string[i] != 'D') && (roman_string[i] != 'M')){
            std::cout << "Wrong input, please enter a good value: ";
            std::cin >> roman_string;
            i = a;
        }
        else count ++;
    }
    if (count == strlen(roman_string)){
        test = 0;
    }
    }while(test);
    equivalent = 0;
}


char* Roman::get_roman_string(){
    return roman_string;
}

void Roman::set_equivalent(int equi){
    equivalent = equi;
}

void Roman::get_equivalent(){
    std::cout << equivalent << std::endl;
}