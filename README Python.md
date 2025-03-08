
# Tributo al Tesoro Real

*Proyecto en Python que calcula el tributo a pagar al tesoro real basado en el ingreso anual en monedas de oro.*

## Requisitos

•⁠  ⁠*Python 3.x:*  
  Necesario para ejecutar el script.
•⁠  ⁠*Visual Studio Code (VS Code):*  
  Con la extensión de Python instalada y configurada para el debugging.
•⁠  ⁠*Sistema Operativo:*  
  Compatible con Windows, Linux o macOS.

## Funcionalidad

•⁠  ⁠*Entrada:*  
  - Se solicita el ingreso al usuario mediante ⁠ print() ⁠ y ⁠ input() ⁠, convirtiendo la entrada de texto a entero con ⁠ int(input()) ⁠.

•⁠  ⁠*Lógica Condicional:*  
  - *Ingreso negativo:*  
    - Se muestra el mensaje "¿Cómo vas a ganar monedas negativas?" y se asigna un tributo de 0.
  - *Ingreso ≤ 10,000:*  
    - No se cobra tributo, asignando el mensaje "No tienes que pagar nada".
  - *Ingreso > 10,000 y ≤ 50,000:*  
    - Se calcula el 10% del excedente sobre 10,000, mediante ⁠ (ingreso - 10000) * 0.1 ⁠.
  - *Ingreso > 50,000:*  
    - Se aplica un impuesto fijo de 4,000 monedas para los primeros 50,000, más el 20% del excedente sobre 50,000, usando ⁠ 4000 + ((ingreso - 50000) * 0.2) ⁠.

•⁠  ⁠*Salida:*  
  - Se imprime el resultado con ⁠ print(tributo) ⁠.

## Compilación y Ejecución

•⁠  ⁠*Ejecución en VS Code con Python Debugger:*  
  - Abre el archivo del proyecto en Visual Studio Code.
  - Configura el entorno de Python y el debugger (si es necesario).
  - Ejecuta el script utilizando el botón de "Run" o presionando ⁠ F5 ⁠.

## Contribuciones

•⁠  ⁠Las contribuciones son bienvenidas.  
  Realiza un fork del repositorio y envía tus pull requests con mejoras o correcciones.

## Licencia

•⁠  ⁠Distribuido bajo Licencia MIT.
