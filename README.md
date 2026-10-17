# Taquilla del cine

Programa en C++ que calcula la tarifa de entrada al cine según la edad.

## ¿Cómo funciona?
1. El programa pide la edad con `cin`.
2. Valida primero la edad con el operador lógico `||`: si es menor que 0 o mayor que 120, muestra "Edad invalida".
3. Si es válida, usa `else if`:
   - Menores de 12 años: RD$100
   - De 12 a 59 años: RD$250
   - De 60 años en adelante: RD$150

## Pruebas realizadas
- 11 -> RD$100
- 12 -> RD$250
- 59 -> RD$250
- 60 -> RD$150
- -3 -> Edad invalida

## Autor
Junior Ivón José Jean - Matrícula 2026-1655
