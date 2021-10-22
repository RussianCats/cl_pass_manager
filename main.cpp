#include "main.h"


int main(int, char**) {
    string path = "veracrypt/pass.txt";
    string messages;
    
    Create();

    Mount();
    
    while (true)
    {     
        cin >> messages;
        if (messages == ":add") Add(path); // создет файл или добавляет записи
        if (messages == ":read") Read(path); // gjrfpsdftn 
        if (messages == ":exit") Exit();// выход 
        if (messages == ":del") Delet(path);// удаление файла
        if (messages == ":str_del") Str_del(path); // удаление строки
       
    }
    
}
