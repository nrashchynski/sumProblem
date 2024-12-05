## Задача 0.8. Задача о сумме
    
        Имя входного файла: стандартный ввод
        Имя выходного файла: стандартный вывод
            Ограничение по времени: 2 с    
            Ограничение по памяти: 256 МБ
        
Рассмотрим следующую модельную задачу. Изначально дана последовательность чисел A длины n (индексация с нуля):

a0, a1, a2, ... , a{n-1}.

Поступают запросы двух типов.
Запрос модификации. Задан индекс i и число x. Нужно прибавить к i-му элементу число x.
Запрос суммы. Задана пара индексов l и r. Нужно вычислить сумму элементов на полуинтервале [l, r), т. е. a{l} + a{l+1} + ... + a{r - 1}, и вернуть результат.
Формат входных данных: 
В первой строке записано целое число n — количество элементов массива ($1 \le n \le 300\,000$).Во второй строке записаны n целых чисел a{i} ($-10^9 \le a_i \le 10^9$).В третьей строке записано целое число q — количество запросов ($1 \le q \le 300\,000$).Каждая из следующих q строк задаёт один запрос. Если это запрос модификации, то в строке записано слово Add, затем индекс i ($0 \le i < n$) и число x ($-10^9 \le x \le 10^9$). Если это запрос суммы, то он задаётся словом FindSum и двумя индексами l и r ($0 \le l < r \le n$) — границами полуинтервала. 
Формат выходных данных:
Для каждого запроса второго типа выведите в отдельной строке сумму элементов на соответствующем полуинтервале.
