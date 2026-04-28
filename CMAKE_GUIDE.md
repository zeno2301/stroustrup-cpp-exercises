# ============================================
# ШПАРГАЛКА ПО CMAKE ДЛЯ ПРОФИ
# ============================================

## 🚀 Быстрый старт

### 1. Структура проекта
```
мой-проект/
├── CMakeLists.txt      # Конфигурация сборки (РЕДАКТИРУЙ ЭТО!)
├── main.cpp            # Исходники
├── utils.cpp
├── utils.h
└── build/              # Папка для сборки (НЕ ТРОГАЙ!)
    ├── Makefile        # Автогенерация
    └── prog            # Скомпилированная программа
```

### 2. Базовые команды

```bash
# Шаг 1: Создать папку для сборки
mkdir build
cd build

# Шаг 2: Сгенерировать Makefile из CMakeLists.txt
cmake ..

# Шаг 3: Собрать проект
cmake --build .
# или просто: make

# Шаг 4: Запустить программу
./prog
```

### 3. Полезные команды

```bash
# Пересобрать всё с нуля
rm -rf build/*
cmake -B build
cmake --build build

# Очистить скомпилированные файлы
make clean

# Показать доступные цели
make help

# Собрать с подробным выводом
make VERBOSE=1

# Пересоздать Makefile (если изменил CMakeLists.txt)
cmake ..
```

---

## 📝 CMakeLists.txt - Основные команды

### Минимальный файл
```cmake
cmake_minimum_required(VERSION 3.10)
project(MyProject)
set(CMAKE_CXX_STANDARD 17)
add_executable(prog main.cpp)
```

### Несколько файлов
```cmake
add_executable(prog 
    main.cpp 
    utils.cpp 
    helper.cpp
)
```

### Подключение библиотек
```cmake
# Математическая библиотека
target_link_libraries(prog m)

# Потоки (для многопоточности)
find_package(Threads REQUIRED)
target_link_libraries(prog Threads::Threads)
```

### Include директории
```cmake
# Добавить папку с заголовочными файлами
target_include_directories(prog PRIVATE 
    ${CMAKE_SOURCE_DIR}/include
)
```

### Флаги компиляции
```cmake
# Все предупреждения
if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -pedantic)
endif()

# Оптимизация
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
```

### Режимы сборки
```cmake
# Debug (с отладочными символами)
set(CMAKE_BUILD_TYPE Debug)

# Release (оптимизация)
set(CMAKE_BUILD_TYPE Release)
```

---

## 🎯 Типичные сценарии

### Сценарий 1: Простой проект (1 файл)
```cmake
cmake_minimum_required(VERSION 3.10)
project(SimpleApp)
set(CMAKE_CXX_STANDARD 17)
add_executable(app main.cpp)
```

### Сценарий 2: Проект с несколькими файлами
```cmake
cmake_minimum_required(VERSION 3.10)
project(MultiFileApp)
set(CMAKE_CXX_STANDARD 17)

add_executable(app 
    main.cpp
    src/utils.cpp
    src/math_helper.cpp
)

target_include_directories(app PRIVATE include)
```

### Сценарий 3: Проект с библиотекой
```cmake
cmake_minimum_required(VERSION 3.10)
project(LibraryApp)
set(CMAKE_CXX_STANDARD 17)

# Создать статическую библиотеку
add_library(mylib STATIC
    src/lib.cpp
)

# Создать программу
add_executable(app main.cpp)

# Подключить библиотеку к программе
target_link_libraries(app mylib)
```

---

## 🔧 Переменные CMake

```cmake
# Важные переменные
${CMAKE_SOURCE_DIR}         # Корень проекта (где CMakeLists.txt)
${CMAKE_BINARY_DIR}         # Папка сборки (build/)
${CMAKE_CXX_COMPILER}       # Путь к компилятору C++
${CMAKE_BUILD_TYPE}         # Debug или Release

# Использование
message("Source dir: ${CMAKE_SOURCE_DIR}")
```

---

## 🐛 Отладка CMake

```bash
# Показать все переменные
cmake -B build -LAH

# Подробный вывод при сборке
cmake --build build --verbose

# Показать команды компиляции
make VERBOSE=1
```

---

## ⚡ Продвинутые фишки

### Условная компиляция
```cmake
if(WIN32)
    # Код для Windows
    add_definitions(-DWINDOWS)
elseif(UNIX)
    # Код для Linux/macOS
    add_definitions(-DUNIX)
endif()
```

### Автоматический поиск файлов
```cmake
# Найти все .cpp файлы в src/
file(GLOB SOURCES "src/*.cpp")
add_executable(app ${SOURCES})
```

### Установка программы
```cmake
# Установить в /usr/local/bin
install(TARGETS prog DESTINATION bin)

# Использование:
# sudo make install
```

---

## 📊 Сравнение: CMake vs Makefile

| Что | CMake | Makefile |
|-----|-------|----------|
| Редактируешь | CMakeLists.txt | Makefile |
| Кроссплатформенность | ✅ Да | ❌ Нет |
| Автогенерация | ✅ Да | ❌ Ручная |
| Сложность | 🟢 Проще | 🔴 Сложнее |
| Для продакшена | ✅ Да | ⚠️ Редко |

---

## 🎓 Для собеседования на джуна

**Вопрос:** "Как ты собираешь C++ проекты?"

**Правильный ответ:**
```
Использую CMake для кроссплатформенной сборки:
1. Создаю CMakeLists.txt с конфигурацией
2. Генерирую Makefile: cmake -B build
3. Собираю: cmake --build build
4. Для продакшена использую Release режим

Преимущества: кроссплатформенность, автоматическое 
управление зависимостями, интеграция с IDE.
```

---

## 🚨 Частые ошибки

### ❌ Редактировать Makefile напрямую
```bash
# НЕПРАВИЛЬНО
nano build/Makefile  # НЕ ДЕЛАЙ ТАК!
```

### ✅ Редактировать CMakeLists.txt
```bash
# ПРАВИЛЬНО
nano CMakeLists.txt
cmake -B build
```

### ❌ Собирать в корне проекта
```bash
# НЕПРАВИЛЬНО
cmake .  # Засоряет корень проекта
```

### ✅ Использовать отдельную папку build
```bash
# ПРАВИЛЬНО
cmake -B build
cmake --build build
```

---

## 📚 Полезные ссылки

- [CMake Tutorial](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)
- [CMake Commands](https://cmake.org/cmake/help/latest/manual/cmake-commands.7.html)
- [Modern CMake](https://cliutils.gitlab.io/modern-cmake/)

---

**Запомни главное:**
1. Редактируй ТОЛЬКО CMakeLists.txt
2. Makefile генерируется автоматически
3. Всегда используй отдельную папку build/
4. cmake -B build → cmake --build build → ./build/prog
