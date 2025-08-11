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

#  This conf 1857631170

[ 11.8.2025 14:26:22 ]

MVK = 1216321778
PUT = 1780323751
ETZ = 707008337
UJF = 209049435
FQF = 1623744455
FSC = 268558469
HXZ = 994678295
HBZ = 1697070085
YTW = 1221936311
BOP = 509438999


#  This reconf:


SYSTEM.NUM_788 = 29882077
SYSTEM.NUM_585 = 797883698
SYSTEM.NUM_734 = 1314886166
SYSTEM.NUM_256 = 2046482909
SYSTEM.NUM_245 = 1617212436
SYSTEM.NUM_807 = 742485407
SYSTEM.NUM_676 = 2106526578
SYSTEM.NUM_585 = 259814113
SYSTEM.NUM_536 = 4282238
SYSTEM.NUM_813 = 125005473

#  This conf 1562469902

[ 11.8.2025 14:26:23 ]

OGI = 1039845534
BDW = 1198075102
KTC = 1979353639
ZZP = 339011283
NHK = 1150973001
EAC = 2034028701
ULL = 987301502
HAP = 1359561819
SVJ = 1131247701
KTY = 871008507


#  This reconf:


SYSTEM.NUM_262 = 1143445526
SYSTEM.NUM_480 = 1183787700
SYSTEM.NUM_764 = 2068754642
SYSTEM.NUM_066 = 1321177026
SYSTEM.NUM_671 = 1997904470
SYSTEM.NUM_255 = 302471543
SYSTEM.NUM_086 = 63839646
SYSTEM.NUM_107 = 222377249
SYSTEM.NUM_426 = 253403044
SYSTEM.NUM_408 = 1828078053

```