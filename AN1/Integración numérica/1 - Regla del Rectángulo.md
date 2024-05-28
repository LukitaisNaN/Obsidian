Esta regla utiliza sólo uno de los extremos de integración para construir el polinomio interpolante, por ejemplo se considera sólo x0 = a y por lo tanto el polinomio interpolante será una constante (n = 0). Ver Figura 3.

![[Figura-4.png]]

En este caso, la regla del punto medio está dada por:
$$
\int _a^b f(x)dx \approx I_{pm}(f;a,b) = f(\frac {a+b}{2})(b-a)
$$
Y su correspondiente error es:
$$
E_{pm} = \frac{(b-a)³}{24}f^{''}(\xi)
$$
para algún ξ ∈ (a,b).

>[!info] Observación
Como el término del error tiene una derivada de orden 2, la regla del punto medio integrará exactamente a polinomios de grado 1.

