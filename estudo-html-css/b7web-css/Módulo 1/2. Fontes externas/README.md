# Fontes externas

Para incluir fontes externas basta ir ao google fontes e colocar o `<link>` gerado dentro do `<head>`

Exemplo:
```html
<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8">
        <title>Fontes Externas</title>
        <link rel="stylesheet" href="style.css">
        <link href="https://fonts.googleapis.com/css2?family=DynaPuff&display=swap" rel="stylesheet">
    </head>
    <body>
        <h1>Testando fontes externas :D</h1>
        <p>Lorem ipsum dolor sit, amet consectetur adipisicing elit. Sequi eum quas quos corrupti dolorum, architecto deleniti perferendis fugit dicta rem animi eaque, non ut quam! In placeat corporis soluta. Quae!</p>
        <p>Consequatur rem totam quos quisquam debitis voluptatibus laborum et voluptatem odit vitae pariatur perspiciatis eum nostrum similique eius optio enim, officiis aperiam eos placeat fuga adipisci. Assumenda asperiores blanditiis consequuntur.</p>
        <p>Sunt optio consequatur, tempora ipsum debitis quo, impedit sequi deleniti corporis, ea suscipit aliquam veritatis odit nemo mollitia nam quasi nisi? Voluptatem officiis magni, labore minima quis eum maiores omnis?</p>
    </body>
</html>
```

## Ativando e formatando fonte no CSS

Exemplo:
```css
*{
    box-sizing: border-box;
}

p{
    color: #00f;
    font-size: 20px;
    font-family: 'DynaPuff', cursive;
}
```