# 📚 Questão:
• Escreva uma linha de comando que determine e mostre a lista de grupos dos quais o login especificado na variável de ambiente FT_USER é membro, separando-os por vírgulas sem espaços. <br>
• Exemplos: <br>
◦ com FT_USER=student, o resultado é "student,:,student,staff,main,basecamp,fortytwo"(semaspas) <br>

$>./print_groups.sh <br
student,:,student,staff,main,basecamp,fortytwo$> <br>
◦ com FT_USER=staff, o resultado é "staff,:,staff,god,main,bocal"(sem aspas) <br>

$>./print_groups.sh <br>
staff,:,staff,god,main,bocal$> <br>

# 🖖 Comando usado:
#!/bin/sh <br>
groups $FT_USER | tr ' ' ',' | tr -d '\n'

# 📝Explicação: 

groups - Imprime os grupos em que um usuário está <br>
$FT_USER - Usuário <br>
| tr - traduz o conteúdo de uma string (troca) <br>
| -d - deleta um caractere <br>
| '\n' - pula linha. 

Imprime as associações de grupo para cada USERNAME ou, se nenhum USERNAME for especificado, para o processo atual (que pode ser diferente se o banco de dados de grupos tiver sido alterado). <br>
--help exibe esta ajuda e sai <br>
--version informa a versão de saída e sai.


# 🤖 Link recomendado: 
https://man7.org/linux/man-pages/man1/groups.1.html

# 💥man groups!


