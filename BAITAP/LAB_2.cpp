#include <bits/stdc++.h>

struct Student {
    char name[30];
    char className[10];
    float mMath;
    float mPhysical;
};

Student s[100];// m?ng cho d?i tu?ng h?c sinh
int totalStudents = 0;

void addStudent() {
    if(totalStudents >= 100) {
        std::cout << "Full";
        return;
    }
    Student newStudent;
    std::cout << "Student name ? ";
    std::cin.getline(newStudent.name, 30);
    std::cout << "Student class ? ";
    std::cin.getline(newStudent.className, 10);
    std::cout << "Student's math score ? ";
    std::cin >> newStudent.mMath;
    std::cout << "Student's physical score: ";
    std::cin >> newStudent.mPhysical;

    s[totalStudents++] = newStudent;
    std::cout << "Student added successfully.\n";
}

void searchByName(const char* name) {
    bool found = false;
    for(int i = 0; i < totalStudents; ++i) {
        if(std::strcmp(s[i].name, name) == 0) {
            found = true;
            std::cout << "Student found:\n";
            std::cout << "Name: " << s[i].name << std::endl;
            std::cout << "Class: " << s[i].className << std::endl;
            std::cout << "Math Score: " << s[i].mMath << std::endl;
            std::cout << "Physical Score: " << s[i].mPhysical << std::endl;
            break;
        }
    }
    if(!found) {
        std::cout << "Name '" << name << "' not found.\n";
    }
}

void editClassByName(const char* name) {
    for(int i = 0; i < totalStudents; ++i) {
        if(std::strcmp(s[i].name, name) == 0) {
            std::cout << "Enter new class for student " << name << ": ";
            std::cin.getline(s[i].className, 10);
            std::cout << "Class updated successfully.\n";
            return;
        }
    }
    std::cout << "Student with name '" << name << "' not found.\n";
}

int main() {
    char choice;
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Add a new student\n";
        std::cout << "2. Search a student by name\n";
        std::cout << "3. Search a student by name and edit class\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(); // Clear input buffer

        switch(choice) {
            case '1':
                addStudent();
                break;
            case '2':
                char searchName[30];
                std::cout << "Enter student name to search: ";
                std::cin.getline(searchName, 30);
                searchByName(searchName);
                break;
            case '3':
                char editName[30];
                std::cout << "Enter student name to edit class: ";
                std::cin.getline(editName, 30);
                editClassByName(editName);
                break;
            case '4':
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid ! Try again.\n";
                break;
        }
    } while(choice != '4');

    return 0;
}
