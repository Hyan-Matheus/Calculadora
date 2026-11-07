# 📋 Documento de Requisitos — Calculadora Acadêmica

Este documento apresenta os requisitos funcionais e não funcionais levantados para o desenvolvimento da Calculadora Acadêmica, servindo de guia para o escopo do projeto.

---

## 1. Requisitos Funcionais (RF)
Os requisitos funcionais definem as funcionalidades, ações e comportamentos esperados do sistema.

* **[RF01] Menu Interativo:** O sistema deve apresentar um menu inicial em modo texto (CLI) permitindo ao usuário escolher entre as operações matemáticas disponíveis.
* **[RF02] Operações Básicas:** O sistema deve executar as quatro operações aritméticas fundamentais: adição, subtração, multiplicação e divisão.
* **[RF03] Validação de Entrada:** O sistema deve conter verificações lógicas para identificar e impedir possível desvios em cálculos, exibindo uma mensagem de erro amigável ao usuário.
* **[RF04] Continuidade via Laço de Repetição:** O sistema deve apresentar um laço de repetição para permitir que o usuário realize múltiplos cálculos consecutivamente sem precisar reiniciar o programa.
* **[RF05] Expansão:** O sistema deve futuramente englobar outras metodologias de cálculos e funções básicas de figuras geométricas simples, como perímetro e área.

---

## 2. Requisitos Não Funcionais (RNF)
Os requisitos não funcionais determinam restrições técnicas, de desempenho, qualidade e usabilidade do software.

* **[RNF01] Linguagem de Programação:** Todo o código-fonte da aplicação deve ser desenvolvido em linguagem C.
* **[RNF02] Ambiente de Execução:** O software deve ser executado nativamente via linha de comando (terminal).
* **[RNF03] Modularização do Código:** O código deve evoluir para o uso de funções estruturadas, garantindo legibilidade, manutenção facilitada e reutilização lógica.
* **[RNF04] Padrão de Versionamento:** O desenvolvimento do projeto deve seguir estritamente o versionamento semântico (SemVer) e o fluxo de commits atômicos no GitHub.

---
* Observação: O escopo é flexível, com o objetivo de garantir a eficiência do programa e o pleno aprendizado.
