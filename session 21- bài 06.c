#include <stdio.h>
int main() {
    char string[100];
    FILE *a, *b;
    a = fopen("D:/Dev c rikki/bt01.txt", "r");
    if (a == NULL) {
        printf("Khong mo duoc tep\n");
        return 1;
    }
    b = fopen("D:/Dev c rikki/bt06.txt", "w");
    if (b == NULL) {
        printf("Khong mo duoc tep bt06.txt de ghi.\n");
        fclose(a);
        return 1;
    }
    while (fgets(string, sizeof(string), a) != NULL) {
        fputs(string, b);
    }
    fclose(a);
    fclose(b);
    printf("Da sao chep noi dung tu bt01.txt sang bt06.txt thanh cong.\n");
    return 0;
}
