#include<stdio.h>
int main(){
	char string[100]={0};
	FILE *f;
	f = fopen("D:/Dev c rikki/bt01.txt","w");	
	if (f == NULL) {
        printf("Khong mo duoc tep.\n");
        return 1;
    }
    printf("nhap chuoi ky tu: ");
    fgets(string,sizeof(string),stdin);
    fputs(string,f);
    fclose(f);
    printf("da ghi xong chuoi ky tu vao tep thanh cong\n");
    f = fopen("D:/Dev c rikki/bt01.txt","r");
    if(f==NULL){
    	printf("khong mo duoc tep\n");
    	return 1;
	}
    char first = fgetc(f);
    if (first == EOF){
    	printf("tep rong \n");
	}else{
		printf("ky tu dau tien trong tep: %c\n",first);
	}
	f = fopen("D:/Dev c rikki/bt01.txt", "a");
    if (f == NULL) {
        printf("Khong mo duoc tep.\n");
        return 1;
    }
    printf("Nhap chuoi ky tu de ghi them vao tep: ");
    fgets(string, sizeof(string), stdin);
    size_t len = strlen(string);
    if (len > 0 && string[len - 1] == '\n') {
        string[len - 1] = '\0';
    }
    fputs(string, f);
    fputs("\n", f);
    fclose(f);
    printf("Da ghi xong chuoi ky tu vao tep thanh cong.\n");
    return 0;
}
