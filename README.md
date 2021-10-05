# Euclides-Extendido

En este algoritmo se buscará encontrar a la solucion de la ecuación gcd(a,b)=ax+by, para lo cual se implementa una funcion usando vectores, la cual resolverá de forma iterariva teniendo en cuenta los cambios y reemplazos existentes durante la formula del algoritmo de euclides extendido, finalizando cuando se encuentre el gcd de los numeros inicialmente utilizados, añadiendo este resultado al inicio del vector, además de añadir los valores de x e y validos para que la ecuacion propuesta al inicio sea correcta, los cuales se añaden al vector en el orden resopectivo (primero x y luego y)
El algoritmo finalmente imprime los resultados de euclides extendido para x e y dados.
Ejemplo:

Dada la ecuacion gcd(a;b) = ax + by

El gcd(29;352)=1
Valor de x es 85
Valor de y es -7
Por lo tanto:
1=a*85+b*-7

Lo cual evidencia que el gcd de 29 y 352 es 1 y los valores correctos de la ecuación son 85 para x y -7 para y.
