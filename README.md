# 📊 Calculadora IMC

Uma simples calculadora de Índice de Massa Corporal (IMC) desenvolvida em C, criada em 2024 durante meu aprendizado da linguagem.

## 📝 Descrição

Este projeto calcula o IMC (Índice de Massa Corporal) de uma pessoa baseado em seu peso (em kg) e altura (em metros), fornecendo uma classificação detalhada do estado de saúde.

## 🎯 Funcionalidades

- ✅ Cálculo automático do IMC
- ✅ Classificação em categorias de peso:
  - Muito abaixo do peso (IMC ≤ 16.9)
  - Abaixo do peso (IMC 17.0 - 18.4)
  - Peso normal (IMC 18.5 - 24.9)
  - Acima do peso (IMC 25.0 - 29.9)
  - Obesidade grau I (IMC 30.0 - 34.9)
  - Obesidade grau II (IMC 35.0 - 40.0)
  - Obesidade grau III (IMC > 40.0)

## 🛠️ Como Compilar e Executar

### Pré-requisitos
- Compilador C (gcc, clang, ou similar)

### Compilação
```bash
gcc IMC.c -o imc
```

### Execução
```bash
./imc
```

## 📋 Como Usar

1. Execute o programa
2. Digite seu peso em quilogramas quando solicitado
3. Digite sua altura em metros quando solicitado
4. O programa exibirá seu IMC e a classificação correspondente

### Exemplo de Uso
```
=== Calculadora IMC ===

Digite seu peso: 70
Digite sua altura: 1.75
Peso normal, IMC: 22.86.
```

## 📚 Sobre o Projeto

Este foi um projeto desenvolvido durante meu aprendizado inicial em C em 2024, com o objetivo de praticar:
- Variáveis e tipos de dados (float)
- Entrada e saída com `scanf()` e `printf()`
- Estruturas condicionais (if/else)
- Cálculos matemáticos

## 📄 Licença

Este projeto é de código aberto e está disponível para fins educacionais.

---

**Desenvolvido por:** RenanCCarrara996  
**Ano:** 2024