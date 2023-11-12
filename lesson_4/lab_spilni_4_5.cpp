#include <iostream>
#include <cstring> 
using namespace std;

int main()
{
  char s[256]; // Початкові символи
  string slova[10]; // Майбутній масив слів slova
  
  cout << "Input string:";
  cin.getline(s,256,'.'); // отримуємо рядок, що закінчується .
  
  int kolvo=0; // кількість знайдених слів
  for (int i=0;i<strlen(s);i++) // перебираємо літери рядка
    {
      while (s[i]==' ' && s[i+1]==' ') {i++;} // пропускаємо зайві пробіли
      if (s[i]==' ') { i++; kolvo++;} // якщо знайшли нове слово
      slova[kolvo] = slova[kolvo]+s[i]; //переписуємо символи до масиву
    }
  
  for (int j=0;j<=kolvo;j++)
     slova[j].erase(0,1); // видаляємо першу букву в словах
  for (int j=0;j<kolvo;j++) 
    if (slova[j]!=slova[kolvo])
      cout << slova[j] <<"\n"; // виводимо отриманий результат
  
  return 0;
}