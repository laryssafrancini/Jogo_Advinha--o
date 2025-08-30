# 🎲 Jogo de Adivinhação em C  

Um jogo clássico de **adivinhação de números** feito em **linguagem C**.  
O programa gera um número aleatório entre **1 e 100**, e o jogador precisa descobrir qual é o número secreto.  

Cada tentativa é registrada, e o jogador tem até **100 chances** para vencer. 🕹️  

---

## 🧠 Como funciona?  

1. O programa gera automaticamente um **número secreto** entre 1 e 100.  
2. O jogador informa suas tentativas no terminal.  
3. A cada tentativa, o jogo dá uma dica:  
   - 🔼 “O número secreto é MAIOR”  
   - 🔽 “O número secreto é MENOR”  
4. Se o jogador acertar, recebe uma mensagem de **parabéns** 🎉.  
5. Caso chegue ao limite de **100 tentativas**, o jogo termina informando o número correto.  

---

## 📂 Estrutura do Código  

- **`#define TAMANHO_MAXIMO 100`** → Define o limite de tentativas.  
- **`srand(time(NULL))`** → Gera números aleatórios diferentes a cada execução.  
- **`struct` e variáveis** → Armazenam as tentativas feitas.  
- **Laço `while`** → Mantém o jogo ativo até o acerto ou o fim das tentativas.  
- **Condições `if-else`** → Comparam a tentativa com o número secreto e dão dicas ao jogador.  

---

## 🖥️ Exemplo de execução  

```bash
**********************************
 Bem vindo ao jogo de adivinhação!
**********************************

Tentativa #1: Digite um número entre 1 e 100: 50
O número secreto é MAIOR que 50. Tente novamente!

Tentativa #2: Digite um número entre 1 e 100: 75
O número secreto é MENOR que 75. Tente novamente!

Tentativa #3: Digite um número entre 1 e 100: 63
🎉 Parabéns Jogador! Você acertou o número secreto 63 em 3 tentativas.
