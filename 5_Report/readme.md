# Requirements
## Introduction

The mini Project Employee Management System is used for storing the records of employees. In this project we can manage employee records – add, view, update password, search and delete records.This project will be useful for organisations for adding and modifying the records of employee.


## Research

The Employee Management System was created in a simple console application where the system can be accessed with providing  login information. In the system, we can add new employee, view all employees, search employee , update password and delete employee record. The system contains function that can manage the employee information being stored in the system. The follow operations can be done in this system,

- Add employee name
- View all employees
- Search employee 
- Update password
- Delete employee record

We can update the  employee information by following the above operations. The entered data are stored as a text extension file in the system folder.


## Cost and Features and Timeline

File handling, functions and structures are the main things which make up this project. To make this system secure, username and password is added to enter into main menu. The key features of employee management system are listed below:

1.Add new employee name: with information such as employee id , father name, employee name, employee address, employee salary and date.
2.Update password: edit password.
3.Delete emplyee record: deletes employee records from file.
4.View employee details: lists all the employee details stored in file with their respective employee details.
5.Search employee: based on employee id.

Timeline: 20 years before = paper and pen
          10 years before = documents
           present        = system memory
## Defining our system

Employee Management System is a very simple project that can help you understand the basic concepts of functions, file handling, and structures. In this project, for giving input we need to provide a username and password which functions as a lock for entering the inputs required. This program will teach you how to add, view, edit password, search and remove data from/to a file. Adding new records, viewing them, editing and updating password, looking for saved employee details, and removing employee records are simple functions that make up the main menu of this system. Personal information information such as employee id , father name, employee name, employee address, employee salary and date is requested when you add a record to your file. These records can then be entered, searched, and deleted. I’ve used a lot of functions, and these functions are easy to understand since their name means just their respective operations. Therefore the main purpose of the employee management system is to record and organize the employee details within the software.





## SWOT Analysis

It is simple system for the management to store complete information (e.g. employee id , father name, employee name, employee address, employee salary and date  ) about employee details. It’s simple for the management to simply check the appropriate employee details by entering the employee id. The weakness would involve, the management cannot edit the employee details which makes it unmodified. The threat would involve, if the record was deleted from the saved file it would be permanently deleted. The oppurtunity would involve, the efficient way of maintaining and managing the employee records.

## 4W's and 1'H
# Who:
This project is useful for the management who wants to store and manage N number of employee records in single file.

# What:
This project is used to maintain and manage the employee records.

# When:
This project is used when the management looks to manage the employee details.

# Where:
This project is used in elimination of man power in the management.

# How:
This project works on C programming language.

## Detail requirements
# High Level Requirements:
| ID | DESCRIPTION | Status |
| ------ | ------ | ------ |
| 1 |Function prototype can manage the employee records being stored in the system| IMPLEMENTED |
| 2 | The entered data are stored as a text extension file in the system folder | IMPLEMENTED |
| 3 | Structure mechanism for packing data of different types  | IMPLEMENTED |
# Low Level Requirements:
| ID | DESCRIPTION | Status |
| ------ | ------ | ------ |
| 1 |Function prototype as add,update,delete,view and search| IMPLEMENTED |
| 2 | Data are stored as "record.txt" in the system folder | IMPLEMENTED |
| 3 | Structure has the data type of  employee id , father name, employee name, employee address, employee salary and date | IMPLEMENTED |

# High level design
# Structural diagram
![behavior diagram drawio](https://user-images.githubusercontent.com/94223235/143049197-587fd6b9-dc27-4da3-a536-fc818a163f5d.png)


# Behavioural diagram
![activity drawio](https://user-images.githubusercontent.com/94223235/143090493-add13664-7330-466f-a490-df2027efa72c.png)

# Low level design
# Structural diagram
![component diagram drawio](https://user-images.githubusercontent.com/94223235/143087241-e3f64d9b-e90f-44ef-9252-0c73e72f4495.png)


# Behavioural diagram
![deployment drawio](https://user-images.githubusercontent.com/94223235/143088468-271b979e-03a2-4129-97f8-b36385daa392.png)


# Test Plan

---

## High Level Test Plan

---

| TestID | Description                                                                                                                                  | Exp I/P | Exp O/P                       | Actual O/P                    | Type of Test      |
| ------ | -------------------------------------------------------------------------------------------------------------------------------------------- | ------- | ----------------------------- | ----------------------------- | ----------------- |
| 1   | System login                  | username, password    | login successful to main menu                        | login successful to main menu                         | Requirement Based |
| 2  | Add employee                                                                                                       | employee details   | saved details                      | saved details                      | Requirement Based |
| 3   | Search employee                                                                                                  | employee id    | employee details | employee details | Requirement Based    |
| 4  | View employee                                                                                                             |      | saved details     | saved details       | Requirement based    |
| 5  | Delete employee                                                                                       | employee id    | deleted record                       | deleted record                      | Requirement Based |
| 6  | Update password | new password  | updated password                    | updated password                     | Requirement Based |

## Low Level Test Plan

---

| TestID | Description                                                                                 | Exp I/P       | Exp O/P                  | Actual O/P               | Type of Test      |
| ------ | ------------------------------------------------------------------------------------------- | ------------- | ------------------------ | ------------------------ | ----------------- |
| 1   |  System login             | username, password      | login successful to main menu                    | login successful to main menu            | Requirement Based |
| 2  |   Add employee                          |     employee details       |           saved details           |  saved details                 | Requirement Based |





