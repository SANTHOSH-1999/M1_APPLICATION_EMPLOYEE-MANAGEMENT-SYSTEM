#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void printMessageCenter(const char* message);
void headMessage(const char *message);
void welcomeMessage();
int isNameValid(const char *name);
int  IsLeapYear(int year);
int isValidDate(Date *validDate);
void addEmployeeInDataBase();
void searchEmployee();
void viewEmployee();
void deleteEmployee();
void updateCredential(void);
void menu();
void login();
void init();
int isFileExists(const char *path);
#define MAX_YR  9999
#define MIN_YR  1900
#define MAX_SIZE_USER_NAME 30
#define MAX_SIZE_PASSWORD  20
#define FILE_NAME  "EmployeeRecordSystem.bin"
// Macro related to the Employees info
#define MAX_FATHER_NAME 50
#define MAX_EMPLOYEE_NAME 50
#define MAX_EMPLOYEE_ADDRESS 300
#define FILE_HEADER_SIZE  sizeof(sFileHeader)
