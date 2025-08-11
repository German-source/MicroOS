# MicroOS
 Минимальный менеджер задач для Arduino.
## Установка
 - Через менеджер библиотек ардуино.
 - Вручную:
    - [Скачать](https://github.com/German-source/MicroOS/archive/refs/heads/main.zip).
    - Открыть Arduino IDE и перейти в ```Скетч -> Подключить библиотеку -> Добавить .ZIP библиотеку```.
    - Выбрать файл.
## Документация
 Оглавление:
 - [TimerControl.h](#timercontrolh)
 - [Manage.h](#manageh)
## TimerControl.h
```c++
// Константы:
#define MILLIS true
#define MICROS false
// Типы данных (равноценны):
typedef uint32_t timer32_t;
typedef timer32_t Timer;
// Классы:
// Экземпляр класса:
timer32_t Time.reset(timer32_t& tmr);               // Сбросить таймер
timer32_t Time.read(void);                          // Время, прошедшее с запуска программы
void Time.mode(bool mode);                          // Установить режим (MILLIS/MICROS)
bool Time.control(timer32_t& tmr, timer32_t prd);   // Проверить (таймер, период)
timer32_t Time.getLeft(timer32_t&);                 // Получить время до срабатывания
``` 
## Manage.h
```c++
// Наследует методы от TimerControl.h и Attach.h
// Классы:
// Экземпляр класса:
void System.mode(bool mode);                        // Установить режим (MILLIS/MICROS)
void control(bool of, void (*fn)());                // Условие срабатывания. См. https://clck.ru/3NbiAP
```