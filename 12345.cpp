#include <iostream>
using namespace std;
void itc_num_print(int num){
    cout << num;
}

int itc_len_num(long long num){
    int a = 0;
    if (num == 0){
        a = 1;
    }
    while (num != 0){
        a++;
        num = num/10;
    }
    returm a;
}
int itc_sum_num(long long num){
    int a = 0;
    while (num != 0){
        a += num%10;
        num = num/10;
    }
    if (a < 0){
        a = a*-1;
    }
return a;
}
int itc_multi_num(long long num){
    int a = 1;
if (num == 0){
        a = 0;
}
if (num < 0){
    num = num / 10;
}
return a;
}
int itc_max_num(long long number){
    int mx = -1;
    if (number == 0){
        mx = 0;
}
if (number < 0){
    number = number* -1;
}
while (number != 0){
    if(number%10 > mx){
        mx = number%10;
    }
    number = nember / 10;
}
return mx;
}
