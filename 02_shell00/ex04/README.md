# 📚 Questão:
Crie um programa shell que retorne os id dos 5 últimos commit do seu repositório
git. <br>
%> bash git_commit.sh | cat -e <br>
baa23b54f0adb7bf42623d6d0a6ed4587e11412a$ <br>
2f52d74b1387fa80eea844969e8dc5483b531ac1$ <br>
905f53d98656771334f53f59bb984fc29774701f$ <br>
5ddc8474f4f15b3fcb72d08fcb333e19c3a27078$ <br>
e94d0b448c03ec633f16d84d63beaef9ae7e7be8$ <br>
%> <br>

# 🖖 Comando usado: 
#!/bin/sh <br>
git log -n5 --format=%H <br>

# 📝Explicação:
Depois de você ter criado vários commits ou se você clonou um repositório com um histórico de commits pré-existente, você vai provavelmente querer olhar para trás e ver o que aconteceu. A ferramenta mais básica e poderosa para fazer isso é o comando git log.

# 🤖 Link recomendado: 
https://git-scm.com/book/pt-br/v2/Fundamentos-de-Git-Vendo-o-hist%C3%B3rico-de-Commits

# 💥RTFM !
