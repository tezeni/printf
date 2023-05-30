#include <stdarg.h>
#include"main.h"


int print_string(char *string){

  int count = 0;
  int i;


  for ( i = 0; string[i] != '\0'; i++){

    count += _putchar(string[i]);

  }



  return (count);

}


int _printf(const char *format, ...){

  int count = 0, i;

  

  va_list data;

  va_start(data, format);



  /* _printf("%s", 'Hello') */

  

  for (i = 0; format[i] != '\0'; ){

    

    /* count the number of characters */

    /* print to the screen each character counted */

    if (format[i] != '%'){

      count += _putchar(format[i]);

      i++;

    }
    else if (format[i] == '%' && format[i+1] !=' '){

      switch (format[i + 1]){

        case 'c':

            /* print the character from the va_arguments */

            count += _putchar(va_arg(data, int));

            break;

        case 's':

            count += print_string(va_arg(data, char *));

            break;

        case '%':

            /* print the character from the va_arguments */

            count += _putchar('%');

            break;
	default:

            break;
      }
      i += 2;

    }





  }
 return (count);
}
