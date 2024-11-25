/*1. Напишите программу, которая подсчитывает радиус окружности, описанной около равностороннего 
треугольника со стороной a.*/
/*#include <iostream>
#include <cmath> // Для использования функции sqrt

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	double sideLength;

	// Запрос у пользователя ввода длины стороны треугольника
	cout << "Введите длину стороны равностороннего треугольника: ";
	cin >> sideLength;

	// Проверка на положительность стороны
	if (sideLength <= 0) {
		cout << "Длина стороны должна быть положительным числом." << endl;
		return 1; // Завершение программы с ошибкой
	}

	// Вычисление радиуса описанной окружности
	double circumradius = sideLength / sqrt(3);

	// Вывод результата
	cout << "Радиус описанной окружности равностороннего треугольника со стороной "
		<< sideLength << " равен: " << circumradius << endl;

	return 0; // Успешное завершение программы
}*/
/*
2. Напишите программу, которая подсчитывает расстояние между точками с координатами a,b и c,d.*/
/*
#include <iostream>
#include <cmath> // Для использования функции sqrt
using namespace std;

int main() {
	double a, b, c, d;

	// Запрос у пользователя ввода координат первой точки
	cout << "Введите координаты первой точки (a, b): ";
	cin >> a >> b;

	// Запрос у пользователя ввода координат второй точки
	cout << "Введите координаты второй точки (c, d): ";
	cin >> c >> d;

	// Вычисление расстояния между точками
	double distance = sqrt(pow(c - a, 2) + pow(d - b, 2));

	// Вывод результата
	cout << "Расстояние между точками (" << a << ", " << b << ") и ("
		<< c << ", " << d << ") равно: " << distance << endl;

	return 0; // Успешное завершение программы
}*/
/*
3. Напишите программу, которая определяет является ли сумма цифр двухзначного числа четной.*/
/*#include <iostream>
using namespace std;
int main() {
	int number;

	// Запрос у пользователя ввода двухзначного числа
	cout << "Введите двухзначное число: ";
	cin >> number;

	// Проверка на двухзначность
	if (number < 10 || number > 99) {
		cout << "Ошибка: введенное число должно быть двухзначным." << endl;
		return 1; // Завершение программы с ошибкой
	}

	// Извлечение цифр
	int tens = number / 10; // Десятки
	int units = number % 10; // Единицы

	// Вычисление суммы цифр
	int sum = tens + units;

	// Проверка на четность суммы
	if (sum % 2 == 0) {
		cout << "Сумма цифр числа " << number << " четная." << endl;
	}
	else {
		cout << "Сумма цифр числа " << number << " нечетная." << endl;
	}

	return 0; // Успешное завершение программы
}*/
/*
4. Напишите программу, в которой определяется кратная ли трём сумма двузначного числа.*/
/*#include <iostream>
using namespace std;
int main() {
	int number;

	// Запрос у пользователя ввода двухзначного числа
	cout << "Введите двухзначное число: ";
	cin >> number;

	// Проверка на двухзначность
	if (number < 10 || number > 99) {
		cout << "Ошибка: введенное число должно быть двухзначным." << endl;
		return 1; // Завершение программы с ошибкой
	}

	// Извлечение цифр
	int tens = number / 10; // Десятки
	int units = number % 10; // Единицы

	// Вычисление суммы цифр
	int sum = tens + units;

	// Проверка кратности суммы трем
	if (sum % 3 == 0) {
		cout << "Сумма цифр числа " << number << " кратна трём." << endl;
	}
	else {
		cout << "Сумма цифр числа " << number << " не кратна трём." << endl;
	}

	return 0; // Успешное завершение программы
}*/
/*
5. Выведите на экран числа в виде следующей таблицы 
1
0
2 2
0 0 
3 3 3
0 0 0
4 4 4 4
0 0 0 0
5 5 5 5 5
0 0 0 0 0
*/
/*#include <iostream>
using namespace std;
int main() {
	const int maxNumber = 5; // Максимальное число

	// Цикл для вывода строк
	for (int i = 1; i <= maxNumber; ++i) {
		// Вывод чисел
		for (int j = 0; j < i; ++j) {
			cout << i << " "; // Вывод текущего числа
		}
		cout << endl; // Переход на новую строку

		// Вывод нулей
		for (int j = 0; j < i; ++j) {
			cout << "0 "; // Вывод нуля
		}
		cout << endl; // Переход на новую строку
	}

	return 0; // Успешное завершение программы
}*/
/*6.Выведите на экран числа в виде следующей таблицы
4 3 2 1 0
3 2 1 0
2 1 0
1 0
0*//*
#include <iostream>
using namespace std;
int main() {
	const int startNumber = 4; // Начальное число

	// Внешний цикл для строк
	for (int i = startNumber; i >= 0; --i) {
		// Внутренний цикл для вывода чисел
		for (int j = i; j >= 0; --j) {
			cout << j << " "; // Вывод текущего числа
		}
		cout << endl; // Переход на новую строку
	}

	return 0; // Успешное завершение программы
}*/
/*7. Дан массив размером n*n, элементы которого – целые числа. 
Для каждого столбца найти первый положительный элемент и записать 
данные в новый массив.
1. объявляем массив x2
2.	-1|-2|-3
	-2|3|5
	3|-4|3
3. берем каждый элемент и проверяем является ли он положительным
4. запоминаем номер положительного элемента массива*/
/*#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int n;

	// Запрос размера массива
	cout << "Введите размер массива n (n x n): ";
	cin >> n;

	// Создание двумерного массива
	int matrix[100][100]; // Предполагаем, что n не больше 100
	int firstPositive[100]; // Массив для хранения первых положительных элементов

	// Ввод элементов массива
	cout << "Введите элементы массива:\n";
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> matrix[i][j];
		}
	}

	// Поиск первого положительного элемента в каждом столбце
	for (int j = 0; j < n; ++j) {
		firstPositive[j] = 0; // Инициализация 0 для обозначения отсутствия положительных элементов
		for (int i = 0; i < n; ++i) {
			if (matrix[i][j] > 0) {
				firstPositive[j] = matrix[i][j];
				break; // Выход из внутреннего цикла после нахождения первого положительного элемента
			}
		}
	}

	// Вывод результатов
	cout << "Первые положительные элементы в каждом столбце:\n";
	for (int j = 0; j < n; ++j) {
		cout << "Столбец " << j + 1 << ": " << firstPositive[j] << endl;
	}

	return 0; // Успешное завершение программы
}*/
/*8.Напишите программу, в которой создаётся несколько потоков. 
Каждый поток должен выполнять функцию, которая выводит на экран сообщение 
о своём номере и засыпает на случайное время (1–3  секунды). 
После завершения всех потоков программа должна Выведите сообщение о завершении работы всех потоков.
*/
/*
#include <iostream>
#include <thread>
#include <vector>
#include <chrono>
#include <random>
using namespace std;

const int numThreads = 5; // Количество потоков

void threadFunction(int threadNumber) {
	// Генерация случайного времени ожидания от 1 до 3 секунд
	random_device rd; // Получение случайного числа
	mt19937 gen(rd()); // Инициализация генератора
	uniform_int_distribution<> distr(1, 3); // Определение диапазона

	int sleepTime = distr(gen); // Генерация случайного времени ожидания
	cout << "Поток " << threadNumber << " начинает работу." << endl;
	this_thread::sleep_for(chrono::seconds(sleepTime)); // Ожидание
	cout << "Поток " << threadNumber << " завершил работу после " << sleepTime << " секунд." << endl;
}

int main() {
	setlocale(LC_ALL, "ru");
	thread threads[numThreads]; // Массив для хранения потоков

	// Создание и запуск потоков
	for (int i = 0; i < numThreads; ++i) {
		threads[i] = thread(threadFunction, i + 1); // Создание потока с номером
	}

	// Ожидание завершения всех потоков
	for (int i = 0; i < numThreads; ++i) {
		threads[i].join(); // Присоединение потока к главному потоку
	}

	cout << "Все потоки завершили свою работу." << endl;

	return 0; // Успешное завершение программы
}*/
/*9. Напишите программу, которая создаёт несколько потоков, каждый из 
которых увеличивает общий счётчик на 1, используя мьютекс для защиты критической секции.
*/
/*
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
const int numThreads = 10; // Количество потоков
int counter = 0;           // Общий счетчик
mutex mtx;           // Мьютекс для защиты критической секции

void incrementCounter() {
	for (int i = 0; i < 1000; ++i) { // Каждый поток будет увеличивать счетчик 1000 раз
		lock_guard<mutex> lock(mtx); // Блокировка мьютекса
		++counter; // Увеличение счетчика
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	thread threads[numThreads]; // Массив для хранения потоков

	// Создание и запуск потоков
	for (int i = 0; i < numThreads; ++i) {
		threads[i] = thread(incrementCounter); // Создание потока
	}

	// Ожидание завершения всех потоков
	for (int i = 0; i < numThreads; ++i) {
		threads[i].join(); // Присоединение потока к главному потоку
	}

	// Вывод результата
	cout << "Итоговое значение счетчика: " << counter << endl;

	return 0; // Успешное завершение программы
}
*/
/*10. Напишите программу, где один поток выполняет долгую вычислительную 
операцию и передаёт результат основному потоку с использованием promise и future.*/
/*#include <iostream>
#include <thread>
#include <chrono>
#include <future>
using namespace std;
int longComputation() {
	// Симуляция долгих вычислений
	this_thread::sleep_for(chrono::seconds(3)); // Ожидание 3 секунды
	return 42; // Возвращаем результат вычислений
}

int main() {
	setlocale(LC_ALL, "ru");
	// Создание promise и future
	promise<int> prom; // Promise для передачи результата
	future<int> fut = prom.get_future(); // Получение future из promise

	// Запуск потока, который выполняет долгую операцию
	thread computationThread([&prom]() {
		try {
			int result = longComputation(); // Выполнение долгих вычислений
			prom.set_value(result); // Установка результата в promise
		}
		catch (...) {
			prom.set_exception(current_exception()); // Установка исключения, если оно произошло
		}
		});

	// Основной поток ожидает результат
	cout << "Ожидание результата вычислений...\n";

	int result = fut.get(); // Получение результата из future
	cout << "Результат вычислений: " << result << endl;

	// Ожидание завершения потока
	computationThread.join();

	return 0; // Успешное завершение программы
}*/
/*11. Создайте программу, где каждому потоку передаются два параметра: 
уникальный идентификатор потока и время, на которое он засыпает. 
Используйте случайные значения для времени сна. После завершения каждого потока 
программа должна выводить его уникальный идентификатор и время сна.
*/
/*
#include <iostream>
#include <thread>
#include <chrono>
#include <random>
using namespace std;
void sleepThread(int threadId, int sleepTime) {
	this_thread::sleep_for(chrono::seconds(sleepTime)); // Поток засыпает на заданное время
	cout << "Поток " << threadId << " завершил работу, время сна: " << sleepTime << " секунд." << endl;
}

int main() {
	setlocale(LC_ALL, "ru");
	const int numThreads = 5; // Количество потоков
	thread threads[numThreads]; // Массив для хранения потоков

	// Генерация случайного времени сна от 1 до 5 секунд
	random_device rd; // Получение случайного числа
	mt19937 gen(rd()); // Инициализация генератора
	uniform_int_distribution<> distr(1, 5); // Определение диапазона

	// Создание и запуск потоков
	for (int i = 0; i < numThreads; ++i) {
		int sleepTime = distr(gen); // Генерация случайного времени сна
		threads[i] = thread(sleepThread, i + 1, sleepTime); // Создание потока с уникальным идентификатором и временем сна
	}

	// Ожидание завершения всех потоков
	for (int i = 0; i < numThreads; ++i) {
		threads[i].join(); // Присоединение потока к главному потоку
	}

	return 0; // Успешное завершение программы
}*/
/*12. Напишите программу, которая создаёт два потока для параллельного вычисления 
суммы двух частей одного и того же массива. Основной поток должен собрать результаты 
этих двух потоков и Выведите итоговую сумму.
*/
/*#include <iostream>
#include <thread>
using namespace std;
const int SIZE = 100; // Размер массива
int array[SIZE];      // Исходный массив
int sum1 = 0;        // Сумма первой части
int sum2 = 0;        // Сумма второй части

// Функция для вычисления суммы части массива
void computeSum(int start, int end, int& result) {
	for (int i = start; i < end; ++i) {
		result += array[i];
	}
}

int main() {
setlocale(LC_ALL, "ru");
	// Инициализация массива
	for (int i = 0; i < SIZE; ++i) {
		array[i] = i + 1; // Заполняем массив числами от 1 до SIZE
	}

	// Определяем границы для потоков
	int mid = SIZE / 2;

	// Создаем два потока
	std::thread t1(computeSum, 0, mid, std::ref(sum1));
	std::thread t2(computeSum, mid, SIZE, std::ref(sum2));

	// Ожидаем завершения потоков
	t1.join();
	t2.join();

	// Вычисляем итоговую сумму
	int totalSum = sum1 + sum2;

	// Выводим результат
	std::cout << "Итоговая сумма: " << totalSum << std::endl;

	return 0;
}*/
/*13. Создайте программу, где один поток ожидает завершения другого с 
помощью condition_variable. Один поток выполняет задачу, а второй поток ждёт, 
пока первый завершит выполнение.
*/
/*
#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>
using namespace std;
std::mutex mtx;                          // Мьютекс для защиты данных
std::condition_variable cv;               // Условная переменная
bool isTaskCompleted = false;             // Флаг завершения задачи

// Функция, выполняющая задачу в первом потоке
void task() {
	std::this_thread::sleep_for(std::chrono::seconds(2)); // Имитируем длительную задачу
	std::cout << "Задача выполнена." << std::endl;

	// Блокируем мьютекс и обновляем флаг завершения задачи
	{
		std::lock_guard<std::mutex> lock(mtx);
		isTaskCompleted = true;
	}

	// Уведомляем ожидающий поток
	cv.notify_one();
}

// Функция, которая ожидает завершения задачи
void waitForTask() {
	std::cout << "Ожидание завершения задачи..." << std::endl;

	// Блокируем мьютекс и ждем уведомления
	std::unique_lock<std::mutex> lock(mtx);
	cv.wait(lock, [] { return isTaskCompleted; }); // Ждем, пока isTaskCompleted станет true

	std::cout << "Задача завершена, продолжаем выполнение." << std::endl;
}

int main() {
	setlocale(LC_ALL, "ru");
	// Создаем потоки
	std::thread worker(task);
	std::thread waiter(waitForTask);

	// Ждем завершения потоков
	worker.join();
	waiter.join();

	return 0;
}*/
/*14. Создайте программу, в которой два потока поочерёдно увеличивают один 
и тот же счётчик. Чередование работы должно быть обеспечено с помощью 
мьютекса и переменной состояния. Используйте condition_variable для синхронизации.
*/
/*
#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
using namespace std;
std::mutex mtx;                          // Мьютекс для защиты данных
std::condition_variable cv;               // Условная переменная
int counter = 0;                         // Счётчик
bool turn = true;                        // Переменная состояния (true - первый поток, false - второй поток)

// Функция для первого потока
void incrementFirst() {
	for (int i = 0; i < 5; ++i) { // Каждый поток увеличивает счётчик 5 раз
		std::unique_lock<std::mutex> lock(mtx);
		cv.wait(lock, [] { return turn; }); // Ждем своего хода

		counter++; // Увеличиваем счётчик
		std::cout << "Первый поток: " << counter << std::endl;

		turn = false; // Передаем ход второму потоку
		cv.notify_all(); // Уведомляем всех ожидающих потоков
	}
}

// Функция для второго потока
void incrementSecond() {
	for (int i = 0; i < 5; ++i) { // Каждый поток увеличивает счётчик 5 раз
		std::unique_lock<std::mutex> lock(mtx);
		cv.wait(lock, [] { return !turn; }); // Ждем своего хода

		counter++; // Увеличиваем счётчик
		std::cout << "Второй поток: " << counter << std::endl;

		turn = true; // Передаем ход первому потоку
		cv.notify_all(); // Уведомляем всех ожидающих потоков
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	// Создаем потоки
	std::thread t1(incrementFirst);
	std::thread t2(incrementSecond);

	// Ждем завершения потоков
	t1.join();
	t2.join();

	std::cout << "Итоговое значение счётчика: " << counter << std::endl;

	return 0;
}
*/
/*15. Создать функцию `swap`, которая меняет местами значения двух переменных, 
переданных ей по указателям.
*/
/*
#include <iostream>
using namespace std;
// Функция для обмена значениями двух переменных
void swap(int* a, int* b) {
	int temp = *a; // Сохраняем значение первой переменной во временную
	*a = *b;       // Меняем значение первой переменной на значение второй
	*b = temp;     // Меняем значение второй переменной на временное
}

int main() {
	setlocale(LC_ALL, "ru");
	int x = 5;
	int y = 10;

	std::cout << "До обмена: x = " << x << ", y = " << y << std::endl;

	// Вызываем функцию swap
	swap(&x, &y);

	std::cout << "После обмена: x = " << x << ", y = " << y << std::endl;

	return 0;
}*/
/*16. Используйте передачу параметров по ссылке для изменения 
значений переменных без использования указателей (с использованием ссылок).
*/
/*
#include <iostream>
using namespace std;
// Функция для обмена значениями двух переменных
void swap(int& a, int& b) {
	int temp = a; // Сохраняем значение первой переменной во временную
	a = b;        // Меняем значение первой переменной на значение второй
	b = temp;     // Меняем значение второй переменной на временное
}

int main() {
	setlocale(LC_ALL, "ru");
	int x = 5;
	int y = 10;

	std::cout << "До обмена: x = " << x << ", y = " << y << std::endl;

	// Вызываем функцию swap
	swap(x, y);

	std::cout << "После обмена: x = " << x << ", y = " << y << std::endl;

	return 0;
}*/
/*17. Создайте программу, которая рисует треугольник на экране. 
Используйте прямой доступ к буферу экрана для изменения пикселей.
*/
/*
#include <iostream>
#include <windows.h>
using namespace std;
void drawTriangle(int height) {
	// Получаем дескриптор консоли
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	// Устанавливаем начальные координаты для рисования
	int width = height * 2; // Ширина треугольника
	int startX = (width / 2); // Начальная позиция по X для центрирования

	for (int i = 0; i < height; ++i) {
		// Вычисляем количество пробелов перед символами
		int spaces = startX - i;

		// Устанавливаем курсор в нужное положение
		COORD coord;
		coord.X = 0; // Позиция по X
		coord.Y = i; // Позиция по Y
		SetConsoleCursorPosition(hConsole, coord);

		// Рисуем пробелы
		for (int j = 0; j < spaces; ++j) {
			std::cout << " ";
		}

		// Рисуем символы треугольника
		for (int j = 0; j < (i * 2) + 1; ++j) {
			std::cout << "*";
		}
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	int height;

	std::cout << "Введите высоту треугольника: ";
	std::cin >> height;

	drawTriangle(height);

	// Ждем нажатия клавиши перед выходом
	std::cout << "\nНажмите любую клавишу для выхода...";
	std::cin.ignore();
	std::cin.get();

	return 0;
}*/
/*18. Напишите программу, которая выводит текст "Hello, World!" в консоль. 
Измените цвет текста с помощью функций управления цветом консоли.
*/
/*
#include <iostream>
#include <windows.h>
using namespace std;
void setConsoleColor(int textColor, int bgColor) {
	// Получаем дескриптор консоли
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	// Устанавливаем цвет текста и фона
	SetConsoleTextAttribute(hConsole, (bgColor << 4) | textColor);
}

int main() {
	setlocale(LC_ALL, "ru");
	// Устанавливаем цвет текста (синий) и цвет фона (черный)
	setConsoleColor(1, 0); // 1 - синий текст, 0 - черный фон

	std::cout << "Hello, World!" << std::endl;

	// Возвращаем цвет консоли к стандартному (белый текст на черном фоне)
	setConsoleColor(7, 0); // 7 - белый текст, 0 - черный фон

	return 0;
}*/
/*
19. Создайте программу, которая рисует квадрат на экране. 
Используйте прямой доступ к буферу экрана для изменения пикселей.
*/
/*
#include <iostream>
#include <windows.h>
void drawSquare(int x, int y, int size)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CHAR_INFO squareCharInfo;
	squareCharInfo.Char.AsciiChar = '#';
	squareCharInfo.Attributes = FOREGROUND_RED | FOREGROUND_INTENSITY;
	COORD bufferSize = { 1, 1 };
	COORD bufferCoord = { 0, 0 };
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{

			SMALL_RECT writeRegion = { x + j, y + i, x + j, y + i };
			WriteConsoleOutput(hConsole, &squareCharInfo, bufferSize, bufferCoord, &writeRegion);
		}
	}
}
int main() {
	drawSquare(10, 5, 5);
	return 0;
}*/
/*
20. Реализуйте программу, которая сохраняет текущее состояние буфера 
экрана в массив и восстанавливает его позже.
*/
/*
#include <windows.h>
#include <iostream>
using namespace std;
const int WIDTH = 80;  // Ширина консоли
const int HEIGHT = 25; // Высота консоли

// Функция для сохранения состояния экрана
void saveScreenState(CHAR_INFO* buffer) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD bufferSize = { WIDTH, HEIGHT };
	COORD bufferCoord = { 0, 0 };
	SMALL_RECT readRegion = { 0, 0, WIDTH - 1, HEIGHT - 1 };

	// Читаем содержимое буфера экрана
	ReadConsoleOutput(hConsole, buffer, bufferSize, bufferCoord, &readRegion);
}

// Функция для восстановления состояния экрана
void restoreScreenState(const CHAR_INFO* buffer) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD bufferSize = { WIDTH, HEIGHT };
	COORD bufferCoord = { 0, 0 };
	SMALL_RECT writeRegion = { 0, 0, WIDTH - 1, HEIGHT - 1 };

	// Записываем сохраненное содержимое обратно в буфер экрана
	WriteConsoleOutput(hConsole, buffer, bufferSize, bufferCoord, &writeRegion);
}

int main() {
	setlocale(LC_ALL, "ru");
	CHAR_INFO screenBuffer[WIDTH * HEIGHT];

	// Сохраняем текущее состояние экрана
	saveScreenState(screenBuffer);

	// Очищаем экран и выводим новое сообщение
	system("cls");
	std::cout << "Экран очищен. Нажмите любую клавишу для восстановления..." << std::endl;

	std::cin.get(); // Ожидание ввода от пользователя

	// Восстанавливаем состояние экрана
	restoreScreenState(screenBuffer);

	return 0;
}*/
/*21. Реализуйте программу, которая выводит информацию другим цветом 
(не стандартным цветом), сохраняет текущее состояние буфера экрана на 
2 секунды, после чего выводит сообщение об отчистке буфера консоли, 
после в массив и восстанавливает его после 5 секунд
*/
/*
#include <windows.h>
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
const int WIDTH = 80;  // Ширина консоли
const int HEIGHT = 25; // Высота консоли

// Функция для сохранения состояния экрана
void saveScreenState(CHAR_INFO* buffer) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD bufferSize = { WIDTH, HEIGHT };
	COORD bufferCoord = { 0, 0 };
	SMALL_RECT readRegion = { 0, 0, WIDTH - 1, HEIGHT - 1 };

	// Читаем содержимое буфера экрана
	ReadConsoleOutput(hConsole, buffer, bufferSize, bufferCoord, &readRegion);
}

// Функция для восстановления состояния экрана
void restoreScreenState(const CHAR_INFO* buffer) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD bufferSize = { WIDTH, HEIGHT };
	COORD bufferCoord = { 0, 0 };
	SMALL_RECT writeRegion = { 0, 0, WIDTH - 1, HEIGHT - 1 };

	// Записываем сохраненное содержимое обратно в буфер экрана
	WriteConsoleOutput(hConsole, buffer, bufferSize, bufferCoord, &writeRegion);
}

int main() {
	setlocale(LC_ALL, "ru");
	CHAR_INFO screenBuffer[WIDTH * HEIGHT];

	// Получаем дескриптор консоли
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	// Сохраняем текущее состояние экрана
	saveScreenState(screenBuffer);

	// Устанавливаем цвет текста (например, зеленый)
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	// Выводим сообщение другим цветом
	std::cout << "Это сообщение отображается зеленым цветом." << std::endl;

	// Ждем 2 секунды
	std::this_thread::sleep_for(std::chrono::seconds(2));

	// Очищаем экран и выводим новое сообщение
	system("cls");
	std::cout << "Буфер консоли очищен. Ждите восстановления..." << std::endl;

	// Ждем 5 секунд перед восстановлением состояния экрана
	std::this_thread::sleep_for(std::chrono::seconds(5));

	// Восстанавливаем состояние экрана
	restoreScreenState(screenBuffer);

	return 0;
}*/
/*22. Напишите программу на C++, которая рисует прямоугольник заданного размера 
и цвета в консоли. Программа должна запрашивать у пользователя координаты 
верхнего левого угла, ширину и высоту прямоугольника, а также цвет текста.
*/
/*
#include <windows.h>
#include <iostream>
using namespace std;
void setConsoleColor(int textColor) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, textColor);
}

void drawRectangle(int x, int y, int width, int height, int color) {
	// Устанавливаем цвет текста
	setConsoleColor(color);

	// Рисуем прямоугольник
	for (int i = 0; i < height; ++i) {
		COORD coord;
		coord.X = x; // Устанавливаем координату X
		coord.Y = y + i; // Устанавливаем координату Y

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // Перемещаем курсор
		for (int j = 0; j < width; ++j) {
			std::cout << "*"; // Рисуем символы прямоугольника
		}
	}

	// Возвращаем цвет текста к стандартному
	setConsoleColor(7); // Стандартный белый цвет
}

int main() {
	setlocale(LC_ALL, "ru");
	int x, y, width, height;
	int color;

	std::cout << "Введите координаты верхнего левого угла (x y): ";
	std::cin >> x >> y;

	std::cout << "Введите ширину и высоту прямоугольника: ";
	std::cin >> width >> height;

	std::cout << "Введите цвет текста (0-15): ";
	std::cin >> color;

	// Проверка корректности введенных данных
	if (x < 0 || y < 0 || width <= 0 || height <= 0 || color < 0 || color > 15) {
		std::cerr << "Некорректные входные данные." << std::endl;
		return 1;
	}

	drawRectangle(x, y, width, height, color);

	// Ожидание ввода перед завершением программы
	std::cout << "\nНажмите любую клавишу для выхода...";
	std::cin.ignore(); // Очищаем буфер ввода
	std::cin.get(); // Ожидаем нажатия клавиши

	return 0;
}*/
/*23. Напишите программу на C++, которая анимирует движение символа '*' по экрану.
Символ должен перемещаться из одной стороны экрана в другую, и при достижении
края должен возвращаться обратно.
*/
/*
#include <iostream>
#include <thread>
#include <chrono>
#include <conio.h> // Для _kbhit() и _getch()
using namespace std;
const int WIDTH = 80;  // Ширина консоли
const int HEIGHT = 25; // Высота консоли

void clearScreen() {
	// Очищаем экран
	std::cout << "\x1B[2J\x1B[H"; // ANSI escape codes для очистки экрана и возврата курсора в верхний левый угол
}

void moveCharacter() {
	int position = 0; // Начальная позиция символа
	int direction = 1; // Направление движения (1 - вправо, -1 - влево)

	while (true) {
		clearScreen(); // Очищаем экран

		// Устанавливаем курсор на нужную позицию и выводим символ
		std::cout << std::string(position, ' ') << '*' << std::endl;

		// Изменяем позицию
		position += direction;

		// Проверка достижения края экрана
		if (position >= WIDTH) {
			direction = -1; // Меняем направление на влево
		}
		else if (position < 0) {
			direction = 1; // Меняем направление на вправо
		}

		std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Задержка для анимации

		// Выход из цикла при нажатии клавиши
		if (_kbhit()) {
			break; // Выход из цикла, если нажата клавиша
		}
	}
}

int main() {
	moveCharacter(); // Запускаем анимацию

	return 0;
}*/
/*24. Напишите программу с использованием 3х циклов в которой реализована, таблица соответствия между весом в фунтах и весом в килограммах для значений 1, 2, 3, ... , 10 фунтов (1 фунт = 453 г).
*/
/*#include <iostream>
using namespace std;
int main() {
	int const n = 3;
	int count;
	int mas1[n][n] { { -1, -2, -3 }, { 1, 2, -3 }, { 4, -2, 3 } };
	int mas2[n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (mas1[j][i] >= 0) {
				mas2[i] = mas1[j][i];
				break;
			}

		}
	}
	for (int i = 0; i < n; i++) {
		cout << mas2[i]<<"\t";
	}
	return 0;
}*/

/*№5 
#include <iostream>
using namespace std;
int main() {
	int count = 1;
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			if (i <= count) {
				cout << i << endl;
				count++;
			}
			else break;
		}
		count = 1;
	}
}*/
/*Создайте программу, в которой два потока поочерёдно увеличивают 
один и тот же счётчик. Чередование работы должно быть обеспечено 
с помощью мьютекса и переменной состояния. 
Используйте condition_variable для синхронизации.*/
/*Поток 1 начал работу
Поток 2 ждёт завершения потока 1.
Поток 1 завершил работу.
Поток 2 продолжил работу после завершения потока 1.*/
/*#include <iostream>
#include <thread>//потоки
#include <mutex>//мьютекс
#include <condition_variable>//перменная синхронизации
#include <atomic>//свойство атомарности не обязательная в варианте 1
#include <chrono>//время не обязательная для варианта 1
using namespace std;
mutex mtx;//объявление переменной мьютекса
condition_variable cv;//объяление переменной синхронизации
//bool ready = false;//флаг готовности работы потока 1
atomic<bool> ready(false);// атомарный флаг готовности 2
//1 метод работы потока
/*void work() {
	cout << "Поток 1 начал работа \n";
	this_thread::sleep_for(chrono::seconds(5));//имитация работы потока, время ожидания работы потока
	{
		lock_guard<mutex>lock(mtx);//захват мьютекса
		ready = true;//установка флага готовности
		
	}
	cv.notify_one();//оповещение второго потока
	cout << "Работа потока 1 завершена\n";
}
//2 
void work() {
	cout << "Поток 1 начал работа \n";
	this_thread::sleep_for(chrono::seconds(5));
	ready.store(true);//устанавливаем флаг готовности
	cout << "Работа потока 1 завершена\n";
}
// ожидание потока
void wait() {
	cout << "Поток 2 ждёт завершения работы потока 1 \n";
	unique_lock<mutex> lock(mtx);//захват мьютекса 1
	//cv.wait(lock, [] {return ready; });// ожидание пока флаг не станет true 1
	while (!ready.load()) { // ожидание пока флаг не станет true 2
		this_thread::yield();//Позволяем выполнятся другим потокам
	}
	cout << "Поток 2  завершил работу после потока 1 \n";
}
int main() {
	setlocale(LC_ALL, "ru");
	thread thread1(work);//рабочий поток
	thread thread2(wait);//ожидающий поток
	thread2.join();//ждём завершения потока ожидания
	thread1.join();//ждём завершения рабочего потока
	return 0;
}

*/
