/*
Par�metros -> Abrir el archivo en modo:

r -> Lectura. El archivo debe exister
w -> Escritura. Si el archivo no existe, se crea, si existe, se sobreescribe
a -> Escritura al final del documento. Si ni existe se crea.
rb -> Binario. Para lectura.
r+ -> Lectura y escritura. El archivo debe existir.
w+ -> Crea un archivo para escritura. Si existe se sobreescribe.
rb+ -> Binario. Para actualizaci�n (lecuta y escritura).

fputc(Caracter, ApuntadorArchivo) es una funci�n que nos permite escribir un caracter en el archivo, regresa el caracter que se presion� en caso de que la operacion se realice con exito
o EOF si fall�. El puntero es el que nos brinda la funci�n fopen()

fclose(ApuntadorArchivo) guarda los cambios en el archivo, cierra la conexi�n y
libera los recursos usados por el puntero

