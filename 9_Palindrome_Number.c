// 9_Palindrome Number
#include <stdbool.h>
#include <stdio.h>

bool isPalindrome();

int main(){

  int x;
  x = 1210;
  isPalindrome(x);

}


bool isPalindrome(int x) {
  int org_x = x;
  long long inv_x = 0;
  while(x>0){
  	int rem = x%10;
  	inv_x = inv_x*10 + rem;
  	x = x/10;
  }

  if( org_x == inv_x){
  	return true;
  }
  return false;
}