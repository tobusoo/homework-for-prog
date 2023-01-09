# Бронирование билетов 
## Описание
Интерактивное бронирование билетов на C
- Зачем?
- Для кого?
-  ✨Не знаю ✨

## Структура проекта
.

├── build

│      ├─── app

├── 102.txt

├── 311.txt

├── 444.txt

├── 519.txt

├── CMakeLists.txt

├── main.c

├── tickets.c

└── tickets.h

ИСПОЛНЯЕМЫЙ ФАЙЛ ДОЛЖЕН НАХОДИТЬСЯ В ПАПКЕ "build"
Ниже перечисленны файлы, в которых находиться информация о рейсах
- [102.txt](https://github.com/tobusoo/homework-for-prog/blob/main/prikol/%D0%B1%D1%80%D0%BE%D0%BD%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5%20%D0%B1%D0%B8%D0%BB%D0%B5%D1%82%D0%BE%D0%B2/102.txt)
- [311.txt](https://github.com/tobusoo/homework-for-prog/blob/main/prikol/%D0%B1%D1%80%D0%BE%D0%BD%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5%20%D0%B1%D0%B8%D0%BB%D0%B5%D1%82%D0%BE%D0%B2/311.txt)
- [444.txt](https://github.com/tobusoo/homework-for-prog/blob/main/prikol/%D0%B1%D1%80%D0%BE%D0%BD%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5%20%D0%B1%D0%B8%D0%BB%D0%B5%D1%82%D0%BE%D0%B2/444.txt)
- [519.txt](https://github.com/tobusoo/homework-for-prog/blob/main/prikol/%D0%B1%D1%80%D0%BE%D0%BD%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5%20%D0%B1%D0%B8%D0%BB%D0%B5%D1%82%D0%BE%D0%B2/519.txt)

[tickets.h](https://github.com/tobusoo/homework-for-prog/blob/main/prikol/%D0%B1%D1%80%D0%BE%D0%BD%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5%20%D0%B1%D0%B8%D0%BB%D0%B5%D1%82%D0%BE%D0%B2/tickets.h) - Заголовочный файл, в котором содержатся прототипы функций, определение структуры и макросы для файлов [tickets.c](https://github.com/tobusoo/homework-for-prog/blob/main/prikol/%D0%B1%D1%80%D0%BE%D0%BD%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5%20%D0%B1%D0%B8%D0%BB%D0%B5%D1%82%D0%BE%D0%B2/tickets.c) и [main.c](https://github.com/tobusoo/homework-for-prog/blob/main/prikol/%D0%B1%D1%80%D0%BE%D0%BD%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5%20%D0%B1%D0%B8%D0%BB%D0%B5%D1%82%D0%BE%D0%B2/main.c)

[CMakeLists.txt](https://github.com/tobusoo/homework-for-prog/blob/main/prikol/%D0%B1%D1%80%D0%BE%D0%BD%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5%20%D0%B1%D0%B8%D0%BB%D0%B5%D1%82%D0%BE%D0%B2/CMakeLists.txt) - Для использования [CMake](https://cmake.org/)

## Компиляция проекта
Без помощи [CMake](https://cmake.org/):
```sh
gcc -Wall -o app main.c tickets.c
mv app build
cd build
./app
```
С помощью [CMake](https://cmake.org/):
- При первом запуске:
```sh
cd build
cmake ..
make
./app
```
- При последующих запусках:
```sh
cd build
make
./app
```
