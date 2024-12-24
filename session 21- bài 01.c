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
	return 0;
}
