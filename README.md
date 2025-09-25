# Compilador_MinC# Relatório Técnico - MinC

**Autor:** Francisco Castro Del‘Gaudio Junior  
**Data:** 4 de junho de 2025  

---

## Sumário
1. [Descrição do Funcionamento do Software](#descrição-do-funcionamento-do-software)  
2. [Descrição da Linguagem](#descrição-da-linguagem)  
3. [Tipos de Erros Tratáveis](#tipos-de-erros-tratáveis)  
4. [Documentação dos Principais Métodos/Funções](#documentação-dos-principais-métodosfunções)  
5. [Processo de Construção do Software](#processo-de-construção-do-software)  
6. [Referências Bibliográficas](#referências-bibliográficas)  

---

## Descrição do Funcionamento do Software
O software desenvolvido realiza a análise léxica de programas escritos na linguagem **MinC**.  
Ele foi implementado com o **Flex**, responsável por gerar o analisador léxico a partir de um conjunto de expressões regulares definidas no arquivo `main.l`.  

O programa identifica e classifica tokens do código-fonte e organiza os resultados em listas de **palavras reservadas** e **símbolos**.

### Etapas de Execução

1. Abra o terminal na pasta do arquivo `main.l`.  
2. Gere o código em C com o Flex:  
   ```bash
   flex main.l
   ```  
   → gera `lex.yy.c`  

3. Compile com GCC:  
   ```bash
   gcc lex.yy.c lista.c -o main.exe
   ```  

4. Execute:  
   ```bash
   ./main.exe
   ```  

5. Informe o arquivo de entrada (exemplo: `exemplo.minc`).  
6. Menu exibido:  
   - `0` → Sair  
   - `1` → Imprimir lista de palavras reservadas  
   - `2` → Imprimir lista de símbolos  
   - `3` → Abrir outro arquivo  

### Funcionamento Geral
O analisador reconhece:
- Palavras-chave, operadores e delimitadores  
- Identificadores válidos  
- Números inteiros e reais  
- Strings e caracteres  
- Comentários  
- Macros  

### Tratamento de Erros
Erros léxicos tratados com linha e coluna:
- Identificadores inválidos (começando com número)  
- Números reais malformados  
- Strings/caracteres não finalizados  

---

## Descrição da Linguagem
A linguagem **MinC** é inspirada em C, com suporte a:
- Tipos primitivos  
- Operadores  
- Estruturas de controle  
- Entrada e saída (`cin`, `cout`, `endl`)  
- Strings, caracteres, macros  

### Expressões Regulares
Exemplos:  
- Palavras-chave:  
  ```regex
  (int|float|double|char|void|if|else|for|while|switch|case|cout|cin|endl|return)
  ```
- Identificadores:  
  ```regex
  [_a-zA-Z]+[_a-zA-Z0-9]*
  ```
- Números inteiros:  
  ```regex
  [\+\-]?[0-9]+
  ```
- Números reais:  
  ```regex
  {NUMERO_INTEIRO}"."[0-9]+
  ```
- Strings:  
  ```regex
  \"([^\\\"]|\\.)*\"
  ```
- Comentários:  
  ```regex
  (\/\/[^\n]*|\/\*([^*]|\*+[^*/])*\*+\/)
  ```

---

## Tipos de Erros Tratáveis

1. **Identificador Malformado**  
   Ex: `123abc`  
   → `Erro lexico: IDENTIFICADOR malformado`

2. **Número Real Malformado**  
   Ex: `42.a`  
   → `Erro lexico: NUMERO_REAL malformado`

3. **String Não Finalizada**  
   Ex: `"texto sem fechamento`  
   → `Erro lexico: STRING malformado`

4. **Caractere Malformado**  
   Ex: `'a`  
   → `Erro lexico: CARACTERE malformado`

5. **Símbolos Desconhecidos**  
   São ignorados, mas não interrompem a análise.  

---

## Documentação dos Principais Métodos/Funções

### `Inserir`
- **Arquivo:** `lista.c`  
- **Protótipo:**  
  ```c
  Lista* Inserir(Lista *l, Classe classe, char *lexema, int linha, int coluna);
  ```
- **Descrição:** Insere token na lista, evitando duplicatas.

---

### `ImprimirLista`
- **Arquivo:** `lista.c`  
- **Protótipo:**  
  ```c
  void ImprimirLista(Lista *l);
  ```
- **Descrição:** Imprime tokens armazenados.

---

### `ClasseParaString`
- **Arquivo:** `lista.c`  
- **Protótipo:**  
  ```c
  const char* ClasseParaString(Classe classe);
  ```
- **Descrição:** Converte classe léxica em string legível.

---

### `main`
- **Arquivo:** `main.l`  
- **Descrição:**  
  - Solicita nome de arquivo  
  - Executa `yylex()`  
  - Exibe menu interativo  

---

### `yylex`
- **Arquivo:** gerado pelo Flex (`lex.yy.c`)  
- **Descrição:** Reconhece padrões com base nas expressões regulares.  

---

### `yywrap`
- **Arquivo:** `main.l`  
- **Descrição:** Indica fim da entrada ao Flex.  

---

## Processo de Construção do Software

### Ambiente
- **IDE:** Visual Studio Code  
- **Compilador:** MinGW (gcc + Flex)  
- **SO:** Windows 10  

### Ferramentas
- **Flex** → gera analisador léxico  
- **GCC** → compila código C  
- **Bibliotecas padrão:** `stdio.h`, `stdlib.h`, `string.h`  

### Estrutura do Projeto
- `main.l` — regras léxicas  
- `lista.h` — estrutura de dados  
- `lista.c` — implementação da lista  

---

## Referências Bibliográficas
- OpenAI. ChatGPT (mai. 2025). Assistente utilizado para apoio técnico e redação deste relatório.  
  Disponível em: [https://chat.openai.com/](https://chat.openai.com/)  

---
