# TrabalhoDebian1
# Makefile, Git e Branch

## Descrição
- Foi criado um projeto em C que processa um vetor de números aleatorios
- Foi dado a esse vetor três funções
- o main.c é o arquivo principal do projeto onde é gerado o vetor e também onde esta as funções (Ainda no commit1)
- Os arquivos funcao1.c, funcao2.c e funcao3.c não foram alteradas
- as funções .h representam os cabeçalhos das funções e a partir deles é possivel incluir as funções completas na função main.c sem necessariamente escrever ali todo o código
- Para compilar o projeto

Como foi executado no terminal:

\\Executando trabalho 1 no terminal (executando a prog.c(arquivo sem as \\funções, apenas com a main e o cabeçalho das funções incluidas)

gcc -o meu_programa prog.c funcao1.c funcao2.c funcao3.c -lm
./meu_programa

\\ Executando arquivo main.c (com todas as funções e a main incluida) logo 
\\nesse caso não é necessário incluir o cabeçalho das funções)

cd ~/Documentos
gcc -o meu_programa main.c -lm
./meu_programa

[Explicação do comando:

    gcc: é o comando para chamar o compilador GCC.
    -o meu_programa: define o nome do arquivo de saída compilado. 
    main.c: é o nome do arquivo de origem que você deseja compilar.
    -lm: essa parte é necessária se usar funções da biblioteca matemática, como a função sqrt.

# Commits
No commit_parte1 se encontra o arquivo do programa completo sem o uso dos cabeçalhos, onde as funções foram descritas por completos no arquivo main.c
No commit2 está as mudanças que foram realizadas, no código (inseridos os cabeçalhos e retirados as descrições das funções)

