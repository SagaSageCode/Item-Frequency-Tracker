#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main() {
    map<string, int> itemFrequencies;

    // Manually populate frequencies
    itemFrequencies["Spinach"] = 3;
    itemFrequencies["Radishes"] = 4;
    itemFrequencies["Broccoli"] = 7;
    itemFrequencies["Peas"] = 7;
    itemFrequencies["Cucumber"] = 12;
    itemFrequencies["Potatoes"] = 6;
    itemFrequencies["Cauliflower"] = 8;
    itemFrequencies["Couchberries"] = 7;
    itemFrequencies["Peaches"] = 11;
    itemFrequencies["Pumpkin"] = 4;
    itemFrequencies["Cantaloupe"] = 2;
    itemFrequencies["Beets"] = 4;
    itemFrequencies["Onions"] = 5;
    itemFrequencies["Carrots"] = 6;
    itemFrequencies["Apples"] = 3;
    itemFrequencies["Grapes"] = 4;
    itemFrequencies["Turnips"] = 1;
    itemFrequencies["Garlic"] = 1;

    ofstream outputFile("frequency.dat");

    if (!outputFile.is_open()) {
        cout << "Error opening file." << endl;
        return 1;
    }

    for (const auto& pair : itemFrequencies) {
        outputFile << pair.first << " " << pair.second << endl;
    }

    outputFile.close();
    cout << "Data file created successfully." << endl;

    return 0;
}
