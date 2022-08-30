# Formulários
Quanto aos formúlarios, temos basicamente de entender da tag `input`, e a tag `label`.

Na tag input, vamos ter os 3 principais atributos!

- type
- name
- id
- value

>No atributo `type` vamos definir o tipo, podendo variar entre, **text (entrada de texto)**, **submit, (envio de dados)**, **password (para senhas)** etc.., ou seja, definimos o tipo de dado a ser lido!

>No atributo `name` basicamente vamos definir como se fosse o "grupo" o qual o elemento pertence, pois quando clicamos no `submit` para enviar os dados, ele irá colocar o que foi especificado em nome na url do navegador, caso utilizemos do `method` get, dentro do nosso form!

>Quanto ao atributo id, poderemos utilizado para manipulações com *JavaScript*, e também juntamente com a tag label, utilizando do atributo `for`, que basicamente redireciona o click do mouse para o id especificado.

>O atribuo `value` pode ser usada basicamente para deixar um texto pré-definido em alguma outra tag, por exemplo se usarmos a tag `input` para criar um botão de envio de dados (type=submit), podemos usar o "value" para alterar oque está escrito no botão.


## Exemplo:
```html
<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>Forms</title>
</head>
<body>
    <h1>Página de teste</h1>
    <h2>Área de cadastro</h2>

    <form action="login.html" method="get">

        <label for="nome">Nome completo:</label><br>
        <input type="text" name="user" placeholder="Nome de usuário" id="nome">
        <br><br>
        <input type="checkbox" id="teste">
        <label for="teste">Essa é uma frase um pouco maior para você entender</label>
        <input type="submit" value="Fazer cadastro">
    </form>
</body>
</html>
```
Outro detalhe importante, é que podemos também usar a tag `button` para o envio de dados dentro do formulário, e podemos ir além! podemos optar por não utilizar do atributo `for` nem do `id` se optarmos por colocar a tag `input` dentro do nosso label, irá realizar o mesmo efeito e consequentemente iremos escrever menos 😉

Exemplo:
```html
<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>Forms</title>
</head>

<body>
    <h2>Área de cadastro</h2>
    <form action="login.html" method="get">
        <label>Nome completo:
            <input type="text">
        </label><br>
        <button>Fazer cadastro</button>
    </form>
</body>
</html>
```