#include "main.h"

void Read(string path)
{
    int i = 0;
    ifstream File_read;
    File_read.open(path);


    while (File_read)
    {
        // то перемещаем эти данные в строку, которую затем выводим на экран
        ++i;
        string strInput;
        getline(File_read, strInput);
        cout << i << "  " << strInput << endl;
    }
    File_read.close();
}
