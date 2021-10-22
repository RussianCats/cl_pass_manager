#include "main.h"

void Add(string path)
{
    ofstream File_add;
    File_add.open(path, ios::app);
    string login, pass, other, all_str;
    cin >> login >> pass >> other;
    
    if ((login.size() > 32) || (pass.size() > 32) || (other.size() > 64)) 
    {
        cout << "превышен лимит: login <= 32, pass <= 32, other <= 32" << endl;
        return;
    }
    
    // под логин 64 ячейки, пароль 64 ячейки, остальные даннык 64 ячеек
    for (int i = login.size(); i < 32; i++)
    {
        login += " ";
    }

    for (int i = pass.size(); i < 32; i++)
    {
        pass += " ";
    }

    
    // склеивание в одну строку 192 символа
    login = login + pass + other;

    // Если мы не можем открыть этот файл для записи данных,
    if (!File_add)
    {
        // то выводим сообщение об ошибке и выполняем функцию exit()
        cerr << "нет файла!" << endl;
        exit(1);
    }
    File_add << login << endl;
    File_add.close();
}