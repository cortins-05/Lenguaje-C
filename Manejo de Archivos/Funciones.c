/*
	Nombre		Función
	
	fopen() 	Abre un archivo
	fclose() 	Cierra un archivo
	fgets()		Leer una cadena de un archivo
	fputs()		Escribe una cadena en un archivo
	fseek()		Busca un byte especifico en un archivo
	fprintf()	Escribe una salida con formato en el archivo
	fscanf()	Escribe una entrada con formato desde el archivo
	feof()		Devuelve True si se llega al final del archivo
	ferror() 	Devuelve True si se produce un error
	rewind()	Coloca el localizador de posicion del archivo al principio del mismo
	remove()	Borra el archivo
	fflush() 	Vacía el archivo
	
//! Hay dos tipos de archivos, archivos de texto y archivos binarios


1.Un archivo de texto es una secuencia de caracteres organizadas en lineas
  terminadas por un caracter de nueva linea. En estos archivos se pueden almacenar canciones
  fuentes de programas, base de datos simples, etc.
  Los archivos de texto se caracterizan por ser planos, es decir, todas las letras tienen
  el mismo formato y no hay palabras subrayadas, en negrita, o letras de distinto tamaño o ancho
  
2.Un archivo binario es una secuencia de bytes que tienen una correspondencia uno a uno con un dispositivo externo
  Asi que no tendra lugar ninguna traduccion de caracteres
  Además el numero de bytes escritos (leidos) sera el mismo que los encontrados en el dispositivo externo
  Ejemplos de estos archivos son Fotografías, imágenes, texto con formatos, archivos ejecutables (aplicaciones) etc.
