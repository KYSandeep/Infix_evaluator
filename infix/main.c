/* main function, which takes a string, removes spaces and then calls the eval function*/
#include<stdio.h>
#include<string.h>
#include<stack.h>

int main(){
	char str[128], c;
	int i;
	for(i = 0; i < 128;){ 
		scanf("%c", &c);		// scans the char
		if(c == 10){			//if enter is pressed, it breaks
			str[i] = '\0';
			break;
		}
		else if(c == 32)		//if space is pressed, it skips the scanned input
			continue;
		
		else{				//otherwise it adds the input to the string
			str[i] = c;
			i++;
		}
	}
//	int len = i; 
//	printf("%d, \n%s", len, str);


}
