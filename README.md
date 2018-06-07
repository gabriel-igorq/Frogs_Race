# Frogs_Race

Projeto realizado para a disciplina "Linguagem de Programação I" do curso de Tecnologia da Informação da UFRN

### Compilação e Execução

$ make

$ ./bin/programa

### Descrição do Projeto

O projeto tem como objetivo implementar em C++ um programa que simule uma corrida de sapos, manipulando dados de arquivos.

**Passo 1**: O programa lê um arquivo que conteém as informações dos sapos disponíveis para a corrida

Os arquivos in_out.hpp e in_out.cpp contém os métodos para ler as informações dos sapos. Essa função é utilizada no início da main(Linha 19).

**Passo 2**: O programa lê um arquivo que contém as informações sobre as pistas disponíveis para a corrida.

Os arquivos in_out.hpp e in_out.cpp contém os métodos para ler as informações das pistas. Essa função é utilizada no início da main(Linha 23).

**Passo 3**: Iniciando o programa, o usuário pode:
a) Ver estatísticas dos sapos.
b) Ver estatísticas das pistas.
c) Iniciar uma corrida.
d) Criar sapos.
e) Criar uma pista.

A realização de cada umas dessas etapas pode ser vista no arquivo main.cpp, a partir da linha 28.

**Passo 4**: Para iniciar uma corrida:
a) O usuário deve escolher uma pista de corrida que os sapos irão disputar.
b) É mostrado ao usuário a lista dos sapos que irão participar da corrida com seus nomes e números.
c) O usuário dará o start da corrida.

A inicilização da corrida é realizada na main.cpp, a partir da linha 90. Cada uma das etapas acima está sinalizada com um comentário no arquivo.

**Passo 5**: Durante a corrida:
a) Cada sapo irá pular individualmente, mostrando ao usuário seu nome, numeração e quanto ele pulou, em cada pulo.
b) A medida que um sapo chegar na linha de chegada, ele não deverá mais pular nem emitir mais mensagens na tela.
c) Quando o ultimo sapo terminar a corrida, o programa mostrará o Rank da corrida.

A corrida é realizada na main.cpp, a partir da linha 120.

**Passo 6**: As operações de criação de sapos e corridas salvam os mesmo nos arquivos, bem como as estatísticas dos sapos após as corridas realizadas.

Os arquivos in_out.hpp e in_out.cpp contém os métodos para escrever as informações dos sapos e das pistas em arquivos .txt.

## Autor

Gabriel Igor Queiroz Costa
