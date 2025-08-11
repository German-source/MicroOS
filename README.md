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
 - [Attach.h](#attachh)
 - [Примеры](#примеры)
    - Attach
    - Manager
    - Timer
 - [Init](#init)
## TimerControl.h
```c++
// Пример: https://clck.ru/3NbieR
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
void System.control(bool of, void (*fn)());         // Условие срабатывания. См. https://clck.ru/3NbiAP
void System.attach(void (*fn)());                   // Обработчик. См. https://clck.ru/3NbiAP
void System.tick(void);                             // Вызов обработчика.
timer32_t System.read(void);                        // Время с момента запуска.
```
## Attach.h
```c++
// Наследует методы от Manage.h
// Классы:
// Экземпляр класса:
void Attach.tick(timer32_t &tmr, timer32_t period, void (*fn)());  // Функция-обрабогтчик для таймера.
```
## Примеры
 - [Attach](https://github.com/German-source/MicroOS/blob/main/examples/AttachExample/AttachExample.ino)
 - [Manager](https://github.com/German-source/MicroOS/blob/main/examples/ManagerExample/ManagerExample.ino)
 - [Timer](https://github.com/German-source/MicroOS/blob/main/examples/TimerExample/TimerExample.ino)
## Init
Init-файл:
```ini
#  This conf 1086411056

[ 11.8.2025 14:26:21 ]

EKC = 331503119
RMV = 1312589391
NFQ = 523984055
QPC = 98647841
JVW = 2143183494
TEP = 1765847755
NGQ = 1035467372
GFZ = 2118950579
NKR = 340828856
KGW = 215966152

#  This reconf:

SYSTEM.NUM_305 = 133753141
SYSTEM.NUM_578 = 639506884
SYSTEM.NUM_835 = 1796801535
SYSTEM.NUM_052 = 1937318742
SYSTEM.NUM_231 = 628035158
SYSTEM.NUM_612 = 1586553667
SYSTEM.NUM_800 = 1342415229
SYSTEM.NUM_641 = 1180709978
SYSTEM.NUM_104 = 728716416
SYSTEM.NUM_875 = 1368636031

```