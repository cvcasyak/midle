 int itc_min_num(long long number){
     int mn = 10;
if (number == 0){
        mn = 0;
}
if (number < 0){
    number = number* -1;
}
while (number != 0){
    if(number%10< mn){
        mn = number%10;
    }
    number = number / 10;
}
return mn;
}
int itc_rev_num(long long number){
    int a = 0;
    long long f = 0;
while (number != 0){
    a = number%10;
    f = f*10 + a;
    number = number/10;
}
return itc_len_num(f);
}
int itc_null_count(long long number){
    int ch = 0;
if(number < 0){
    number = number * -1;
}
if(number == 0){
    ch = 1;
}
while(number != 0){
    if(number%10 == 0){
        ch++;
    }
    number = number/10;
}
return ch;
}
bool itc_mirror_num(long long number){
     int a = 0;
     long long ch = 0;
     long long num = number;
while (number != 0){
    a = number%10;
    ch = ch * 10 + a;
    number + number/10;
}
if( ch == num){
    return 1;
}
  else{
    return 0;
}
}
int itc_mirror_count(long long number){
long long a = 1;
int ch = 0;
while (a <= number){
    if(itc_mirror_num(a)){
        ch++;
    }
    a++;
}
return ch;
}
