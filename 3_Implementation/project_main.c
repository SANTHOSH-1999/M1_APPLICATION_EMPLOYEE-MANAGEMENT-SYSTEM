#include <employee_management.h>
typedef struct
{
    int yyyy;
    int mm;
    int dd;
} Date;
typedef struct
{
    char username[MAX_SIZE_USER_NAME];
    char password[MAX_SIZE_PASSWORD];
} sFileHeader;
//Elements of structure
typedef struct// to call in program
{
    char fatherName[MAX_FATHER_NAME];// declare the character data type
    char employeeName[MAX_EMPLOYEE_NAME];// declare the character data type
    char employeeAddr[MAX_EMPLOYEE_ADDRESS];// declare the character data type
    Date employeeJoiningDate;// declare the integer data type
    unsigned int employee_id; // declare the integer data type
    float employeeSalary;
} s_EmployeesInfo;

int main()
{
    init();
    welcomeMessage();
    login();
    return 0;
}
