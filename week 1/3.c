//to count vowel, consonant, digit, whitespace
#include<stdio.h>
#include<ctype.h>
main(){
	char str[201];
	int i=0,vowels=0,consonants=0,digits=0,spaces=0;
	printf("ENTER STRING:\n");
	gets(str);
	while(str[i]!='\0'){
		if(isalpha(str[i])){
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
				vowels++;
			}
			else{
				consonants++;
			}
		}
		else if(isdigit(str[i])){
			digits++;
		}
		else if(isspace(str[i])){
			spaces++;
		}
		i++;
	}
	printf("VOWELS=%d\nCONSONANTS=%d\nDIGITS=%d\nWHITESPACES=%d\n",vowels,consonants,digits,spaces);
}
