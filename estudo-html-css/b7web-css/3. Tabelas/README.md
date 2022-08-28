#  Tabelas

Quanto as tabelas, não houve grandes alterações, usaremos a tag semântica `thead` para inserir os elementos do cabeçalho da tabela, e o `tbody` para os elementos do corpo, utilizar o `thead` e o `tbody` também irá nos ajudar na estilização da tabela  😉

Exemplo do HTML:
```html
<!DOCTYPE html>
<html>

<head>
    <meta charset="utf-8">
    <title>Tabelas</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h1>Aprendendo sobre tabelas!!</h1>
    <table>
        <thead>
            <tr> <!--tr corresponde as linhas da tabela -->
                <th>Item 1</th> <!--th corresponde aos elementos de titulo do cabeçalho -->
                <th>Item 2</th>
                <th>Item 3</th>
            </tr>
        </thead>
        <tbody>
            <tr>
                <td>...</td> <!-- td corresponderá as células da tabela -->
                <td>...</td>
                <td>...</td>
            </tr>
            <tr>
                <td>...</td>
                <td>...</td>
                <td>...</td>
            </tr>
            <tr>
                <td>...</td>
                <td>...</td>
                <td>...</td>
            </tr>
            <tr>
                <td>...</td>
                <td>...</td>
                <td>...</td>
            </tr>
            <tr>
                <td>...</td>
                <td>...</td>
                <td>...</td>
            </tr>
            <tr>
                <td>...</td>
                <td>...</td>
                <td>...</td>
            </tr>
        </tbody>
    </table>
</body>
</html>
```
## Estilização em `CSS`
```css
table{
    width: 600px; /*definindo largura*/
}

table thead{
    background-color: #ccc;
}
th, td{
    padding: 10px; /*espaçamento interno*/
    text-align: center;
}
th{
    font-weight: normal; /*retirando o negrito do th*/
}

tbody tr:hover{
    background-color: #eee;

}

/*tbody td{
    border-bottom: 1px solid #ccc;
}*/
tbody tr:nth-child(even){
    background-color: #eee;
}
```