Consideremos n un entero positivo y subdividimos el intervalo \[a,b] en n subintervalos iguales y apliquemos la regla de Simpson en cada de subintervalo. Por lo tanto en cada subintervalo consideramos los extremos y el punto medio. En consecuencia se tienen (2n+1) puntos igualmente espaciados x j = a+ jh, para j = 0,...,2n, con h = (b−a)/2n.
Luego,
$$\int_a^bf(x)dx = \sum_{j=1}^n\int_{x2j-2}^{x2j}f(x)dx
$$
$$=\sum_{j=1}^n\{\frac{h}{3}[f(x_{2j-2})+4f(x_{2j-1})+f(x_{2j})-\frac{h⁵}{90}f^{(4)}(\xi_j)\},
$$
para algún $\xi_j \in (x_{2j-2},x_{2j})$, con $j = 1,\; \dots \;,n,$ y $f \in C^{4}[a,b]$

---
							Contenido faltante
*** 

Teorema 1. Sean $f \in C^{4} [a,b]$, n entero positivo, $h = \frac{b − a}{2n}$ y $x_j = a + jh$, para 
$j = 0,\; \dots \; ,2n$. Entonces existe $\micro \in (a,b)$ tal que la regla compuesta de Simpson para n subintervalos está dada por:
$$\int_a^b f(x)dx = \frac {h}{3}\{f(x_0)+2\sum_{j=1}^nf(x_{2j})+4\sum_{j=1}^n f(x_n) \} - \frac{b-a}{180}h^4f^{(4)}(\micro)$$
