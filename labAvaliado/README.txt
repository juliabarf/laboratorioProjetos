Antes de executar o programa, é preciso compilar os arquivos juntos. Para compilar os arquivos eu compilei tudo junto. Utilizei a linha debaixo para compilar:

    g++ main.cpp ativo.cpp registro_valor.cpp sistema_financeiro.cpp -o main

Ou digitar "make" dentro do diretorio do projeto.
Depois de compilar os arquivos vai ser possível rodar o executável. Para executar o programa eu utilizo a linha debaixo:

    ./main

Funcionamento de menu:
    O menu é composto por três opções:
    1 - inserir ativo novo
    2 - inserir novos registros em um ativo existente
    3 - exibe a média móvel de cada ativo.
    Para selecionar uma das opções é preciso inserir o número respectivo a opção que o usuario quer.
