# Estilização do formúlario

Quanto a estilização dos elementos, temos algumas novas propriedades que é interessante de saber 😉

```css
*{
    box-sizing: border-box;
}
body{
    margin: 50px;
    font-size: 17px;
}

label{
    display: block; /*Serve para deixar uma quebra de linha para cada label, por padrão vem com a propriedade "inline"*/
    margin-bottom:20px;
}

.texto,textarea, select{
    padding: 8px; /*Espaçamento interno, dessa forma se aplica ao top, bottom, left e right*/
    width: 500px;
    font-size: 15px;
    border: 1px solid #ccc; /*tamanho da borda, tipo e cor*/
    outline: 0; /*contorno*/
    margin-top: 5px;
}

textarea{
    height: 200px;
    resize: none;
}
.termoslink{
    color: #000;
    text-decoration: none; /*retirando underline*/
}
.termoslink:hover{
    text-decoration: underline;
}

button{
    padding: 10px;
    font-size: 15px;
    border: 1px solid #ccc;
    background-color: #eee;
}
button:hover{
    background-color: #ddd;
}
```