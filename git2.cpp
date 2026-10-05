#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;


void createFile(const string& filename) {
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "Не удалось открыть файл " << filename << endl;
        return;
    }
    for (int i = 0; i < 10; ++i) {
        int num = rand() % 10 + 1; // 1..10
        file << num;
        if (i < 9) file << " ";
    }
    file << endl;
    file.close();
    cout << "Создан файл: " << filename << endl;
}

int main() {
    srand(time(0));

    createFile("file1.txt");
    createFile("file2.txt");
    createFile("file3.txt");

    return 0;
}

