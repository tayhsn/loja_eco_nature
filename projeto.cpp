#include <iostream>
#include <iomanip>
#include <string>

using namespace std ;

int main() {
    
  cout<<fixed<<setprecision(2) ;

  float valorA[5] = {0}, subtotalA = 0, totalA = 0 ;
  float valorB[5] = {0}, subtotalB = 0, totalB = 0 ;
  float totalDesc = 0, totalAcresc = 0, totalTotal = 0 ;
  int cod, op, qtd, i, resp ;
  string nome ;

      cout<<"\n     BEM VINDA À SUA LOJA DE PRODUTOS NATURAIS!    "<<endl;

      cout<<endl<<"Querida, qual o seu nome?"<<endl;
      cin>>nome ;

      cout<<endl<<nome<<", aderir ao consumo consciente, consumindo + PRODUTOS NATURAIS e - PLÁSTICO, faz bem para saúde do nosso corpo, da nossa mente & principalmente do nosso planeta. \n O mundo fica feliz quando nos tornamos ECOcientes ;)"<<endl;
    
    do { //menu principal
         cout<<"\n (: QUAL O SEU DESEJO PARA HOJE? :) "<<endl;

         cout<<"     1 - LOJA BOM PRO PLANETA"<<endl;
         cout<<"     2 - LOJA DIRETO DA NATUREZA "<<endl;
      
              cin>>op;

        if (op == 1) { //bom pro planeta
            
            do {
                      cout<<"\n OPA, QUE BOM VER VOCÊ QUERENDO MELHORAR O PLANETA!"<<endl;
                  
                    cout<<"\n Os produtos disponiveis são: "<<endl;
                    cout<<" CÓDIGO          PRODUTOS             PREÇO R$ "<<endl;
                    cout<<"     1   -  SABONETE FACIAL (BARRA)  -   8.50 "<<endl;
                    cout<<"     2   -  DESODORANTE NATURAL      -   10.00 "<<endl; 
                    cout<<"     3   -    SHAMPOO (SÓLIDO)       -   12.00 "<<endl; 
                    cout<<"     4   -  CONDICIONADOR (SÓLIDO)   -   12.50 "<<endl;
                    cout<<"     5   -     KIT ECOPAD C/ 2       -   5.00 "<<endl; 

                    cout<<"\nQual o codigo do produto?"<<endl;
                        cin>>cod ;
                    cout<<"Qual a quantidade desejada?"<<endl;
                        cin>>qtd ;
            
                          switch (cod) {
                            case 1: { subtotalA = (qtd * 8.50)  ; break; } 
                            case 2: { subtotalA = (qtd * 10.00) ; break; }
                            case 3: { subtotalA = (qtd * 12.00) ; break; }
                            case 4: { subtotalA = (qtd * 12.50) ; break; }
                            case 5: { subtotalA = (qtd * 5.00)  ; break; }
                          }  
                               totalA = totalA + subtotalA ;

                                  for (int i=0; i<=4; i++){
                                    if (valorA[i] == 0.00) {
                                        valorA[i] = subtotalA ;
                                        break;
                                    }
                                  }
                                 
                        cout<<"Compra realizada com sucesso!!"<<endl;
                        cout<<"Subtotal: R$"<<subtotalA<<endl;
                        
                        
                      cout<<"\nComprar Outro Produto [1] || Menu Inicial [2] || Finalizar Compra [3] "<<endl;
                        cin>>resp;
            
              } while (resp == 1) ;

        }   // fim if 1
          

        if (op == 2) { //direto da natureza 
        
            do {            
                        cout<<"\n OPA, QUE BOM VER VOCÊ QUERENDO MELHORAR SUA ALIMENTAÇÃO!"<<endl;
                    
                        cout<<"Os produtos disponiveis são: "<<endl;
                        cout<<"\n CÓDIGO        PRODUTOS         PREÇO R$ "<<endl;
                        cout<<"     1   -   ÓLEOS NATURAIS     -   12.00 "<<endl;
                        cout<<"     2   -   MIX OLEAGINOSAS    -   18.50 "<<endl; 
                        cout<<"     3   -    MIX TEMPEROS      -   15.00 "<<endl; 
                        cout<<"     4   -  PASTA DE AMENDOIN   -   17.50 "<<endl;
                        cout<<"     5   -  'CARNE' DE PLANTA   -   20.00 "<<endl; 

                        cout<<"\nQual o codigo do produto?"<<endl;
                            cin>>cod ;
                        cout<<"Qual a quantidade desejada?"<<endl;
                            cin>>qtd ;
                        
                              switch (cod) {
                                case 1: { subtotalB = (qtd * 12.00) ; break; } 
                                case 2: { subtotalB = (qtd * 18.50) ; break; }
                                case 3: { subtotalB = (qtd * 15.00) ; break; }
                                case 4: { subtotalB = (qtd * 17.50) ; break; }
                                case 5: { subtotalB = (qtd * 20.00) ; break; }
                              }  
                                     totalB = totalB + subtotalB ;

                                    for (int i=0; i<=4; i++){
                                      if (valorB[i] == 0.00) {
                                          valorB[i] = subtotalB ;
                                          break;
                                      }
                                    }

                            cout<<"Compra realizada com sucesso!!"<<endl;
                            cout<<"Subtotal: R$"<<subtotalB<<endl;
                          
                  
                            cout<<"\nComprar Outro Produto [1] || Menu Inicial [2] || Finalizar Compra [3] "<<endl;
                            cin>>resp;
            
            } while (resp == 1) ;               

        } //fim if 2

                                    totalTotal = totalA + totalB ;
    } while (resp == 2) ;

                           cout<<"\n    COMPRA FINALIZADA!"<<endl;
                           cout<<"\nValor total da compra: R$"<<totalTotal<<endl;
                           cout<<"\nForma de pagamento: "<<endl;
                           cout<<"[1] Pagamento à vista - desconto de 10%"<<endl;
                           cout<<"[2] Pagamento no cartão crédito - acréscimento de 5%"<<endl;
                                  cin>>op;

                                  switch (op){
                                    
                                    case 1: { 
                                      totalDesc = (totalTotal * 0.10) ;

                                      cout<<"\nTotal à pagar com desconto: R$"<<totalTotal - totalDesc<<endl;
                                      break;
                                    }

                                    case 2: {
                                      totalAcresc = (totalTotal * 0.05) ;

                                      cout<<"\nTotal à pagar com acréscimento no cartão: R$"<<totalTotal + totalAcresc<<endl;
                                      break;
                                    }

                                  } //fim switch

                                  cout<<endl<<nome<<", obrigada por fazer parte dessa mudança!"<<endl;

              return 0;
}
