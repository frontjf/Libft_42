# Explicación de Funciones en C

---

## ft_isalpha

La función `isalpha` verifica si un carácter es una letra del alfabeto (tanto mayúsculas como minúsculas).

### Ejemplo Práctico

Puedes usar `isalpha` para validar que una entrada de usuario contiene solo letras, por ejemplo, en un campo de nombre en un formulario.

---

## ft_ isdigit

La función `isdigit` verifica si un carácter es un dígito decimal (0-9).

### Ejemplo Práctico

Útil para validar que una entrada de usuario es un número, como en el caso de un campo de número de teléfono.

---

## ft_isalnum

La función `isalnum` verifica si un carácter es alfanumérico, es decir, una letra o un dígito.

### Ejemplo Práctico

Puedes usar `isalnum` para asegurar que una contraseña contiene solo caracteres alfanuméricos.

---

## ft_isascii

La función `isascii` verifica si un carácter pertenece al conjunto de caracteres ASCII.

### Ejemplo Práctico

Puedes usar `isascii` para validar que una entrada de texto contiene solo caracteres ASCII, garantizando compatibilidad básica.

---

## ft_isprint

La función `isprint` verifica si un carácter es imprimible, incluyendo espacio.

### Ejemplo Práctico

Útil para filtrar caracteres no imprimibles de una entrada de texto antes de mostrarla en pantalla.

---

## ft_strlen

La función `strlen` calcula la longitud de una cadena de caracteres.

### Ejemplo Práctico

Puedes usar `strlen` para determinar cuántos caracteres ha ingresado un usuario en un campo de texto y validar la longitud mínima o máxima permitida.

---

## ft_memset

La función `memset` llena un bloque de memoria con un valor específico.

### Ejemplo Práctico

Puedes usar `memset` para inicializar un array a un valor determinado antes de su uso.

---

## ft_bzero

La función `bzero` pone a cero un bloque de memoria.

### Ejemplo Práctico

Útil para inicializar buffers a cero antes de su uso para evitar residuos de datos anteriores.

---

## ft_memcpy

La función `memcpy` copia un bloque de memoria de una ubicación a otra.

### Ejemplo Práctico

Puedes usar `memcpy` para duplicar datos en memoria, como copiar el contenido de un archivo a un buffer.

---

## ft_memmove

La función `memmove` copia un bloque de memoria de una ubicación a otra, manejando correctamente solapamientos.

### Ejemplo Práctico

Útil para mover datos dentro del mismo array sin corromperlos, como al implementar un algoritmo de compresión de datos.

---

## ft_strlcpy

La función `strlcpy` copia una cadena a otra asegurando la terminación nula y evitando desbordamientos.

### Ejemplo Práctico

Puedes usar `strlcpy` para copiar con seguridad una cadena a un buffer asegurándote de no sobrepasar el tamaño del buffer.

---

## ft_strlcat

La función `strlcat` concatena dos cadenas asegurando la terminación nula y evitando desbordamientos.

### Ejemplo Práctico

Útil para concatenar con seguridad dos cadenas sin sobrepasar el tamaño del buffer de destino.

---

## ft_toupper

La función `toupper` convierte una letra minúscula a mayúscula.

### Ejemplo Práctico

Puedes usar `toupper` para normalizar una entrada de texto convirtiendo todas las letras a mayúsculas.

---

## ft_tolower

La función `tolower` convierte una letra mayúscula a minúscula.

### Ejemplo Práctico

Útil para normalizar una entrada de texto convirtiendo todas las letras a minúsculas.

---

## ft_strchr

La función `strchr` busca la primera aparición de un carácter en una cadena.

### Ejemplo Práctico

Puedes usar `strchr` para localizar un carácter específico en una cadena, como buscar un delimitador en una cadena de texto.

---

## ft_strrchr

La función `strrchr` busca la última aparición de un carácter en una cadena.

### Ejemplo Práctico

Útil para encontrar la última aparición de un delimitador en una ruta de archivo para extraer el nombre del archivo.

---

## ft_strncmp

La función `strncmp` compara dos cadenas hasta un número determinado de caracteres.

### Ejemplo Práctico

Puedes usar `strncmp` para comparar los primeros n caracteres de dos cadenas, útil en la ordenación de cadenas.

---

## ft_memchr

La función `memchr` busca la primera aparición de un carácter en un bloque de memoria.

### Ejemplo Práctico

Útil para encontrar un valor específico en un array de bytes, como buscar un byte de terminación en un protocolo de red.

---

## ft_memcmp

La función `memcmp` compara dos bloques de memoria.

### Ejemplo Práctico

Puedes usar `memcmp` para verificar si dos bloques de datos son iguales, útil en la validación de datos.

---

## ft_strnstr

La función `strnstr` busca la primera aparición de una subcadena en una cadena, hasta un número determinado de caracteres.

### Ejemplo Práctico

Útil para buscar una subcadena dentro de una cadena con un límite de búsqueda, como en la búsqueda parcial de palabras clave.

---

## ft_atoi

La función `ft_atoi` convierte una cadena de caracteres que representa un número en un entero. La función ignora espacios iniciales, maneja signos y convierte los dígitos consecutivos en un valor entero.

### Ejemplo Práctico

Puedes usar `ft_atoi` para convertir cadenas de texto que contienen números a valores enteros, lo cual es útil cuando lees datos numéricos de archivos o entradas de usuario.

---

## ft_calloc

La función `calloc` asigna memoria para un array de elementos e inicializa todos sus bytes a cero.

### Ejemplo Práctico

Puedes usar `calloc` para asignar memoria para un array de estructuras y asegurarte de que todos los campos están inicializados a cero.

---

## ft_strdup

La función `strdup` duplica una cadena, asignando la memoria necesaria.

### Ejemplo Práctico

Útil para crear una copia de una cadena dinámica que puedes modificar sin alterar la original.

---

## ft_substr

`substr` crea una nueva cadena que es una subcadena de la cadena dada, comenzando en un índice especificado y con una longitud determinada. Si el índice de inicio es mayor que la longitud de la cadena original, devuelve una cadena vacía.

### Ejemplo practico

Si tienes un texto largo y necesitas solo una parte específica, ft_substr te permite extraer esa parte de manera eficiente. Por ejemplo, puedes extraer una vista previa de un artículo a partir de su contenido completo.

---

## ft_strjoin

`strjoin` concatena dos cadenas de caracteres (`s1` y `s2`) en una nueva cadena. La nueva cadena contiene primero todos los caracteres de `s1`, seguidos de todos los caracteres de `s2`. La función maneja la memoria necesaria para la nueva cadena y se asegura de añadir un carácter nulo al final para marcar el final de la cadena.

### Ejemplo Práctico

Si necesitas combinar dos partes de un mensaje en una sola cadena, como unir un nombre y un apellido para crear un nombre completo, `ft_strjoin` proporciona una forma eficiente de hacerlo. Por ejemplo, podrías usarlo para construir un saludo completo a partir de un saludo base y un nombre específico.

---

## ft_strtrim

`strtrim` elimina los caracteres específicos, presentes en la cadena `set`, desde el principio y el final de la cadena `s1`. La función recorta `s1` para que solo queden los caracteres que no están en `set`, devolviendo una nueva cadena que contiene solo esos caracteres internos.

### Ejemplo Práctico

Este método es útil cuando deseas limpiar una cadena de caracteres no deseados en sus bordes, como al procesar datos de entrada del usuario donde podrías necesitar eliminar espacios en blanco o caracteres de puntuación no relevantes. Por ejemplo, podrías usarlo para preparar una entrada de usuario para un análisis posterior, asegurándote de que no haya espacios en blanco antes o después de la información relevante.

Si aplicas ft_strtrim a la cadena "***camión***" con el conjunto de caracteres '*', el resultado sería "camión". Los caracteres '*' en los extremos de la cadena se eliminan, pero los caracteres internos, como los acentos, se mantienen intactos.

---

## ft_split

`split` divide una cadena de caracteres `s` en subcadenas basadas en un delimitador `c`. La función devuelve un array de cadenas donde cada elemento es una subcadena de `s` que no contiene el delimitador `c`. La última posición del array es `NULL`, indicando el final del conjunto de subcadenas.

### Ejemplo Práctico

Este método es útil para procesar texto delimitado, como al analizar una lista de palabras separadas por comas o espacios en una entrada del usuario. Por ejemplo, podrías usar `split` para dividir una línea de texto en una serie de palabras para realizar operaciones adicionales en cada palabra individualmente.

Imagina que tienes la cadena de texto `"hola que tal"` y quieres separarla en palabras individuales. Al usar `split` con el delimitador `' '`, obtendrás un array de cadenas que contiene `"hola"`, `"que"`, y `"tal"`. Este método es útil para procesar listas de palabras o tokens en una entrada de texto.

---

## ft_itoa

`ft_itoa` convierte un número entero n en una cadena de caracteres. La función maneja números negativos y el valor cero, devolviendo una representación en cadena del número proporcionado.

### Ejemplo Práctico

Esta función es útil para cualquier situación donde necesites convertir un número entero a su representación en cadena, como al mostrar puntuaciones en un juego, generar informes numéricos para interfaces de usuario, o guardar valores numéricos en archivos de texto.

Imagina que tienes el número entero `12345` y necesitas mostrarlo en una interfaz de usuario como texto. Al usar `ft_itoa`, el número `12345` se convierte en la cadena "12345", lo que facilita su visualización o manipulación como texto. Esta conversión es crucial para mostrar información numérica en muchas aplicaciones, desde informes hasta interfaces gráficas.

---

## ft_strmapi

`ft_strmapi` aplica una función f a cada carácter de la cadena s para crear una nueva cadena. La función f recibe dos parámetros: el índice del carácter actual en la cadena y el propio carácter. La nueva cadena, resultante de aplicar f a cada carácter, se devuelve al final.

### Ejemplo Práctico

Esta función es útil para transformar cadenas de texto aplicando una operación específica a cada carácter. Por ejemplo, podrías usar `ft_strmapi` para encriptar una cadena, transformar caracteres a mayúsculas o minúsculas en función de su posición, o cualquier otra operación que dependa tanto del carácter como de su posición en la cadena.

Imagina que tienes la cadena "hello" y deseas crear una nueva cadena donde cada carácter sea convertido a mayúscula y desplazado en el alfabeto en función de su posición. Usando `ft_strmapi`, puedes aplicar una función que convierta "hello" en una cadena como "IGOMQ", dependiendo de la lógica definida en f. Este tipo de transformación es útil en contextos de manipulación de texto y encriptación.

---

## ft_striteri

`ft_striteri` aplica una función f a cada carácter de la cadena s. La función f recibe dos parámetros: el índice del carácter actual en la cadena y un puntero al carácter. A diferencia de `ft_strmapi`, esta función modifica la cadena original en lugar de crear una nueva.

### Ejemplo Práctico

Esta función es útil cuando necesitas modificar cada carácter de una cadena en su lugar, basándote en su posición. Por ejemplo, podrías usar `ft_striteri` para cambiar caracteres a mayúsculas si su posición es par o a minúsculas si su posición es impar.

Imagina que tienes la cadena "HeLLo WoRLd" y deseas alternar la capitalización de los caracteres en función de su posición. Usando `ft_striteri`, puedes aplicar una función que transforme "HeLLo WoRLd" en "HeLlO wOrLd". Este tipo de transformación es útil para tareas de procesamiento y manipulación de texto.

---

## ft_putchar_fd

`ft_putchar_fd` escribe un carácter c en el descriptor de archivo fd. Este descriptor puede ser un archivo, una salida estándar como la consola, o incluso una redirección a un archivo o dispositivo.

### Ejemplo Práctico

Esta función es útil cuando necesitas imprimir un carácter específico a una salida determinada, como un archivo o la consola. Por ejemplo, podrías usar `ft_putchar_fd` para imprimir caracteres a un archivo de registro o a la salida de errores estándar.

Imagina que estás implementando una función de registro y necesitas escribir mensajes a un archivo de log. Usando `ft_putchar_fd`, puedes enviar caracteres al archivo de log, asegurando que cada mensaje se escribe correctamente a la ubicación deseada. Este tipo de funcionalidad es fundamental para el manejo preciso y controlado de la salida en aplicaciones avanzadas.

---

## ft_putstr_fd

`ft_putstr_fd` escribe una cadena de caracteres en un descriptor de archivo especificado. Si la cadena es nula, no realiza ninguna acción.

### Ejemplo Práctico

Este método es útil para enviar texto a archivos o a la salida estándar. Por ejemplo, podrías usar `ft_putstr_fd` para imprimir mensajes en la consola o para guardar información en un archivo de registro.

Si tienes un archivo llamado "log.txt" y quieres registrar el mensaje "Inicio del proceso" en él, abrirías el archivo con el descriptor adecuado y llamarías a ft_putstr_fd("Inicio del proceso", fd), donde fd es el descriptor del archivo. Esto resultará en la escritura de "Inicio del proceso" en "log.txt".

---

## ft_putendl_fd

`ft_putendl_fd` escribe una cadena de caracteres en un descriptor de archivo especificado, seguida de una nueva línea. Si la cadena es nula, no realiza ninguna acción.

### Ejemplo Práctico

Este método es útil para imprimir mensajes en la consola o en archivos de log, asegurando que cada mensaje se termine con una nueva línea. Por ejemplo, si quieres registrar el mensaje "Error encontrado" en un archivo de log, y deseas que cada entrada esté en una línea separada, usarías ft_putendl_fd("Error encontrado", fd), donde fd es el descriptor del archivo. Esto resultará en la escritura de "Error encontrado\n" en el archivo, asegurando que el mensaje esté seguido de una nueva línea.

---

## ft_putnbr_fd

`ft_putnbr_fd` escribe un número entero en un descriptor de archivo especificado. Si el número es negativo, se imprime el signo menos antes del número, y si el número es el valor mínimo para un entero de 32 bits, se maneja como un caso especial para evitar errores.

### Ejemplo Práctico

Este método es útil para imprimir valores numéricos en archivos de registro o en la salida estándar, como la consola. Por ejemplo, si deseas registrar el número 12345 en un archivo de log, usarías ft_putnbr_fd(12345, fd), donde fd es el descriptor del archivo. Esto resultará en la escritura de "12345" en el archivo. Si quieres imprimir el número -789 en el archivo, usarías ft_putnbr_fd(-789, fd), que imprimirá "-789".

