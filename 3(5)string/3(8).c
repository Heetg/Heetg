#include <stdio.h>
void countVowel(char cha[], int h, int v){
	int i;
	for(i=0; cha[i] != 0; i++){
		if(cha[i]=='a' || cha[i]=='e' || cha[i]=='i' || cha[i]=='o' || cha[i]=='u' ||
		cha[i]=='A' || cha[i]=='E' || cha[i]=='I' || cha[i]=='O' || cha[i]=='U'){
			h++;
		}
		else{
			v++;
		}
	}
	printf("\nTotal Vowel : %d",h);
	printf("\nTotal consonants : %d",v);
}
int main(){
	char s1[50];
	int h1=0, v1=0;
	printf("Enter a string : ");
	scanf("%s",&s1);
	countVowel(s1, h1, v1);
	return 0;
}
