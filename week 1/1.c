//to remove all vowels from a string
#include<stdio.h>
main(){
	char s[81],s2[81];
	int i, j=0;
	printf("ENTER STRING\n");
	gets(s);
	for(i=0;s[i]!='\0';i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
			continue;
		}
		else{
			s2[j]=s[i];
			j++;
		}
	}
	s2[j]='\0';
	printf("STRING AFTER REMOVING VOWEL:\n");
	puts(s2);
} 
