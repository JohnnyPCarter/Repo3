/**
 * Gives the user tools to find out information about a given string
 */
#include <iostream>
#include <string>

/**
 * Counts the number of characters in a string
 */
int q1a(std::string c) {
    int count = 0;
    for (int i = 0; i < c.size(); i++) {
        if (c[i] >= 65 && c[i] <= 90) {
            count++;
        } else if (c[i] >= 97 && c[i] <= 122){
            count++;
        }
    }
    return count;
}

/**
 * Counts the number of digits in a string
 */
int q1b(std::string c) {
    int count = 0;
    for (int i = 0; i < c.size(); i++) {
        if (c[i] >= 48 && c[i] <= 57) {
            count++;
        }
    }
    return count;
}

/**
 * Counts the number of characters in a string
 */
int q1c(std::string c) {
    int count = 0;
    for (int i = 0; i < c.size(); i++) {
        if (c[i] >= 48 && c[i] <= 57) {
            count++;
        }
        while (c[i] >= 48 && c[i] <= 57) {
            i++;
        }
    }
    return count;
}

/**
 * Returns true if "miami" apprears in a string
 */
bool q1d(std::string c) {
    int count = 0;
    for (int i = 0; i < c.size() - 5; i++) {
        if (c.substr (i, 5) == "miami") return true;
    }
    return false;
}

/**
 * Gives the user the choice to either recieve the sting back in all uppercase or all lowercase
 */
std::string q1e(std::string c) {
    bool upper = 1;
    int count = 0;
    std::string ret = "";
    std::cout << "Type \"1\" for uppercase or type \"0\" for lowercase: ";
    std::cin >> upper;
    if (upper) {
        for (int i = 0; i < c.size(); i++) {
            if (c[i] >= 97 && c[i] <= 122) {
                ret += c[i] - 32;
            } else {
                ret += c[i];
            }  
        }
    } else {
         for (int i = 0; i < c.size(); i++) {
            if (c[i] >= 65 && c[i] <= 90) {
                ret += c[i] + 32;
            } else {
                ret += c[i];
            }  
        }
    }
    return ret;
}

/**
 * Gives the user the ability to call the first three functions
 */
int q1f(std::string c) {
    int choice = 0;
    std::cout << "Type \"1\" for number of letter, type \"2\" for number of digits, or \"3\" for number of numbers: ";
    std::cin >> choice;
    if (choice == 1) {
        return q1a(c);
    } else if (choice == 2) {
        return q1b(c);
    } else if (choice == 3) {
        return q1c(c);
    } else {
        return -1;
    }
}

/**
 * Runs all of the functions
 */
int main()
{
    std::string c = "feng17@miamiOh.edu_^&*-----2055";
    std::string subc = c.substr (7,5);
    //std::cout << subc << std::endl;
    std::cout << "" << q1a(c) << std::endl;
    std::cout << "" << q1b(c) << std::endl;
    std::cout << "" << q1c(c) << std::endl;
    if (q1d(c) == 1) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    std::cout << "" << q1e(c) << std::endl;
    std::cout << "" << q1f(c) << std::endl;
}


