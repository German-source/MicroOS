/*
 * Пример исползования Attach Task Manager.
 */

#include <MicroOS.h>

void attr();                                               // Прототипы функций
void build();

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);                          // Настройка пина
    System.attach(build);
}

void loop() {
    System.tick();                                         // Вызываем build
}

void attr() {
    pinMode(LED_BUILTIN, !digitalRead(LED_BUILTIN));       // Переключаем светодиод
}

void build() {
    static Timer tmr1 = 0;                                 // Таймер
    Attach.tick(tmr1, 1000, attr)                          // Подключаем таймер
}