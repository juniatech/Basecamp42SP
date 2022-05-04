# 📚 Questão:

• Crie todos estes arquivos e pastas. Faça o que for necessário para que a visualização
de um ls -l em sua pasta fique da seguinte forma:

%> ls -l <br>
total XX <br>
drwx--xr-x 2 XX XX XX Jun 1 20:47 test0 <br>
-rwx--xr-- 1 XX XX 4 Jun 1 21:46 test1 <br>
dr-x---r-- 2 XX XX XX Jun 1 22:45 test2 <br>
-r-----r-- 2 XX XX 1 Jun 1 23:44 test3 <br>
-rw-r----x 1 XX XX 2 Jun 1 23:43 test4 <br>
-r-----r-- 2 XX XX 1 Jun 1 23:44 test5 <br>
lXXXXXXXXX 1 XX XX 5 Jun 1 22:20 test6 -> test0 <br>
%> <br>

Em relação às horas, será tolerado que o ano apareça se a data do exercício (1º de junho) for de seis meses antes ou mais antiga. <br>
• Após resolver o exercício, execute o comando tar -cf exo2.tar * para criar o arquivo que será entregue. <br>

!Os XX não serão considerados. <br>
!Um ano é uma resposta aceita em vez de um horário. <br>

# 🖖 Comandos usados:
mkdir -> para criar diretórios <br>
chmod -> ler, escrever e execultar permissões de arquivos e diretórios. <br>

# 🔰 Para descompactar um arquivo .tar usamos:

```sh
tar -xvf <nomedoarquivo.tar>
```

# 🖋️ Após resolver o exercício, execute o comando tar -cf exo2.tar * para criar o arquivo.

# 📝 Explicação: 
Novamente editar os atributos e informações de vários arquivos e diretórios, <br>
hard link: cópia do arquivo. <br>
soft link: uma referencia para o diretório. <br>

d = diretory <br>
r = read = 4 <br>
w = write = 2 <br>
x = execute = 1 <br>

chmod 777 <br>
rwx | rwx | rwx <br>
owner | group | others <br>

7 rwx 111 <br>
6 rw- 110 <br>
5 r-x 101 <br>
4 r-- 100 <br>
3 -wx 011 <br>
2 -w- 010 <br>
1 --x 001 <br>
0 --- 000 <br>

# 🤖 Link recomendado:
https://pt.stackoverflow.com/questions/68704/qual-a-diferen%C3%A7a-entre-um-link-simb%C3%B3lico-e-um-hard-link#:~:text=O%20Soft%20Link%20%C3%A9%20um,inode%20do%20arquivo%20em%20si.

# 🗣️ "Agora já sabe o que estudar? Espero que sim!!" 😎
