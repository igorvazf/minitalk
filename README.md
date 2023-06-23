# minitalk
O minitalk é um pequeno programa de troca de dados utilizando sinais UNIX.

### Como compilar?
Utilizando o Makefile você pode criar os arquivos executáveis *server* e *client*:
```
make
```

### Como executar?
Primeiro, é necessário executar o *server* para descobrir o *Process Identifier* dele:
```
$ ./server
Server PID: <PID_SERVEUR>

```
Após isso, enquanto o *server* está em execução, é possível mandar uma string como argumento na linha de comando com o *client*:
```
$ ./client <PID_SERVEUR> <STRING_TO_PASS>
```

#### Mais informações sobre a Escola 42 (inglês): https://en.wikipedia.org/wiki/42_(school)
