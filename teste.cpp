faça um programa em C++
O banco GASTADOR Ltda. precisa de um programa para determinar o limite de crédito da conta
especial de seus clientes a partir do saldo da conta-corrente e da poupança. Faça um programa em
C++ para ler o saldo da conta-corrente e da poupança de um cliente e escrever o seguinte:
• Mensagem de "Sem Direito à Conta Especial" se o cliente não possuir o requisito necessário para a
conta especial: o saldo em, pelo menos, uma das duas contas, conta-corrente ou poupança, deve
estar acima de R$ 1.000,00;
• O valor do limite de crédito da conta especial conforme a seguinte especificação: o valor do limite de
crédito da conta especial fornecido ao cliente deve ser o dobro do maior saldo, entre a contacorrente e a poupança, ou o tripo do menor saldo, devendo ser considerado o maior valor entre
essas duas situações.
Considere que os saldos da conta-corrente e da poupança não são iguais

ChatGPT
Segue o código em C++:

c
Copy code
#include <iostream>

using namespace std;

int main() {
    double saldo_cc, saldo_poupanca, limite;

    // Lendo os saldos da conta-corrente e da poupança
    cout << "Digite o saldo da conta-corrente: ";
    cin >> saldo_cc;
    cout << "Digite o saldo da poupança: ";
    cin >> saldo_poupanca;

    // Verificando se o cliente possui o requisito para conta especial
    if (saldo_cc <= 1000 && saldo_poupanca <= 1000) {
        cout << "Sem direito a conta especial." << endl;
    } else {
        // Calculando o limite de crédito
        double maior_saldo = saldo_cc > saldo_poupanca ? saldo_cc : saldo_poupanca;
        double menor_saldo = saldo_cc < saldo_poupanca ? saldo_cc : saldo_poupanca;
        limite = maior_saldo * 2 > menor_saldo * 3 ? maior_saldo * 2 : menor_saldo * 3;

        // Imprimindo o limite de crédito
        cout << "Limite de crédito: R$ " << limite << endl;
    }

    return 0;
}
Explicação do código:

Primeiramente, declaramos as variáveis saldo_cc e saldo_poupanca para armazenar os saldos da conta-corrente e da poupança, respectivamente, e a variável limite para armazenar o limite de crédito da conta especial.

Em seguida, lemos os saldos da conta-corrente e da poupança do usuário utilizando a função cin da biblioteca iostream.

Depois, verificamos se o cliente possui o requisito para conta especial, ou seja, se pelo menos um dos saldos é maior do que R$ 1.000,00. Caso contrário, imprimimos a mensagem "Sem direito a conta especial." e encerramos o programa.

Caso o cliente tenha o requisito para conta especial, calculamos o limite de crédito utilizando as seguintes regras:

Se o maior saldo for mais do que o dobro do menor saldo, então o limite de crédito será o dobro do maior saldo;
Caso contrário, o limite de crédito será o triplo do menor saldo.
Por fim, imprimimos o valor do limite de crédito utilizando a função cout da biblioteca iostream.

Obs: Este programa assume que os saldos informados pelo usuário são valores válidos (ou seja, números reais positivos). Para um programa mais robusto, seria necessário incluir validações para garantir que os valores informados pelo usuário estão dentro dos limites esperados e que são do tipo correto.





User

2 / 2

Faça um programa na linguagem C++ que receba:
• O código de um produto comprado, supondo que a digitação do código do produto seja sempre
válida, ou seja, 10, 20 ou 30;
• O peso do produto em quilos;
• O código do país de origem, supondo que a digitação do código seja sempre válida, ou seja, um
número inteiro entre 1 e 3.
De acordo com as tabelas a seguir:
Código do Produto Preço por Grama Código do País Imposto
10 R$ 10,00 1 0%
20 R$ 25,00 2 15%
30 R$ 35,00 3 25%
Calcule e mostre:
• O peso do produto convertido em gramas;
• O preço total do produto comprado;
• O valor do imposto, sabendo-se que ele é cobrado sobre o preço total do produto comprado e
depende do país de origem;
• O valor total do produto, sendo o preço do produto mais o impos
ChatGPT
Segue o código em C++:

c
Copy code
#include <iostream>

using namespace std;

int main() {
    int codigo_produto, codigo_pais;
    double peso, preco_grama, preco_total, imposto, valor_total;

    // Lendo os dados da compra
    cout << "Digite o codigo do produto (10, 20 ou 30): ";
    cin >> codigo_produto;
    cout << "Digite o peso do produto em quilos: ";
    cin >> peso;
    cout << "Digite o codigo do pais de origem (1, 2 ou 3): ";
    cin >> codigo_pais;

    // Convertendo o peso em gramas
    double peso_gramas = peso * 1000;

    // Calculando o preço total do produto comprado
    switch (codigo_produto) {
        case 10:
            preco_grama = 0.01 * 10;
            break;
        case 20:
            preco_grama = 0.01 * 25;
            break;
        case 30:
            preco_grama = 0.01 * 35;
            break;
    }
    preco_total = peso_gramas * preco_grama;

    // Calculando o imposto
    switch (codigo_pais) {
        case 1:
            imposto = 0;
            break;
        case 2:
            imposto = 0.15 * preco_total;
            break;
        case 3:
            imposto = 0.25 * preco_total;
            break;
    }

    // Calculando o valor total do produto
    valor_total = preco_total + imposto;

    // Imprimindo os resultados
    cout << "Peso do produto em gramas: " << peso_gramas << "g" << endl;
    cout << "Preco total do produto: R$ " << preco_total << endl;
    cout << "Valor do imposto: R$ " << imposto << endl;
    cout << "Valor total do produto: R$ " << valor_total << endl;

    return 0;
}
Explicação do código:

Primeiramente, declaramos as variáveis codigo_produto, codigo_pais, peso, preco_grama, preco_total, imposto e valor_total para armazenar os dados da compra e os resultados dos cálculos.

Em seguida, lemos os dados da compra do usuário utilizando a função cin da biblioteca iostream.

Convertemos o peso do produto de quilos para gramas.

Calculamos o preço total do produto comprado de acordo com a tabela de preços por grama de cada código de produto.

Calculamos o imposto de acordo com a tabela de impostos de cada código de país.

Calculamos o valor total do produto, somando o preço total e o imposto.

Por fim, imprimimos os resultados utilizando a função cout da biblioteca iostream.

Obs: Este programa assume que os códigos de produto e de país informados pelo usuário são valores válidos (ou seja, números inteiros dentro dos limites esperados). Para um programa mais robusto, seria necessário incluir validações para garantir que os valores informados pelo usuário estão dentro dos limites esperados e que são do tipo correto.





User
Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse trabalhador emitiu
dois cheques e agora deseja saber seu saldo atual. Sabe-se que cada operação bancária de
retirada está sujeita à tarifação de 0,38% e o saldo inicial da conta está zerado. Elabore um
algoritmo que receba o valor do salário depositado na conta, os valores dos dois cheques emitidos e
mostre o total de impostos descontados (tarifação) e o saldo atual.

faça em C++
ChatGPT
Segue abaixo um programa em C++ que recebe o valor do salário depositado na conta, os valores dos dois cheques emitidos e mostra o total de impostos descontados e o saldo atual:

c++
Copy code
#include <iostream>
using namespace std;

int main() {
    float salario, cheque1, cheque2, tarifa, saldo;

    // Leitura dos valores
    cout << "Informe o valor do salário depositado: R$ ";
    cin >> salario;
    cout << "Informe o valor do primeiro cheque emitido: R$ ";
    cin >> cheque1;
    cout << "Informe o valor do segundo cheque emitido: R$ ";
    cin >> cheque2;

    // Cálculo dos valores
    tarifa = (cheque1 + cheque2) * 0.0038; // 0.38% de tarifa em cada operação de retirada
    saldo = salario - cheque1 - cheque2 - tarifa;

    // Impressão dos resultados
    cout << "\nTotal de impostos descontados (tarifação): R$ " << tarifa << endl;
    cout << "Saldo atual: R$ " << saldo << endl;

    return 0;
}
O programa lê os valores do salário, do primeiro cheque emitido e do segundo cheque emitido, e então calcula o valor total de impostos descontados e o saldo atual. A tarifa é calculada aplicando-se uma taxa de 0,38% sobre o valor total dos cheques emitidos. O saldo atual é obtido subtraindo-se o valor dos cheques emitidos e a tarifa do salário depositado. Por fim, o programa imprime na tela o total de impostos descontados e o saldo atual.





User
Construa um algoritmo que calcule a quantidade de latas de tinta necessárias e o custo para pintar
tanques cilíndricos de combustível após o usuário informar a quantidade, a altura e o raio desses
cilindros, ambos em centímetros, sabendo que:
✔ a lata de tinta custa R$50,00;
✔ cada lata contém 5 litros;
✔ cada litro de tinta pinta 3 m²;
✔ a área do cilindro é dada pela soma das áreas da base superior e da inferior com a área lateral;
✔ a área de cada base é dada pela seguinte fórmula: Abase = π * R², onde R é o raio da
circunferência da base e π é uma constante de valor conhecido aproximado de 3,14;
✔ a área da lateral é dada pela seguinte fórmula: Alateral = 2 * π * R * H, onde H é a altura do cilindro;
✔ cada m² equivale a 10.000 cm² pois: 1 m² = 1 m * 1 m, cada 1 m equivale a 100 cm, então 100 cm *
100 cm = 10.000 cm²
ChatGPT
Segue abaixo o programa em C++ que calcula a quantidade de latas de tinta necessárias e o custo para pintar tanques cilíndricos de combustível:

c++
Copy code
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const float PI = 3.14;
    const float PRECO_LATA_TINTA = 50.00;
    const float CAPACIDADE_LATA_TINTA = 5.0;
    const float RENDIMENTO_TINTA = 3.0 * 10000.0; // 3m² em cm²

    float qtd_latas;
    float custo_total;
    float area_total;
    float altura, raio;

    cout << "Informe a altura do cilindro (em cm): ";
    cin >> altura;

    cout << "Informe o raio do cilindro (em cm): ";
    cin >> raio;

    float area_base = PI * pow(raio, 2);
    float area_lateral = 2 * PI * raio * altura;
    area_total = 2 * area_base + area_lateral;

    qtd_latas = ceil(area_total / RENDIMENTO_TINTA);
    custo_total = qtd_latas * PRECO_LATA_TINTA;

    cout << "\nQuantidade de latas necessárias: " << qtd_latas << endl;
    cout << "Custo total: R$" << custo_total << endl;

    return 0;
}
O programa utiliza as constantes PI (valor aproximado de π), PRECO_LATA_TINTA (preço de cada lata de tinta), CAPACIDADE_LATA_TINTA (capacidade de cada lata de tinta em litros) e RENDIMENTO_TINTA (rendimento de cada litro de tinta em cm²) para realizar os cálculos necessários.

O usuário informa a altura e o raio do cilindro, e o programa calcula a área total que será pintada. Com base nessa área e no rendimento da tinta, o programa calcula a quantidade de latas de tinta necessárias (arredondando para cima com a função ceil()) e o custo total da pintura. Em seguida, o programa exibe os resultados na tela.





User
1. Faça um programa em C++ que leia três valores inteiros e diferentes e mostre-os em
ordem decrescente. Utilize para tal uma seleção encadeada
ChatGPT
Segue o programa em C++ que lê três valores inteiros e diferentes e os mostra em ordem decrescente utilizando seleção encadeada:

cpp
Copy code
#include <iostream>
using namespace std;

int main() {
   int num1, num2, num3;

   cout << "Digite três números inteiros e diferentes: ";
   cin >> num1 >> num2 >> num3;

   if (num1 > num2) {
      if (num2 > num3) {
         cout << num1 << ", " << num2 << ", " << num3 << endl;
      } else {
         if (num1 > num3) {
            cout << num1 << ", " << num3 << ", " << num2 << endl;
         } else {
            cout << num3 << ", " << num1 << ", " << num2 << endl;
         }
      }
   } else {
      if (num1 > num3) {
         cout << num2 << ", " << num1 << ", " << num3 << endl;
      } else {
         if (num2 > num3) {
            cout << num2 << ", " << num3 << ", " << num1 << endl;
         } else {
            cout << num3 << ", " << num2 << ", " << num1 << endl;
         }
      }
   }

   return 0;
}
O programa lê os três números inteiros e diferentes e utiliza seleção encadeada para verificar qual é o maior e o menor número entre eles e, em seguida, exibe os números em ordem decrescente.





User
Para participar da "Categoria Ouro" do 1º Campeonato Mundial de Bolinha de Gude
o jogador deve pesar entre 70 Kg (inclusive) e 80 Kg (inclusive) e medir de 1,75 m
(inclusive) a 1,90 m (inclusive). Construa um programa em C++ que leia a altura e o peso
de um jogador e determine se o jogador está apto a participar do campeonato
mostrando uma das seguintes mensagens conforme cada situação:
● "Recusado por peso": se somente o peso do jogador for inválido;
● "Recusado por altura": se somente a altura do jogador for inválida;
● "Recusado por peso e altura": se a altura e o peso do jogador forem inválidos;
● "Aceito": se a altura e o peso do jogador estiverem dentro da faixa especificada.
ChatGPT
Segue abaixo o programa em C++ que atende aos requisitos solicitados:

c++
Copy code
#include <iostream>
using namespace std;

int main() {
    float altura, peso;
    cout << "Digite a altura do jogador em metros: ";
    cin >> altura;
    cout << "Digite o peso do jogador em Kg: ";
    cin >> peso;
    
    if (peso < 70 || peso > 80) {
        if (altura < 1.75 || altura > 1.90) {
            cout << "Recusado por peso e altura" << endl;
        } else {
            cout << "Recusado por peso" << endl;
        }
    } else if (altura < 1.75 || altura > 1.90) {
        cout << "Recusado por altura" << endl;
    } else {
        cout << "Aceito" << endl;
    }
    
    return 0;
}
O programa lê a altura e o peso do jogador e faz a validação das condições para participação no campeonato. Se apenas o peso for inválido, é mostrada a mensagem "Recusado por peso". Se apenas a altura for inválida, é mostrada a mensagem "Recusado por altura". Se tanto a altura quanto o peso forem inválidos, é mostrada a mensagem "Recusado por peso e altura". Se ambos estiverem dentro da faixa especificada, é mostrada a mensagem "Aceito".





User
Um mercado está vendendo frutas com a seguinte tabela de preços:
Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra
ultrapassar R$ 35,00, receberá ainda um desconto de 20% sobre esse total.
Escreva um programa em C++ que receba a quantidade (em Kg) de morangos e a
quantidade (em Kg) de maçãs adquiridas e escreva o valor a ser pago pelo
cliente.
ChatGPT
Segue abaixo o programa em C++ que resolve o problema proposto:

cpp
Copy code
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double PRECO_MORANGO = 2.50; // Preço do Kg de morango
    const double PRECO_MACA = 1.80; // Preço do Kg de maçã
    const double DESCONTO = 0.20; // Desconto para compras acima de 8 Kg ou R$35,00
    const double LIMITE_KG = 8.0; // Limite em Kg para receber o desconto
    const double LIMITE_VALOR = 35.0; // Limite em valor para receber o desconto

    double kg_morango, kg_maca;
    double valor_morango, valor_maca, valor_total, desconto, valor_final;

    cout << "Digite a quantidade de Kg de morango: ";
    cin >> kg_morango;

    cout << "Digite a quantidade de Kg de maçã: ";
    cin >> kg_maca;

    valor_morango = PRECO_MORANGO * kg_morango;
    valor_maca = PRECO_MACA * kg_maca;
    valor_total = valor_morango + valor_maca;

    if (kg_morango + kg_maca > LIMITE_KG || valor_total > LIMITE_VALOR) {
        desconto = DESCONTO * valor_total;
        valor_final = valor_total - desconto;
    } else {
        valor_final = valor_total;
    }

    cout << fixed << setprecision(2);
    cout << "Valor a ser pago: R$ " << valor_final << endl;

    return 0;
}
O programa começa declarando as constantes com os preços, limites e desconto. Em seguida, lê a quantidade de Kg de morango e de maçã adquiridos. Depois, calcula o valor total da compra sem o desconto, verificando se o cliente tem direito a ele. Se tiver, calcula o valor do desconto e subtrai do valor total. Por fim, exibe o valor final a ser pago pelo cliente.

É importante ressaltar que a tabela de preços e os limites para receber o desconto são hipotéticos e podem variar de mercado para mercado.





User
Escreva um programa em C++ que apresente o menu a seguir,
permita que o usuário escolha a opção desejada, receba os dados
necessários para executar a operação e mostre o resultado.
Verifique a possibilidade de a opção escolhida ser inválida e não
se preocupe com restrições como, por exemplo, salário negativo.
Menu de opções:
1 – Imposto a ser pago e salário final
2 – Novo salário com aumento
3 – Classificação
Digite a opção desejada:
32
© Rafael Feitosa
Exercícios
● Na opção 1: receber o salário de um funcionário, calcular e mostrar o valor do imposto e o salário final usando as
regras a seguir:
● Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor do novo salário com aumento, usando as
regras a seguir:
● Na opção 3: receber o salário de um funcionário e mostrar sua classificação usando a tabela a seguir:
Salário Aumento
Maior que R$ 3.000,00 R$ 450,00
De R$ 2.000,00 (inclusive) a R$ 3.000,00 (inclusive) R$ 300,00
De R$ 1.500,00 (inclusive) a R$ 2.000,00 R$ 250,00
Menor que R$ 1.500,00 R$ 100,00
Salário Imposto
Menor que R$ 1.100,00 5%
De R$ 1.100,00 a R$ 3.000,00 10%
Acima de R$ 3.000,00 15%
Salário Classificação
Até R$ 1.500,00 (inclusive) Mal remunerado
Maior que R$ 1.500,00 Bem remunerado
ChatGPT
Segue abaixo o código em C++ que implementa o menu de opções e as operações solicitadas:

cpp
Copy code
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int opcao;
    double salario, imposto, salarioFinal, novoSalario;

    cout << "Menu de opcoes:" << endl;
    cout << "1 - Imposto a ser pago e salario final" << endl;
    cout << "2 - Novo salario com aumento" << endl;
    cout << "3 - Classificacao" << endl;
    cout << "Digite a opcao desejada: ";
    cin >> opcao;

    switch(opcao) {
        case 1:
            cout << "Digite o salario do funcionario: ";
            cin >> salario;

            if (salario < 1100.0) {
                imposto = salario * 0.05;
            } else if (salario <= 3000.0) {
                imposto = salario * 0.1;
            } else {
                imposto = salario * 0.15;
            }

            salarioFinal = salario - imposto;

            cout << "Imposto a ser pago: R$" << fixed << setprecision(2) << imposto << endl;
            cout << "Salario final: R$" << fixed << setprecision(2) << salarioFinal << endl;
            break;

        case 2:
            cout << "Digite o salario do funcionario: ";
            cin >> salario;

            if (salario > 3000.0) {
                novoSalario = salario + 450.0;
            } else if (salario >= 2000.0) {
                novoSalario = salario + 300.0;
            } else if (salario >= 1500.0) {
                novoSalario = salario + 250.0;
            } else {
                novoSalario = salario + 100.0;
            }

            cout << "Novo salario: R$" << fixed << setprecision(2) << novoSalario << endl;
            break;

        case 3:
            cout << "Digite o salario do funcionario: ";
            cin >> salario;

            if (salario <= 1500.0) {
                cout << "Mal remunerado" << endl;
            } else {
                cout << "Bem remunerado" << endl;
            }

            break;

        default:
            cout << "Opcao invalida" << endl;
    }

    return 0;
}
Neste programa, utilizamos a estrutura switch para verificar qual opção foi selecionada pelo usuário. Em cada caso, executamos uma operação específica:

Na opção 1, calculamos o imposto a ser pago pelo funcionário e o salário final, de acordo com as regras estabelecidas.
Na opção 2, calculamos o novo salário do funcionário com base nas regras estabelecidas.
Na opção 3, verificamos a classificação do funcionário de acordo com o salário recebido.
Caso o usuário selecione uma opção inválida, o programa exibe uma mensagem informando que a opção é inválida.