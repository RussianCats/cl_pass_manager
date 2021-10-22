#pragma once // решение пролемы повторного включения 

#include <iostream>
#include <string>
#include <fstream> // для работы с txt 
#include <cstdio> // удаление файла
#include <vector> // для работы с дин. массивами
#include <cstring> //для strcpy()
using namespace std;

// прототипы 
void Add(string path);
void Read(string path);
void Exit();
void Delet(string &path);
void Str_del(string path);
void Create();
void Mount();
void Unmount();

