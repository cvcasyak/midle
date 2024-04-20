#include <iostream>
using namespace std;
int itc_rev_oct_num(long long number){
long long num = 0;
long long v = 0;
long long z = 0;
int r = 1;
while(number != 0){
    while (v+z > 0){
        r = r*8;
        v--;
    }
    num = num + ((number%10)*r);
    number = number/10;
    z++;
}
return num;
}
int itc_corevet_num(long long number, int ss){
long long z = 0;
long long ch = 10;
long long num = 0;
while(number > 0){
    z = number % ss;
    num = ch * z + num;
    ch = ch * 10;
}
return num/10;
}
int itc_rev_covert_num(long long number, int ss){
long long num = 0;
long long v = 0;
long long z = 0;
int r = 1;
while(number != 0){
    while (v+z > 0){
        r = r * ss;
        v--;
    }
    num = num + ((number % 10)*r);
    number = number / 10;
    z++;
}
return num:
}
