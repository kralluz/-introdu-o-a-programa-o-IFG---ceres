    //Escreva um programa que leia o nome do vendedor, o seu salário base mensal 
    //e o valor do total de vendas realizadas por ele durante o mês. 
    //Sabendo que este vendedor recebe comissão de 15% sobre o valor das vendas efetuadas por ele 
    //e que o seu salário final é a composição do salário base mais o valor da comissão valor das vendas efetuadas por ele 
    //e que o seu salário final é a //composição do salário base mais o valor da comissão, 
    //calcule e mostre o nome do vendedor, seu salário final e a porcentagem recebida a mais em relação ao seu salário base mensal.
    
    
    
    
    #include <iostream>
    using namespace std;
    
    int main()
    {
        string name; // Declaração da variável name como uma string já que a string armazena vários caracteres
        float salario_base, vendas_do_mes, comissao, salario_final;  // Declaração das variáveis como salario base, vendas do mês, comissão e o salario final
    
        // Recebendo os dados (nome completo do vendedor)
        cout << "Qual o seu nome\n";
        getline(cin, name); // Utiliza a função getline para ler o nome do usuário com espaços em branco
        
        // Recebendo os dados (Salário do vendedor)
        cout << "Qual o seu salário base mensal em R$\n";
        cin >>  salario_base; // Utiliza a função getline para ler o nome do usuário com espaços em branco
        
        // Recebendo os dados (Salário do vendedor)
        cout << "Qual o valor de vendas realizadas por você durante o mês?\n";
        cin >>  vendas_do_mes; // Utiliza a função getline para ler o nome do usuário com espaços em branco
        
        
        comissao = 0.15*vendas_do_mes;
        salario_final = salario_base+comissao;
    
        // exibindo o nome do vendedor, seu salário final e a porcentagem recebida a mais em relação ao seu salário base mensal.
        cout <<"Olá " << name << " o seu salário total é de R$" << salario_final << ",00   Você recebeu uma comissão de 15 porcento sobre as suas vendas e a sua comissão é de R$"<< salario_final-salario_base <<",00 ." <<endl;
    
    
    //// O "return 0;" é uma instrução usada no final do programa em C++, que encerra a execução do programa e retorna um valor para o sistema operacional. O valor retornado é conhecido como "código de saída" ou "código de retorno". O valor padrão retornado é 0, indicando que o programa executou com sucesso. Esse valor pode ser utilizado para controlar a execução do programa e para informar ao sistema operacional se houve algum erro durante a execução do programa.
    }