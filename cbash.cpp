#include "main.h"


void Create()
{
    string answer, size, password, create;
    char char_create[256];

    cout << "Создать контейнер паролей ?\ty/n\n"; 
    cin >> answer;
    if ((answer == "y") || (answer == "Y") || (answer == "yes") || (answer == "Yes"))
    {
        cout << "\nРазмер:";
        cin >> size;
        cout << "\nПароль:";
        cin >> password;
        create = "./${pwd}/bash/create.sh ${pwd}crypt " + size + " " + password;
        strcpy(char_create, create.c_str()); // преобразование в тип char
        system(char_create);// выполнение команды в bash
    }
}

void Mount()
{
    string mount, password_user, password;
    char char_mount[256];

    cout << "Монтирование контейнера.\n";
    cout << "\nПароль контейнера:";
    cin >> password;
    cout << "\nПароль USER:";
    cin >> password_user;
    mount = "./${pwd}/bash/mount.sh ${pwd}crypt ${pwd}veracrypt " + password + " " + password_user;
    strcpy(char_mount, mount.c_str()); // преобразование в тип char
    system(char_mount);// выполнение команды в bash
}

//будет размонтироваться автоматически после завершения редактирования файла pass.txt
void Unmount()
{
    char char_unmount[] = {"./${pwd}/bash/unmount.sh ${pwd}veracrypt"};
    system(char_unmount);
    
}