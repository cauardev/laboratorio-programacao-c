<div align="center">

# 💻 Laboratório de Programação em C

![Linguagem](https://img.shields.io/badge/Linguagem-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Instituição](https://img.shields.io/badge/UVV-Universidade_Vila_Velha-0A3D91?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Em_andamento-F0883E?style=for-the-badge)

**Repositório com as atividades das aulas de laboratório de programação**

</div>

---

## 🎓 Informações Acadêmicas

| | |
|---|---|
| **👤 Aluno** | Cauã Robson Candeias Altino |
| **🏫 Instituição** | Universidade Vila Velha (UVV) |
| **💻 Curso** | Ciência da Computação |
| **👩‍🏫 Professora** | Fabiana Bravim |
| **🔗 GitHub** | [cauardev](https://github.com/cauardev) |

---

## 📁 Estrutura do Repositório

```
laboratorio-programacao-c/
├── README.md
├── risco_cardiovascular.c
├── aula-14-matrizes/
│   ├── atv1.c
│   ├── atv2.c
│   └── atv3.c
├── aula-15-matrizes-aplicacoes/
│   └── controle_assentos.c
├── aula-16-strings/
│   └── contador caracteres.c
├── aula-17-strings/
│   ├── usuarios.c
│   ├── produtos.c
│   └── estudantes.c
└── aula-18-funcoes/
    ├── calculadora.c
    ├── maiorpreco.c
    ├── parimpar.c
    ├── dobroestoque.c
    ├── exibirlinha.c
    └── fatorial.c
```

---

## 📚 Aulas

| Aula | Tema | Conteúdo |
|:---:|---|---|
| 🔹 **14** | Matrizes | [`aula-14-matrizes`](./aula-14-matrizes) |
| 🔹 **15** | Matrizes: aplicações | [`aula-15-matrizes-aplicacoes`](./aula-15-matrizes-aplicacoes) |
| 🔹 **16** | Strings | [`aula-16-strings`](./aula-16-strings) |
| 🔹 **17** | Strings: funções de `string.h` | [`aula-17-strings`](./aula-17-strings) |
| 🔹 **18** | Funções | [`aula-18-funcoes`](./aula-18-funcoes) |

---

## 🧩 Atividades por aula

### 🔹 Aula 14 · Matrizes

| Arquivo | O que faz |
|---|---|
| `atv1.c` | Cria e exibe uma matriz 2x2 |
| `atv2.c` | Lê os valores de uma matriz 2x2 digitados pelo usuário e os exibe |
| `atv3.c` | Exibe uma matriz 3x3 e calcula a soma de todos os elementos |

### 🔹 Aula 15 · Matrizes: aplicações

| Arquivo | O que faz |
|---|---|
| `controle_assentos.c` | Mapa de assentos em matriz (0 = disponível, 1 = ocupado), com contagem de ocupados e disponíveis |

### 🔹 Aula 16 · Strings

| Arquivo | O que faz |
|---|---|
| `contador caracteres.c` | Lê uma palavra e conta suas letras percorrendo a string até o `'\0'` |

### 🔹 Aula 17 · Strings: funções de `string.h`

Usa `strlen()`, `strcmp()`, `strcpy()` e `strcat()`.

| Arquivo | O que faz |
|---|---|
| `usuarios.c` | Cadastro de usuário com perfil `ADMIN` ou `COMUM` e mensagem de boas-vindas |
| `produtos.c` | Cadastro de produto com categoria `HARDWARE` ou `PERIFERICO` e descrição para o estoque |
| `estudantes.c` | Identifica o curso (`CC` ou `SI`) e monta uma mensagem personalizada para o estudante |

### 🔹 Aula 18 · Funções

| Arquivo | O que faz |
|---|---|
| `calculadora.c` | Calculadora com menu, `switch`, quatro operações e bloqueio de divisão por zero |
| `maiorpreco.c` | Compara dois preços e retorna o maior, avisando quando forem iguais |
| `parimpar.c` | Retorna `1` para número par e `0` para ímpar |
| `dobroestoque.c` | Calcula o dobro da quantidade de estoque |
| `exibirlinha.c` | Função sem parâmetros e sem retorno que imprime uma linha de asteriscos |
| `fatorial.c` | Calcula o fatorial de um número entre 0 e 12 usando laço |

---

## ⚙️ Como compilar e executar

> [!NOTE]
> É necessário ter o compilador **GCC** instalado.

```bash
cd aula-14-matrizes
gcc atv1.c -o atv1
./atv1
```

> [!TIP]
> No Windows, execute com `atv1.exe`. Para as outras aulas, basta entrar na pasta correspondente e trocar o nome do arquivo.

> [!WARNING]
> O arquivo da aula 16 tem espaço no nome. Compile usando aspas:
> `gcc "contador caracteres.c" -o contador`

---

<div align="center">

Feito por **Cauã** · UVV 2026

</div>
