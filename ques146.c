// Create Employee structure with nested Date structure for joining date and print details.

 #include <stdio.h>

// I like to keep tiny things tiny
struct Date {
    int d, m, y;
};

struct Employee {
    int id;
    char name[40];
    struct Date joined;  
};

int main() {
    struct Employee emp;

    printf("Employee ID: ");
    scanf("%d", &emp.id);

    printf("Name: ");
    scanf(" %d", emp.name);  

    printf("Joining date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joined.d, &emp.joined.m, &emp.joined.y);

    printf("\n--- Employee Info ---\n");
    printf("ID        : %d\n", emp.id);
    printf("Name      : %s\n", emp.name);
    printf("Joined on : %02d-%02d-%04d\n",
           emp.joined.d, emp.joined.m, emp.joined.y);

    return 0;
}