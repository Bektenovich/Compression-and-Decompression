#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

string decompress(const string& input) {
    stringstream decompressed;
    for (int i = 0; i < input.size(); i += 2) {
        char current = input[i];
        int count = input[i + 1] - '0';
        for (int j = 0; j < count; ++j) {
            decompressed << current;
        }
    }
    return decompressed.str();
}

int main() {
    ifstream inputFile("compressed.txt");
    if (!inputFile.is_open()) {
        cerr << "Unable to open compressed.txt\n";
        return 1;
    }

    string content((istreambuf_iterator<char>(inputFile)), istreambuf_iterator<char>());
    inputFile.close();

    string decompressedContent = decompress(content);

    ofstream outputFile("decompressed.txt");
    if (!outputFile.is_open()) {
        cerr << "Unable to create decompressed.txt\n";
        return 1;
    }

    outputFile << decompressedContent;
    outputFile.close();

    return 0;
}
