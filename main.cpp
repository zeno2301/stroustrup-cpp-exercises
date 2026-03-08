/*
=== ПАМЯТКА СЕНЬОРА C++ ДЛЯ ПРОДАКШЕНА ===

1. ЭФФЕКТИВНОСТЬ:
   - Используй const& для параметров (избегай копирования): func(const vector<int>& v)
   - Предпочитай ++i вместо i++ в циклах
   - Используй .size() вместо магических чисел
   - Избегай повторных вычислений: сохраняй результат в переменную
   - Математические оптимизации: i*i <= n вместо i <= sqrt(n)

2. ЧИТАЕМОСТЬ:
   - Имена переменных: descriptive_name, не a, b, x
   - Функции делают ОДНУ вещь
   - Избегай глубокую вложенность (>3 уровней)
   - Используй early return для упрощения логики

3. БЕЗОПАСНОСТЬ:
   - Проверяй границы массивов
   - Инициализируй переменные при объявлении
   - Используй .at() вместо [] для отладки
   - Обрабатывай edge cases (пустые контейнеры, деление на 0)

4. ПАТТЕРНЫ ЦИКЛОВ:
   - Поиск элемента: for + if + break/return
   - Подсчет: for + counter
   - Мин/Макс: начальное значение + сравнение
   - Накопление: sum += element
   - Преобразование: новый контейнер + push_back

5. СОВРЕМЕННЫЙ C++:
   - Используй auto для сложных типов
   - Range-based loops: for(const auto& item : container)
   - Избегай raw arrays, используй vector
   - Предпочитай {} инициализацию

6. ОТЛАДКА:
   - Один return на функцию (когда возможно)
   - Логируй промежуточные результаты
   - Тестируй на граничных случаях
*/

#include<iostream>
using namespace std;
#include <vector>
#include <cmath>

bool addNameScore(vector<string>& names, vector<int>& scores, int score, string name) {
   
   if (name == "NoName" && score == 0) {
      return false;
   }

   for (const string& existing_name : names) {
      if (existing_name == name) {
         cout << "Ошибка: " << name << " повторяется\n";   
         return false;
      }
   }
   return true;
}


int main() 
{
   vector<string> names;
   vector<int> scores; 

   
   
   while (true) {
      cout << "Введите Имя и число: \n";
      string name;
      int score = 0;
      cin >> name >> score;
      if(addNameScore(names, scores, score, name) == true) {
         names.push_back(name);
         scores.push_back(score);
      }
      else {
         break;
      }

   }

   cout << "\nВсе пары:\n";
   for (size_t i = 0; i < names.size(); ++i) {
      cout << names[i] << " " << scores[i] << "\n";
   }
   cout << endl;
   int score_2;
   cout << "Чтобы посмотреть результаты, введите баллы: \n";
   cin >> score_2;
   bool found = false; // флаг 
   for (int i = 0; i < names.size(); ++i) {
      if (score_2 == scores[i]) 
      {
         cout << names[i] << "\n";
         found = true;
      }
   }
   if (!found) {
      cout << "баллы не найдены\n"; 
   }
   
}

