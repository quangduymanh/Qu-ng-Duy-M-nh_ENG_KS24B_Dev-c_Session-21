#include<stdio.h>
int main(){
	char string[100]={0};
	FILE *f;
	f = fopen("D:/Dev c rikki/bt01.txt","w");	
	if (f == NULL) {
        printf("Khong mo duoc tep.\n");
        return 1;
    }
    f = fopen("D:/Dev c rikki/bt01.txt","r");
    char first = fgetc(f);
    if (first == EOF){
    	printf("tep rong \n");
	}else{
		printf("ky tu dau tien trong tep: %c\n",first);
	}
	return 0;
}
