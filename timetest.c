#include <stdio.h>
#include <time.h>

int main()

{

    time_t rawtime;

    struct tm* timeinfo;

  

    // Используется для хранения времени

    // возвращается функцией localetime ()

    char buffer[80];

  

    time(&rawtime);

    timeinfo = localtime(&rawtime);

    strftime(buffer, 80,

             "Time is %I:%M%p.",

             timeinfo);

  

    // функция strftime () сохраняет

    // текущее время как часы: минуты

    //% I% M и% p-> спецификатор формата

    // Часов минут и утра / вечера соответственно * /

  

    // печатает отформатированное время

    puts(buffer);

  

    return 0;

}
