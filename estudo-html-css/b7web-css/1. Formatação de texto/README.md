# Formatação básica de texto em CSS

Para a formatação de texto básica, temos alguns novos atributos

```css
*{
    box-sizing: border-box;
}
body{
    margin: 50px;
    font-size: 17px;
}
p{
    color: #00f;
    font-size: 30px;
    font-weight: bold;
    font-family: Arial; 
    text-decoration: line-through; /*risca o texto*/
    text-align: justify;
}

a{
    text-decoration: none; /*serve para remover o underline dos links*/
}
a:hover{ /*efeito para quando passar o mouse sublinhar */
    text-decoration: underline;
}
```