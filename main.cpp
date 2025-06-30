#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

// Asks the user for menu option
int getMenuOption() {
    int option;
    cout << "\nMenu Options:\n";
    cout << "1. Look up item frequency\n";
    cout << "2. Print item frequencies\n";
    cout << "3. Print item frequency histogram\n";
    cout << "4. Exit\n";
    cout << "Enter your choice (1-4): ";
    cin >> option;
    return option;
}

// Menu option one
void lookupItemFrequency(const map<string, int>& itemFrequencies) {
    string item;
    cout << "Enter the item to look up: ";
    cin >> item;
    auto iter = itemFrequencies.find(item);
    if (iter != itemFrequencies.end()) {
        cout << "Frequency of " << item << ": " << iter->second << endl;
    } else {
        cout << "Item not found." << endl;
    }
}

// Menu option two
void printItemFrequencies(const map<string, int>& itemFrequencies) {
    cout << "\nItem Frequencies:\n";
    for (const auto& pair : itemFrequencies) {
        cout << pair.first << " " << pair.second << endl;
    }
}

// Menu option three
void printItemHistogram(const map<string, int>& itemFrequencies) {
    cout << "\nItem Frequency Histogram:\n";
    for (const auto& pair : itemFrequencies) {
        cout << pair.first << " ";
        for (int i = 0; i < pair.second; ++i) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    map<string, int> itemFrequencies;
    string item;

    // Open file
    ifstream inputFile("CS210_Project_Three_Input_File.txt");
    if (!inputFile.is_open()) {
        cout << "Error opening input file." << endl;
        return 1;
    }

    // Read file and populate map
    while (inputFile >> item) {
        itemFrequencies[item]++;
    }
    inputFile.close();

    // Create and open backup
    ofstream outputFile("frequency.dat");
    if (!outputFile.is_open()) {
        cout << "Error opening output file." << endl;
        return 1;
    }
    for (const auto& pair : itemFrequencies) {
        outputFile << pair.first << " " << pair.second << endl;
    }
    outputFile.close();

    // Menu loop
    int option;
    do {
        option = getMenuOption();
        switch (option) {
            case 1:
                lookupItemFrequency(itemFrequencies);
                break;
            case 2:
                printItemFrequencies(itemFrequencies);
                break;
            case 3:
                printItemHistogram(itemFrequencies);
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }
    } while (option != 4);

    return 0;
}
