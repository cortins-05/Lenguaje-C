/*
Parámetros -> Abrir el archivo en modo:

r -> Lectura. El archivo debe exister
w -> Escritura. Si el archivo no existe, se crea, si existe, se sobreescribe
a -> Escritura al final del documento. Si ni existe se crea.
rb -> Binario. Para lectura.
r+ -> Lectura y escritura. El archivo debe existir.
w+ -> Crea un archivo para escritura. Si existe se sobreescribe.
rb+ -> Binario. Para actualización (lecuta y escritura).

fputc(Caracter, ApuntadorArchivo) es una función que nos permite escribir un caracter en el archivo, regresa el caracter que se presionó en caso de que la operacion se realice con exito
o EOF si falló. El puntero es el que nos brinda la función fopen()

fclose(ApuntadorArchivo) guarda los cambios en el archivo, cierra la conexión y
libera los recursos usados por el puntero

