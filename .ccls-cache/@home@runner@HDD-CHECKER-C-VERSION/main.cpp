#include <iostream>

int main() {
    char drive_letter;
    std::cout << "Enter drive letter to check (e.g. C): ";
    std::cin >> drive_letter;

    std::string command = "chkdsk ";
    command += drive_letter;
    command += ": /f /r /scan";

    int result = system(command.c_str());
    if (result == 0) {
        std::cout << "No errors found." << std::endl;
    } else {
        std::cout << "Errors found." << std::endl;
    }

    return 0;
}
