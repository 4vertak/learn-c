#include <stdio.h>
int main ()
{
    int a, b, c; // обьявление переменных
    printf("Введите два целых числа \n"); // подсказка для ввода
    scanf("%d%d", &a, &b ); // ввод данных
    /*Формат ввода – это строка в кавычках, в которой перечислены один или несколько
форматов ввода данных:
%d ввод целого числа (переменная типа int)
%f ввод вещественного числа (переменная типа float)
%с ввод одного символа (переменная типа char)
    После формата ввода через запятую перечисляются адреса ячеек памяти, в которые на-
до записать введенные значения. Почувствуйте разницу:
a значение переменной a
&a адрес переменной a
    Количество форматов в строке должно быть равно количеству адресов переменных в
списке. Кроме того, тип переменных должен совпадать с указанным: например, если a
и b – целые переменные, то следующие вызовы функций ошибочны
scanf ( "%d%d", &a ); куда записывать второе введенное число?
scanf ( "%d%d", &a, &b, &c ); не задан формат для переменной c
scanf ( "%f%f", &a, &b ); нельзя вводить целые переменные по ве-
щественному формату*/
    
    c = a + b; // вычисления (оператор присваивания)
    /*Для вычислений используют оператор присваивания, в котором
o справа от знака равенства стоит арифметическое выражение, которое надо вычислить
o слева от знака равенства ставится имя переменной, в которую надо записать результат:
      c = a + b; // сумму a и b записать в c*/

    printf("Результат: %d + %d = %d \n", a, b, c); // вывод результата
    /*Для вывода чисел и значений переменных на экран используют функцию printf 
содержание скобок при вызове функции printf очень похоже на функцию scanf
    Сначала идет символьная строка — формат вывода — в которой можно использовать
специальные символы
%d вывод целого числа
%f вывод вещественного числа
%с вывод одного символа
%s вывод символьной строки
\n переход в начало новой строки
все остальные символы (кроме некоторых других специальных команд) просто выво-
дятся на экран.
    Одной строки формата недостаточно: в ней сказано, в какое место выводить данные, но
не сказано, откуда их взять. Поэтому через запятую после формата вывода надо поста-
вить список чисел или переменных, значения которых надо вывести, при этом можно
сразу проводить вычисления.*/

    getchar();
}