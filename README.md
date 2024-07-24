# Explicación de Funciones en C

---

# FT_ISALPHA

La función `ft_isalpha` verifica si un carácter es una letra del alfabeto (tanto mayúsculas como minúsculas).

## Ejemplo Práctico

Puedes usar `ft_isalpha` para validar que una entrada de usuario contiene solo letras, por ejemplo, en un campo de nombre en un formulario.

---

# FT_ISDIGIT

La función `ft_isdigit` verifica si un carácter es un dígito decimal (0-9).

## Ejemplo Práctico

Útil para validar que una entrada de usuario es un número, como en el caso de un campo de número de teléfono.

---

# FT_ISALNUM

La función `ft_isalnum` verifica si un carácter es alfanumérico, es decir, una letra o un dígito.

## Ejemplo Práctico

Puedes usar `ft_isalnum` para asegurar que una contraseña contiene solo caracteres alfanuméricos.

---

# FT_ISASCII

La función `ft_isascii` verifica si un carácter pertenece al conjunto de caracteres ASCII.

## Ejemplo Práctico

Puedes usar `ft_isascii` para validar que una entrada de texto contiene solo caracteres ASCII, garantizando compatibilidad básica.

---

# FT_ISPRINT

La función `ft_isprint` verifica si un carácter es imprimible, incluyendo espacio.

## Ejemplo Práctico

Útil para filtrar caracteres no imprimibles de una entrada de texto antes de mostrarla en pantalla.

---

# FT_STRLEN

La función `ft_strlen` calcula la longitud de una cadena de caracteres.

## Ejemplo Práctico

Puedes usar `ft_strlen` para determinar cuántos caracteres ha ingresado un usuario en un campo de texto y validar la longitud mínima o máxima permitida.

---

# FT_MEMSET

La función `ft_memset` llena un bloque de memoria con un valor específico.

## Ejemplo Práctico

Puedes usar `ft_memset` para inicializar un array a un valor determinado antes de su uso.

---

# FT_BZERO

La función `ft_bzero` pone a cero un bloque de memoria.

## Ejemplo Práctico

Útil para inicializar buffers a cero antes de su uso para evitar residuos de datos anteriores.

---

# FT_MEMCPY

La función `ft_memcpy` copia un bloque de memoria de una ubicación a otra.

## Ejemplo Práctico

Puedes usar `ft_memcpy` para duplicar datos en memoria, como copiar el contenido de un archivo a un buffer.

---

# FT_MEMMOVE

La función `ft_memmove` copia un bloque de memoria de una ubicación a otra, manejando correctamente solapamientos.

## Ejemplo Práctico

Útil para mover datos dentro del mismo array sin corromperlos, como al implementar un algoritmo de compresión de datos.

---

# FT_STRLCPY

La función `ft_strlcpy` copia una cadena a otra asegurando la terminación nula y evitando desbordamientos.

## Ejemplo Práctico

Puedes usar `ft_strlcpy` para copiar con seguridad una cadena a un buffer asegurándote de no sobrepasar el tamaño del buffer.

---

# FT_STRLCAT

La función `ft_strlcat` concatena dos cadenas asegurando la terminación nula y evitando desbordamientos.

## Ejemplo Práctico

Útil para concatenar con seguridad dos cadenas sin sobrepasar el tamaño del buffer de destino.

---

# FT_TOUPPER

La función `ft_toupper` convierte una letra minúscula a mayúscula.

## Ejemplo Práctico

Puedes usar `ft_toupper` para normalizar una entrada de texto convirtiendo todas las letras a mayúsculas.

---

# FT_TOLOWER

La función `ft_tolower` convierte una letra mayúscula a minúscula.

## Ejemplo Práctico

Útil para normalizar una entrada de texto convirtiendo todas las letras a minúsculas.

---

# FT_STRCHR

La función `ft_strchr` busca la primera aparición de un carácter en una cadena.

## Ejemplo Práctico

Puedes usar `ft_strchr` para localizar un carácter específico en una cadena, como buscar un delimitador en una cadena de texto.

---

# FT_STRRCHR

La función `ft_strrchr` busca la última aparición de un carácter en una cadena.

## Ejemplo Práctico

Útil para encontrar la última aparición de un delimitador en una ruta de archivo para extraer el nombre del archivo.

---

# FT_STRNCMP

La función `ft_strncmp` compara dos cadenas hasta un número determinado de caracteres.

## Ejemplo Práctico

Puedes usar `ft_strncmp` para comparar los primeros n caracteres de dos cadenas, útil en la ordenación de cadenas.

---

# FT_MEMCHR

La función `ft_memchr` busca la primera aparición de un carácter en un bloque de memoria.

## Ejemplo Práctico

Útil para encontrar un valor específico en un array de bytes, como buscar un byte de terminación en un protocolo de red.

---

# FT_MEMCMP

La función `ft_memcmp` compara dos bloques de memoria.

## Ejemplo Práctico

Puedes usar `ft_memcmp` para verificar si dos bloques de datos son iguales, útil en la validación de datos.

---

# FT_STRNSTR

La función `ft_strnstr` busca la primera aparición de una subcadena en una cadena, hasta un número determinado de caracteres.

## Ejemplo Práctico

Útil para buscar una subcadena dentro de una cadena con un límite de búsqueda, como en la búsqueda parcial de palabras clave.

---

# FT_CALLOC

La función `ft_calloc` asigna memoria para un array de elementos e inicializa todos sus bytes a cero.

## Ejemplo Práctico

Puedes usar `ft_calloc` para asignar memoria para un array de estructuras y asegurarte de que todos los campos están inicializados a cero.

---

# FT_STRDUP

La función `ft_strdup` duplica una cadena, asignando la memoria necesaria.

## Ejemplo Práctico

Útil para crear una copia de una cadena dinámica que puedes modificar sin alterar la original.

---

## FT_SUBSTR

ft_substr crea una nueva cadena que es una subcadena de la cadena dada, comenzando en un índice especificado y con una longitud determinada. Si el índice de inicio es mayor que la longitud de la cadena original, devuelve una cadena vacía.

# Ejemplo practico

Si tienes un texto largo y necesitas solo una parte específica, ft_substr te permite extraer esa parte de manera eficiente. Por ejemplo, puedes extraer una vista previa de un artículo a partir de su contenido completo.

---

# FT_STRJOIN

`ft_strjoin` concatena dos cadenas de caracteres (`s1` y `s2`) en una nueva cadena. La nueva cadena contiene primero todos los caracteres de `s1`, seguidos de todos los caracteres de `s2`. La función maneja la memoria necesaria para la nueva cadena y se asegura de añadir un carácter nulo al final para marcar el final de la cadena.

### Ejemplo Práctico

Si necesitas combinar dos partes de un mensaje en una sola cadena, como unir un nombre y un apellido para crear un nombre completo, `ft_strjoin` proporciona una forma eficiente de hacerlo. Por ejemplo, podrías usarlo para construir un saludo completo a partir de un saludo base y un nombre específico.

---

# FT_STRTRIM

`ft_strtrim` elimina los caracteres específicos, presentes en la cadena `set`, desde el principio y el final de la cadena `s1`. La función recorta `s1` para que solo queden los caracteres que no están en `set`, devolviendo una nueva cadena que contiene solo esos caracteres internos.

### Ejemplo Práctico

Este método es útil cuando deseas limpiar una cadena de caracteres no deseados en sus bordes, como al procesar datos de entrada del usuario donde podrías necesitar eliminar espacios en blanco o caracteres de puntuación no relevantes. Por ejemplo, podrías usarlo para preparar una entrada de usuario para un análisis posterior, asegurándote de que no haya espacios en blanco antes o después de la información relevante.

Si aplicas ft_strtrim a la cadena "***camión***" con el conjunto de caracteres '*', el resultado sería "camión". Los caracteres '*' en los extremos de la cadena se eliminan, pero los caracteres internos, como los acentos, se mantienen intactos.

---

# FT_SPLIT

`ft_split` divide una cadena de caracteres `s` en subcadenas basadas en un delimitador `c`. La función devuelve un array de cadenas donde cada elemento es una subcadena de `s` que no contiene el delimitador `c`. La última posición del array es `NULL`, indicando el final del conjunto de subcadenas.

### Ejemplo Práctico

Este método es útil para procesar texto delimitado, como al analizar una lista de palabras separadas por comas o espacios en una entrada del usuario. Por ejemplo, podrías usar `ft_split` para dividir una línea de texto en una serie de palabras para realizar operaciones adicionales en cada palabra individualmente.

Imagina que tienes la cadena de texto `"hola que tal"` y quieres separarla en palabras individuales. Al usar `ft_split` con el delimitador `' '`, obtendrás un array de cadenas que contiene `"hola"`, `"que"`, y `"tal"`. Este método es útil para procesar listas de palabras o tokens en una entrada de texto.

---


