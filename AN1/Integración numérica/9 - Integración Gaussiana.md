Las fórmulas de cuadratura consideradas hasta ahora, simples y compuestas, se construyen usando valores funcionales en puntos conocidos. Es decir, todas tienen la forma
![[9-1Replace.png]] (1)

y son exactas para polinomios de grado ≤ n. En esta fórmula los nodos $x0,x1,\dots,xn$ son conocidos a priori y los coeficientes $a0,a1,\dots,an$ se determinan unívocamente de manera que (1) sea una igualdad, para ciertos polinomios. Por ejemplo, si usáramos la regla simple del Trapecio, cuyos nodos son los extremos del intervalo:
![[Regla-Trapecio.png]]

En cambio, si se pudieran elegir adecuadamente los dos nodos se podría mejorar la precisión:
![[Regla-con-dos-Nodos.png]]

Recordemos que:
![[9-TableReplace.png]]

Es decir que para (n+1) puntos, la precisión de cada regla de cuadratura es (n+1) o n. 

Las reglas gaussianas permiten seleccionar convenientemente los nodos, además de los coeficientes, de manera óptima en el sentido que la regla de integración sea exacta para polinomios del grado más alto posible (precisión). Es decir que se deberán determinar los (n+1) nodos x0,..., xn y los (n+1) coeficientes a0,...,an de manera que la regla de cuadratura con funciones de peso
![[9-5Replace.png]]
sea exacta para polinomios de grado ≤ 2n+1. Antes de estudiar el caso general, veamos el siguiente ejemplo.

### Ejemplo
tomando la función de peso w(x) = 1, determinar los nodos x0 y x1 y los coeficientes a0 y a1 tal que la regla de cuadratura
![[9-10ExampleReplace.png]]
sea exacta para polinomios p de grado ≤ 2 · 1+1 = 3

- Si grado (p) = 0, basta considerar p(x) ≡ 1 entonces $$ 2 = \int_{-1}^1dx = a_0 + a_1$$ (4)

- Si grado (p) = 1, basta considerar p(x) = x, entonces $$ 0 = \int_{-1}^1 xdx = a_0 x_o + a_1 x_1$$ (5)

- Si grado (p) = 2, basta considerar p(x) = x², entonces $$\int_{-1}^1 x²dx = a_0 x²_0 + a_1 x^2_1$$ (6)

- Si grado (p) = 3, basta considerar p(x) = x³, entonces $$\int_{-1}^1 x³dx = a_0 x³_0 + a_1 x³_1$$ (7)

Si $a_0 = a_1 = 0$ se tiene un absurdo, por lo tanto no pueden ser simultáneamente cero. 

Supongamos ahora uno de los dos coeficientes es cero y el otro no, por ejemplo que a0 = 0 y a1 6= 0. Luego por (4) se deduce que a1 = 2, y por (5) se tiene que x1 = 0, y por (6) se llega a un absurdo. Análogamente si suponemos que a0 6= 0 y a1 = 0. Por lo tanto ambos coeficientes deben ser distintos de cero. 

De la ecuación (5), si x0 = 0, y como a1 6= 0, resulta que x1 = 0 y por (6) se llega a un absurdo. Por lo tanto x0 no puede ser 0 y por un razonamiento análogo x1 tampoco es 0. Luego a0,a1, x0 y x1 son distintos de 0. De (5) y (7) se tiene que
$$\frac{a_0 x³_0}{a_0 x_0} = \frac {-a_1 x³_1}{-a_1 x_1}$$
de donde se deduce que $x²_0 = x²_1$ y por lo tanto $\vert x0 \vert = \vert x1 \vert$. Ahora se tienen dos casos

Si x0 = x1, por (4) y (5) se obtendría que x0 = 0 y por lo tanto es absurdo. Por lo tanto, 
x0 = −x1. Usando (6) se sabe que (a0 + a1)x 2 0 = 2/3, y entonces $x²_0 = \frac{1}{3}$ y de aquí se tiene que $x_0 = - \frac {\sqrt 3}{3}$ y $x_1 = \frac {\sqrt 3}{3}$ 

Por último, usando (4) y (5) se obtiene que $a_0 = a_1 = 1$.

~p81