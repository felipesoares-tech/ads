

# Requisitos Funcionais:

## Controle Geral - **Prioridade: Média**

>Descrição: O sistema deve permitir ao Gerente ter um controle de todas as atividades da empresa, incluindo vendas de peças, consertos realizados e faturamento mensal. Deve ser possível acessar informações em tempo real, como vendas do dia e contas a pagar. O acesso deve ser protegido por autenticação de usuário e senha.

| Tempo (DIAS)  | Custo (R$)|
|---------------|-----------|
| 120           | 1500,00   |

## Cadastro de Funcionários - **Prioridade: Alta**

>Descrição: O sistema deve permitir o Gerente cadastrar funcionários, atribuir funções e fornecer acesso com usuário e senha.

| Tempo (DIAS)  | Custo (R$)|
|---------------|-----------|
| 30            | 500,00    |

## Finalização do Caixa - **Prioridade: Média**

>Descrição: O sistema deve permitir ao Gerente finalizar o caixa, após o qual a conferência será realizada. A finalização deve encerrar a movimentação do dia.

| Tempo (DIAS)  | Custo (R$)|
|---------------|-----------|
| 15            | 2500,00   |

## Listagem de Produtos em Estoque - **Prioridade: Baixa**

>Descrição: O sistema deve fornecer uma listagem dos produtos em estoque, incluindo suas quantidades, para que o Gerente possa efetuar compras.

| Tempo (DIAS)  | Custo (R$)|
|---------------|-----------|
| 7             | 500,00    |

## Cadastro de Produtos - **Prioridade: Alta**

>Descrição: O Gerente deve ser o único autorizado a adicionar a quantidade mínima de produtos em estoque e a excluir itens cadastrados erroneamente.

| Tempo (DIAS)  | Custo (R$)|
|---------------|-----------|
| 3             | 500,00    |

## Entrada de Produtos no Estoque - **Prioridade: Alta**
>Descrição: O Estoquista deve ser capaz de dar entrada de produtos no estoque, registrando informações das notas fiscais.

| Tempo (DIAS)  | Custo (R$)|
|---------------|-----------|
| 30            | 650,00    |

## Liberação de Peças - **Prioridade: Alta**
>Descrição: O Estoquista deve poder liberar peças para os mecânicos da oficina, registrando a solicitação na ordem de serviço.

| Tempo (DIAS)  | Custo (R$)|
|---------------|-----------|
| 7             | 500,00    |

## Atendimento ao Cliente - **Prioridade: Alta**

>Descrição: O Atendente deve verificar se o cliente está cadastrado, criar ordens de serviço, e encaminhar clientes para a oficina. Após o serviço, o Atendente deve entregar a bicicleta ao cliente.

| Tempo (DIAS)  | Custo (R$)|
|---------------|-----------|
| 3             | 500,00    |

## Atendimento dos Mecânicos - **Prioridade: Alta**

>Descrição: Os Mecânicos devem ser capazes de acessar ordens de serviço, inserir seu código de mecânico, solicitar peças e lançar o valor da mão de obra. Ao término, o cliente deve ser orientado a dirigir-se ao Caixa para pagamento.

| Tempo (DIAS)  | Custo (R$)|
|---------------|-----------|
| 9             | 500,00    |

## Fechamento de Caixa - **Prioridade: Alta**

>Descrição: O Caixa deve abrir o caixa com autenticação, informar o valor do fundo de caixa e, após o pagamento do cliente, emitir o cupom fiscal e o comprovante de liberação.

| Tempo (DIAS)  | Custo (R$)|
|---------------|-----------|
| 25            | 1500,00   |

# Requisitos Não Funcionais:

## Segurança - Prioridade: Alta

>Descrição: O sistema deve garantir a segurança das informações e a autenticação de usuários para proteger os dados sensíveis da empresa.

# Diagrama de caso de uso

![duse-case](https://cdn.discordapp.com/attachments/1024510401255317566/1155617629134925944/esoft1.png)

# Diagrama de sequência

## Atendente (Atendimento ao Cliente)

![dseq-atendente](https://cdn.discordapp.com/attachments/1024510401255317566/1156064691492241448/dseq_atendente.png?ex=65139ca5&is=65124b25&hm=d8964df0ca09afc163ef7fd7086faa5a31eea2d011bd401f53aadbdad089f313&)

## Estoquista (Entrada de Produtos)

![dseq-estoquista1](https://cdn.discordapp.com/attachments/1024510401255317566/1156065050482712666/dseq_estoquista1.png?ex=65139cfa&is=65124b7a&hm=90139506903850ebb828ee750fff1cab4f768e29f3acde4efa9540423f5dbe47&)

## Estoquista (Liberação Peças)

![dseq-estoquista2](https://cdn.discordapp.com/attachments/1024510401255317566/1156065050721779903/dseq_estoquista2.png?ex=65139cfa&is=65124b7a&hm=8807684932e36c2f0284ab8a5851e3d2809f783f4c7ea940d6d1b06dc0aa438f&)

## Mecânico (Atendimento ao Mecânico)

![dseq-mecanico](https://cdn.discordapp.com/attachments/1024510401255317566/1156067568570859570/dseq_mecanico.png?ex=65139f53&is=65124dd3&hm=9bfe1ec3cc1a6997b9d1fdc7be33d392e4ad71944fa36eb8b93f1167d2ad927f&)
