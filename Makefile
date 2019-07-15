CodigoFuente = lab3.c
NombreEjecutable = lab3.exe

All:
	@echo "Compilando $(CodigoFuente)..."
	gcc $(CodigoFuente) -o $(NombreEjecutable)
	@echo "OK!"
	@echo "Ejecutable: $(NombreEjecutable)"
	@echo "Para ejecutar: ./lab3.exe -u subida -d bajada -o ordinario -n pisos -e ascensores -b"