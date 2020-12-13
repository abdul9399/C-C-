#include <stdio.h>

#include<string.h>

void printRLE(char *str) 
{ 
	int n = strlen(str); 
	for (int i = 0; i < n; i++) { 
		int count = 1; 
		while (i < n - 1 && str[i] == str[i + 1]) { 
			count++; 
			i++; 
		}
		printf("%c%d",str[i],count); 
	} 
} 
int main() 
{ 
	char str[100];
	printf("enter a string of repeated charecters:\n");
	scanf("%s",str);
	printRLE(str); 
	return 0; 
} 