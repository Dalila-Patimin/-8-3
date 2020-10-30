#include <stdio.h>
#include<string.h>
int main(void){
  char pass[11];
  char pws[11];
  int i = 0; 
  int check;
  int stack;

  while(1){
    printf("\n Enter new password :");
    gets(pass);

    while(pass[i] != '\0'){
      i++;
    }
    if(i>10){
    	printf("Enter a new password :");
    	i=0;
    	continue;
	}
	
	while(1){
		printf("\n Enter password :");
		gets(pws);
		
		if(strcmp(pass,pws) == 0 ){
			printf("Password correct!!! \n");
			check = 1 ;
			break;	
		}
		
		else{
			printf("Password not correct!!! \n");
			stack += 1;
			if(stack == 3){
				check = 0;
				break;
			}	
		}
	}
		if(check == 1){
			i = 0;
			stack = 0;
			continue;
		}
		
		else{
			printf("Close program.");
			break;
		}
  }
  return 0;
}