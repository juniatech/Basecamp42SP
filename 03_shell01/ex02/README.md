# 📚 Questão:

• Escreva uma linha de comando que procure na pasta atual e em todas as subpastas
todos os arquivos cujos nomes terminam com ".sh"(sem as aspas) e que só exiba os
seus nomes, sem o .sh.

• Exemplo de saída: <br>
$>./find_sh.sh | cat -e <br>
find_sh$ <br>
file1$ <br>
file2$ <br>
file3$ <br>
$>

!o uso do as opções da família ’–print’ é proibido

# 🖖 Comando usado: 
```sh
find . -type f -name "*.sh" -exec basename {} .sh \;
```

# 📝Explicação: 
find - realiza a busca de um arquivo <br>
-type f - do tipo file <br>
"*.sh" - parâmetro <br>
- exec basename - devolve o nome de um arquivo (absoleto ou relativo) <br>
{} .sh \; - expecificações.

# 🤖 Links recomendados: 
https://man7.org/linux/man-pages/man3/basename.3.html
https://man7.org/linux/man-pages/man1/file.1.html

# Ninguém disse que seria fácil não é mesmo? Continue!
![BooksReadGIF](https://user-images.githubusercontent.com/95503135/166808707-8663ee5b-2dde-4396-ae28-373a959a9f34.gif)


