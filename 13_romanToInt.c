/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int romanToInt(char* s);
int main()
{
    //printf("Hello World");
    char in_string[]="MCMXCIV";
    romanToInt(in_string);
    return 0;
}



int romanToInt(char* s) {

char in_char;
int len     = strlen(s);
int t       = len-1;
int fin_num = 0;
int num     = 0;
while(t>-1){
	in_char = s[t];
	printf("%c",in_char);
  switch(in_char) {
    case 'I':
       num =  1;                  break;
    case 'V':
       num =  5;                  break;
    case 'X':
       num =  10;                 break;
    case 'L':
       num =  50;                 break;
    case 'C':
       num =  100;                break;
    case 'D':
       num =  500;                break;
    case 'M':
       num =  1000;               break;
    default:                      break;
  }

  if ( (s[t+1]=='V' || s[t+1]=='X') && in_char=='I'){
      fin_num = fin_num - num;
  }else if ( (s[t+1]=='L' || s[t+1]=='C') && in_char=='X' ){
      fin_num = fin_num - num;
  }else if ( (s[t+1]=='D' || s[t+1]=='M') && in_char=='C' ){
      fin_num = fin_num - num;
  }else{
      fin_num = fin_num + num;
  }
  t = t-1;
}
printf("\n\n%d",fin_num);
return fin_num

}
