#include <stdio.h>
#include <string.h> 
struct Student {
    int id;
    char name[100];
    int age;
};
int main() {
    int n; 
    FILE *f;
    f = fopen("D:/Dev c rikki/students.txt", "w");
    if (f == NULL) {
        printf("Khong mo duoc tep students.txt de ghi.\n");
        return 1;
    }
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);
        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len - 1] == '\n') {
            students[i].name[len - 1] = '\0';
        }
        printf("Age: ");
        scanf("%d", &students[i].age);
        fprintf(f, "%d,%s,%d\n", students[i].id, students[i].name, students[i].age);
    }
    fclose(f); 
    printf("\nDa luu thong tin sinh vien vao tep students.txt.\n");
    return 0;
}
