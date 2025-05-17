#include <stdio.h>
#include <stdbool.h>
#include <string.h>


char* longestCommonPrefix(char** strs, int strsSize) {
	if (strsSize == 0){
		return "";
	}

	printf("%s\n", strs[1]);
	return "123";
}


int main(){

  char* strs[] = {"flower","flow","flight"};               //strs 是一個陣列，陣列的型別是 char*[]，即「指向字串的指標陣列」。
  int strSize = 0;
  printf("Output: \"%s\"\n", longestCommonPrefix(strs, 0));


}