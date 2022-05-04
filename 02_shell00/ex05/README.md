# 📚 Questão:
• Escreva um shell script curto que retornará a lista de arquivos existentes ignorados
pelo seu repositório git atualmente presentes no seu repositório local. 

Exemplo: <br>
%> bash git_ignore.sh | cat -e <br>
.DS_Store$ <br>
mywork.c$ <br>
%> <br>

# 🖖 Comando usado:
#!/bin/sh
git ls-files --ignored --others --exclude-standard 

# 📝Explicação:
Fazer com que através do comando o terminal exibisse os arquivos ignorados e irrelevantes no repositório.

git ls-files --others --ignored --

--exclude-standard com modo de exclusão padrão

# 🤖 Link recomendado:
https://git-scm.com/docs/git-ls-files

# 💥 RTFM!
