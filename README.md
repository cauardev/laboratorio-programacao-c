<div align="center">

<img src="https://www.uvv.br/wp-content/uploads/2022/09/logo-uvv.png" alt="Logo UVV" height="80"/>

# Laboratório de Programação em C

<img src="https://upload.wikimedia.org/wikipedia/commons/1/19/C_Logo.png" alt="C Logo" width="90"/>

### Atividades e exercícios desenvolvidos durante as aulas de Laboratório de Programação

[![Linguagem](https://img.shields.io/badge/Linguagem-C-00599C?style=for-the-badge&logo=c&logoColor=white)](#)
[![Universidade](https://img.shields.io/badge/Universidade-UVV-8B1E3F?style=for-the-badge)](#)
[![Curso](https://img.shields.io/badge/Curso-Ciência%20da%20Computação-222222?style=for-the-badge)](#)

</div>

---

## Sobre o repositório

Este repositório reúne atividades práticas desenvolvidas durante as aulas de **Laboratório de Programação**, utilizando a linguagem **C**.

O objetivo é registrar minha evolução durante o aprendizado dos principais conceitos da programação, incluindo:

- Matrizes
- Strings
- Funções
- Estruturas condicionais
- Laços de repetição
- Entrada e saída de dados
- Lógica de programação

---

## Informações acadêmicas

| | |
|---|---|
| **Aluno** | Cauã Robson Candeias Altino |
| **Instituição** | Universidade Vila Velha — UVV |
| **Curso** | Ciência da Computação |
| **Professora** | Fabiana Bravim |
| **GitHub** | [@cauardev](https://github.com/cauardev) |

---

## Estrutura do repositório

```text
laboratorio-programacao-c/
│
├── aula-14-matrizes/
│   ├── atv1.c
│   ├── atv2.c
│   └── atv3.c
│
├── aula-15-matrizes-aplicacoes/
│   └── controle_assentos.c
│
├── aula-16-strings/
│   └── contador caracteres.c
│
├── aula-17-strings/
│   ├── usuarios.c
│   ├── produtos.c
│   └── estudantes.c
│
├── aula-18-funcoes/
│   ├── calculadora.c
│   ├── maiorpreco.c
│   ├── parimpar.c
│   ├── dobroestoque.c
│   ├── exibirlinha.c
│   └── fatorial.c
│
├── risco_cardiovascular.c
└── README.md
```

---

# Conteúdos estudados

## Aula 14 — Matrizes

Introdução ao uso de **matrizes multidimensionais** na linguagem C.

| Arquivo | Descrição |
|---|---|
| `atv1.c` | Criação e exibição de uma matriz 2×2 |
| `atv2.c` | Leitura e exibição de valores informados pelo usuário |
| `atv3.c` | Matriz 3×3 e cálculo da soma dos elementos |

---

## Aula 15 — Aplicações com Matrizes

Aplicação prática de matrizes para representar informações.

| Arquivo | Descrição |
|---|---|
| `controle_assentos.c` | Sistema simples de controle de assentos utilizando matriz |

O programa trabalha com:

- `0` → Assento disponível
- `1` → Assento ocupado

Além disso, realiza a contagem dos assentos disponíveis e ocupados.

---

## Aula 16 — Strings

Introdução ao tratamento de **cadeias de caracteres**.

| Arquivo | Descrição |
|---|---|
| `contador caracteres.c` | Leitura de uma palavra e contagem dos caracteres |

O programa percorre a string até encontrar o caractere especial:

```c
'\0'
```

---

## Aula 17 — Funções da biblioteca `string.h`

Estudo de funções importantes para manipulação de strings:

```c
strlen()
strcmp()
strcpy()
strcat()
```

| Arquivo | Descrição |
|---|---|
| `usuarios.c` | Cadastro de usuário e identificação de perfil |
| `produtos.c` | Cadastro de produtos e categorias |
| `estudantes.c` | Identificação de curso e criação de mensagem personalizada |

---

## Aula 18 — Funções

Estudo da criação e utilização de **funções em C**.

| Arquivo | Descrição |
|---|---|
| `calculadora.c` | Calculadora com menu e operações matemáticas |
| `maiorpreco.c` | Comparação entre dois valores |
| `parimpar.c` | Verificação de números pares e ímpares |
| `dobroestoque.c` | Cálculo do dobro de uma quantidade |
| `exibirlinha.c` | Função que imprime uma linha de caracteres |
| `fatorial.c` | Cálculo do fatorial de um número |

---

# Como executar os programas

Para compilar os arquivos, é necessário possuir um compilador C instalado, como o **GCC**.

### 1. Entre na pasta desejada

```bash
cd aula-14-matrizes
```

### 2. Compile o programa

```bash
gcc atv1.c -o atv1
```

### 3. Execute

**Linux / macOS:**

```bash
./atv1
```

**Windows:**

```bash
atv1.exe
```

> Para executar outros exercícios, basta alterar o nome do arquivo durante a compilação.

### Atenção aos arquivos com espaços

Para arquivos como:

```text
contador caracteres.c
```

utilize aspas:

```bash
gcc "contador caracteres.c" -o contador
```

---

## Tecnologias utilizadas

<div>

<img src="https://skillicons.dev/icons?i=c,git,github,vscode" />

</div>

---

## Objetivo

Este repositório faz parte da minha jornada de aprendizado em **Ciência da Computação**.

A ideia é manter aqui os exercícios e atividades desenvolvidos durante a disciplina, registrando minha evolução no aprendizado da linguagem **C** e dos fundamentos da programação.

---

<div align="center">

### Desenvolvido por

**Cauã Robson Candeias Altino**

Estudante de Ciência da Computação — **UVV**

[GitHub](https://github.com/cauardev)

<br>

<sub>UVV · Ciência da Computação · 2026</sub>

</div>
