#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool isValid();

int main(){

  char s[] = "()()()";
  bool ans = isValid(s);
  printf("%s", ans ? "true" : "false");
}

bool isValid(char* s) {
  int n = strlen(s);
  if ((n%2)!=0) return false;

  int top = -1;
  char stack[n];
  char input;

  for(int i = 0; i < n; i++){
    input = s[i];

    if (input == '(' || input == '[' || input == '{'){
    	top = top + 1;
    	stack[top] = input;
    }else{
    	if ( top == -1 ) return false;
    	char pre = stack[top];
    	top = top - 1;
    	if ( (input == ')' && pre != '(')  ||
    		   (input == ']' && pre != '[')  ||
    		   (input == '}' && pre != '{')    ){
    		return false;
    	}
    }
  }

  if (top == -1){
  	return true;
  }else{
  	return false;
  }
}