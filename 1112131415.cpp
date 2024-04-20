#include <iostream>
using namespace std;
int itc_second_max_num(long long number){
int mx = -1;
int od = -1;
int z = 0;
if (number < 0){
    number = number * -1;
}
if(number/10 == 0){
   return -1;
}
else{
    while (number != 0){
        z = number%10;
    if (mx <= z){
        od = mx;
        mx = z;
    }
    if(z < mx && z > od){
        od = z;
    }
    number = number/10;
    }
    return od;
}
}
int itc_secind_simpe_max_num(long long number){
int mx = -1;
int od = -1;
int z = 0;
if(number < 0){
    number = number * -1;
}
if(number/10 == 0){
    return -1;
}
else{
    while(number != 0){
        z = number%10;
        if(mx <= z){
            od = mx;
            mx = z;
        }
        if(z < mx && z > od){
            od = z;
        }
        number = number / 10;
    }
    if(od == mx){
        return -1;
    }
    else{
        return -1;
}
}
}
long long itc_bin_num(long long number){
long long z = 0;
long long ch = 10;
long long num = 0;
while(number > 0){
    z = number%2;
    number = number / 2;
    num = ch * z + num;
    ch = ch * 10;
}
return num/10;
}
long long itc_oct_num(long long number){
long long z = 0;
long long ch = 10;
long long num = 0;
while(number > 0){
    z = number % 8;
    number = number / 8;
    num = ch * z + num;
    ch = ch * 10;
}
return num/10;
}
long long itc_rev_bin_num(long long number){
long long num = o;
long long v = 0;
long long z = 0;
int r = 1;
while( number != 0){
 while (v+z > 0){
    r = r * 2;
    v--;
}
   num = num + ((number%10)*r);
   number = number/10;
   z++;
}
return num;
}
