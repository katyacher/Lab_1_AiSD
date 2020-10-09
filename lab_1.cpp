
#include <iostream> // подключаем библиотеку ввода и вывода
#include <string> // библиотека для работы со строками
#include <cctype> // для функции toupper, tolower

using namespace std ; // используем именное пространство std

string CutSpaces(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
         if (s[i] == ' ' && s[i + 1] == ' ') 
         {
             s.erase(i, 1); i = (i - 1);
         }
    }
    return s;
}

string ToLowerCase(string s)
{
 for (unsigned int i = 0; i < s.length(); i++){
        if (isupper(s[i]))
            s[i] = tolower(s[i]);
    }
    return s;
}

int main()
{
   setlocale(LC_ALL, "Russian"); // включаем русский язык
   string str_1; // создаем строку
   string str_2; // создаем подстроку
    
    cout << "Введите строку" << endl;
    getline(cin, str_1); // вводим строку
    str_1 = CutSpaces(str_1);// удаляем лишние пробеллы в строке
         
    cout << "Введите  подстроку" << endl;
    getline(cin, str_2); // вводим подстроку
    str_2 = CutSpaces(str_2);
    
    char answer;
    cout << "Включить опцию нечувствительности к регистру:y/n"<<endl;
    cin >> answer;
    if (answer == 'y')
    {
        str_1 = ToLowerCase(str_1);
        str_2 = ToLowerCase(str_2); 
    }
     cout << str_1 << endl;
     cout << str_2 << endl;
    
    return 0;
}


