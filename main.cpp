#include<iostream>
#include "roman.h"


int get_value(char b){
    if (b == 'I'){
        return 1;
    }
    if (b == 'V'){
        return 5;
    }
    if (b == 'X'){
        return 10;
    }
    if (b == 'L'){
        return 50;
    }
    if (b == 'C'){
        return 100;
    }
    if (b == 'D'){
        return 500;
    }
    if (b == 'M'){
        return 1000;
    }
    else return 0;
}


int get_decimal_equivalent(Roman a,int s){
for (int i = 0; i<=MAX_LEN; i++){
    if((get_value((a.get_roman_string())[i+1])) > (get_value((a.get_roman_string())[i]))){
        s+= (get_value((a.get_roman_string())[i+1]) - get_value((a.get_roman_string())[i]));
        i++;
    }
    else s+= get_value((a.get_roman_string())[i]);
}
return s;
}



int main(){


bool replay = true;

while(replay){ 
    Roman a = Roman();
    char yes_no[1];
    bool bad = true;
    int s = 0;
    s = get_decimal_equivalent(a,s);
    a.set_equivalent(s);
    std::cout << "Here is the equivalent decimal value: " << s << std::endl;
    std::cout << "Do you want to replay? Y/N: ";
    std::cin >> yes_no;
    while(bad){ 
        if((yes_no[0] == 'N' ||yes_no[0] == 'n') &&(yes_no[1]==0)){replay = false;break;}
        else if((yes_no[0] == 'Y' || yes_no[0] == 'y') &&(yes_no[1]==0)){break;}
        else std::cout << "Wrong input, please try again: ";std::cin >> yes_no;
    }
}
return 0;
}