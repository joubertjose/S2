#include<stdio.h>
#include<string.h>
int main(){
	char str1[50],str2[50];
	int result;
	printf("Enter the first string:");
	scanf("%s",str1);
	printf("Enter the second string:");
	scanf("%s",str2);
	result=strcmp(str1,str2);
	if (result==0){
		printf("Both string1 and string2 are equal");
		}else{
				printf("Both string1 and string2 are not equal\n");
			}
				printf("/n");
			return 0;
			}
	
