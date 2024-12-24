#include <stdio.h>
int main() {
    int n;
    char line[1000];
    FILE *f;
    f = fopen("D:/Dev c rikki/bt05.txt", "w");
    if (f == NULL) {
        printf("Khong mo duoc tep de ghi.\n");
        return 1;
    }
    printf("Nhap so dong can ghi vao tep: ");
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        printf("Nhap noi dung dong thu %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fputs(line, f);
    }
    fclose(f);
    printf("Da ghi xong noi dung vao tep bt05.txt.\n");
    f = fopen("bt05.txt", "r");
    if (f == NULL) {
        printf("Khong mo duoc tep de doc.\n");
        return 1;
    }
    printf("Noi dung tep bt05.txt la:\n");
    while (fgets(line, sizeof(line), f) != NULL) {
        printf("%s", line);
    }
    fclose(f);
    return 0;
}
