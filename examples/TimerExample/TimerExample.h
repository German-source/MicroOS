/* 
 * Программа выводит время, прошедшее с момента запуска и
 * моргает светодиодом на пине LED_BUILTIN.
 */

#include <TimerControl.h>                         // или #include <MicroOS.h>

Timer tmr = 0;                                    // или timer32_t tmr = 0;

void setup() {
  Time.reset(tmr);                                // Необязательно
  Time.mode(MILLIS);                              // Единицы измерения. MILLIS - по умолчанию (MILLIS, MICROS)
  Serial.begin(9600);                             // Скорость передачи данных - 9600 бод
  pinMode(LED_BUILTIN, OUTPUT);                   // Настройка пина
}

void loop() {
  if (Time.control(tmr, 500)) {                   // Time.control(имя_таймера, период_в_установленных_единицах) - возвращает bool
    digitalWrite(LED_BUILTIN, !digitalRead(13));  // Инвертируем пин
    Serial.println(Time.read());                  // Выводим время                
  }
  // delay(Time.getLeft(tmr));                    // Ждать срабатывания (Time.getLeft(имя_таймера) - время до срабатывания таймера)
}
