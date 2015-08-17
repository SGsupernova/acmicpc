#include<cstdio>
#include<string.h>
int main(){
	char ch=0,longest_string[102],current_string[102];
	int longest_length=0,current_length=0;

	while(fscanf(stdin,"%c",&ch)!=EOF){

		if(('a'<= ch&&ch<='z')||('A'<= ch&&ch<='Z')||ch=='-'){
			current_string[current_length++] = ch;
		}else{
			if(current_length==5){
				current_string[current_length] = 0;
				if(!strcmp(current_string,"E-N-D"))
					break;
			}

			if(longest_length<current_length){
				longest_length = current_length;
				for(int i=0;i<current_length;i++)	longest_string[i] = current_string[i];
			}
			current_length=0;
		}
	}

	for(int i=0;i<longest_length;i++) {
		printf("%c",
				('A'<=longest_string[i]&&longest_string[i]<='Z')?(longest_string[i]+'a'-'A'):longest_string[i]
				);
	}

	return 0;
}
