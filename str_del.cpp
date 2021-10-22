#include "main.h"

void Str_del(string path)
{
    ifstream File_read;
    vector <string> all_str;
    int del_str;
    cin >> del_str;

    // прочтение файла
    File_read.open(path);
    while (File_read)
    {
        string strInput;
        getline(File_read, strInput);
        all_str.push_back(strInput); // новая ячейка
    }
    File_read.close();

    // удаление строки через прибаление к первому указателю вектор
    all_str.erase(all_str.begin() + del_str - 1);

    // запись файла
    ofstream File_add;
    File_add.open(path);
    for (int i = 0; i < all_str.size(); i++)
    {
        File_add << all_str[i] << endl;
    }
    
    
    File_add.close();
}