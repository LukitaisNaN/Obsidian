La deducción de esta regla se hace manera análoga a lo que se hizo con la regla compuesta de Simpson. En este caso comenzaremos enunciando el siguiente teorema. 3 A. Numérico - FAMAF 2022 Teorema 2. Sean $f \in C^2 [a,b]$, n un número entero positivo, 
$h = \frac{(b − a)}{n}$ y $x_j = a + jh$, para $j = 0,\; \dots \; ,n$. Entonces existe $\micro \in (a,b)$ tal que la regla compuesta del Trapecio para n subintervalos está dada por:
![[6-1st ReplaceFormula.png]]
Demostración:
Se comienza particionando el intervalo \[a,b] en n subintervalos y luego se aplica la regla simple del Trapecio en cada subintervalo (Figura (1)):
![[6-2ndFormulaReplace.png]]
para algún $\xi_j \in (x_{j−1}, x_j)$, con $j = 1,\; \dots \; ,n$, y $f \in C^2 [a,b]$ 

Notar que los valores f(x j) para j = 1,...,n−1, aparecen dos veces en la última expresión, entonces se puede escribir
![[6-3rd replace.png]]

para algún $\xi_j \in (x j−1, x j)$, con $j = 1,\; \dots \; ,n$ 
![[6-Graphic.png]]

Ahora, consideramos el término del error
![[6-4th replace.png]]

para algún $\xi_j \in (x j−1, x j)$, con $j = 1,\; \dots \; ,n$. Como $f^{''}$ es continua en \[a,b], entonces por el Teorema de valores extremos para funciones continuas, se tiene que
![[6-Graphic2.png]]

Por el teorema del Valor Intermedio para funciones continuas, existe µ ∈ (a,b) tal que
*** 
completar
*** 
