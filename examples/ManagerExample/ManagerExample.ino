/*
 * Пример исползования MicroOS Task Manager.
 */

#include <MicroOS.h>

void tmrControl() {
    pinMode(LED_BUILTIN, !digitalRead(LED_BUILTIN));       // Переключаем светодиод
}

void build() {
    static Timer tmr1 = 0;                                 // Таймер
    System.control(Time.control(tmr1, 500), tmrControl);   // Подключаем таймер. Эквивалентно Attach.tick(tmr1, 500, tmrControl)
}

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);                          // Настройка пина
    System.attach(build);
}

void loop() {
    System.tick();                                         // Вызываем build
}