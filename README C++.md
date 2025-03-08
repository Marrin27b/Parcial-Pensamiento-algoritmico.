# Tributo al Tesoro Real

*Proyecto en C++ que calcula el tributo a pagar al tesoro real basado en el ingreso anual en monedas de oro.*

## Requisitos

•⁠  ⁠*Compilador de C++:*  
  Ejemplo: g++, cualquier otro compilador compatible o un compilador web como GBD.
•⁠  ⁠*Sistema Operativo:*  
  Windows, Linux o macOS.

## Funcionalidad

•⁠  ⁠*Entrada:*  
  - Solicita el ingreso con ⁠ cin >> ingreso ⁠.

•⁠  ⁠*Lógica Condicional:*  
  - *Ingreso negativo:*  
    - Muestra "¿Cómo vas a ganar monedas negativas?" y asigna tributo 0.
  - *Ingreso ≤ 10,000:*  
    - El tributo es 0.
  - *Ingreso > 10,000 y ≤ 50,000:*  
    - Cobra el 10% del excedente sobre 10,000.
  - *Ingreso > 50,000:*  
    - Aplica un impuesto fijo de 4,000 monedas más el 20% del excedente sobre 50,000.

## Compilación y Ejecución

•⁠  ⁠*Compilación:*  
  - Se compila con ⁠ g++ main.cpp -o tributo ⁠.

•⁠  ⁠*Ejecución:*  
  - En Windows: ⁠ tributo.exe ⁠
  - En Linux/macOS: ⁠ ./tributo ⁠

## Contribuciones

•⁠  ⁠Las contribuciones son bienvenidas.

## Licencia

•⁠  ⁠Distribuido bajo Licencia MIT.
