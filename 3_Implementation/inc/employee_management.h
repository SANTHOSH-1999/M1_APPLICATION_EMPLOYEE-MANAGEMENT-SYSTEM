#ifndef _employeemanagement_H
#define _employeemanagement_H
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
#endif
