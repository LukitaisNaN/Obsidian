La siguiente definición es de fundamental importancia en el estudio de las reglas de integración numérica.

>[!Tip] Definición
>La precisión o grado de exactitud de una fórmula o regla de cuadratura es el mayor entero no negativo n tal que la fórmula de integración es exacta para xk , para todo 
>k = 0,...n.

Así los métodos considerados en esta clase tienen la siguiente precisión 

| Regla de cuadratura | Precisión |
| :-----------------: | :-------: |
|     Rectángulo      |     0     |
|     Punto medio     |     1     |
|      Trapecio       |     1     |
|       Simpson       |     3     |
En la siguiente tabla se resumen las reglas simples de integración numérica para estimar$\int_a^b f(x)dx:$

|      Regla      | Puntos |                      Fórumla                       |                 Error                  | Precisión |
| :-------------: | :----: | :------------------------------------------------: | :------------------------------------: | :-------: |
| <br>Rectángulo  | <br>1  |                   $$f(a)(b-a)$$                    |    $$\frac {(b-a)²}{2}f^{'}(\xi)$$     |   <br>0   |
| <br>Punto medio | <br>1  |             $$f(\frac{a+b}{2})(b-a))$$             |    $$\frac{(b-a)³}{12}f^{''}(\xi)$$    |   <br>1   |
|  <br>Trapecio   | <br>2  |            $$\frac{b-a}{2}[f(a)+f(b)]$$            |   $$-\frac{(b-a)³}{12}f^{''}(\xi)$$    |   <br>1   |
|   <br>Simpson   | <br>3  | $$\frac{(b-a)/2}{3}[f(a)+4f(\frac{a+b}{2})+f(b)]$$ | $$-\frac{((b-a)/2)⁵}{90}f^{(4)}(\xi)$$ |   <br>3   |
