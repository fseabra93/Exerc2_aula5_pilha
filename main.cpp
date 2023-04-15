#include <iostream>
#include <vector>
using namespace std;

void imprime(vector<int>p);

int main() {

  vector<int>pilha;
  int valor;
  bool a;

  int op;

  do{
    cout << "Que operação deseja fazer na pilha?" << endl;
    cout << "1- Para adiconar um elemento na pilha;" << endl
         << "2- Para remover um elemento da pilha;" << endl
         << "3- Para retornar uma referência ao elemento mais recente da pilha" << endl
         << "4- Para saber se a pilha está vazia" << endl
         << "5- Para retornar o tamanho da pilha" << endl
         
         << "6- Para sair" << endl;
    cin >> op;

    switch(op){
      case 1:
        cout << "Digite o valor que deseja adicionar à pilha: ";
        cin >> valor;
        pilha.push_back(valor);
        imprime(pilha);
        
      break;
      case 2:
        a = pilha.empty();
        if (a){
          cout << "A pilha está vazia. Não há elementos para remover" << endl << endl;
        } else {
          int ultimo = pilha.back();
          pilha.pop_back();
        cout << "O último elemento da pilha, que era o "<< ultimo<<", foi removido." << endl;
        imprime(pilha);
        }
        
      break;
      case 3:
         a = pilha.empty();
        if (a){
          cout << "A pilha está vazia" << endl << endl;
        } else {
          cout << "O último elemento da pilha é o "<< pilha.back() << endl << endl;
        }
        
      break;
      case 4:
        a = pilha.empty();
        if (a){
          cout << "A pilha está vazia" << endl << endl;
        } else {
          cout << "A pilha não está vazia" << endl << endl;
        }
      break;
      case 5:
        cout << "Há " << pilha.size() << " elementos na pilha" << endl << endl;
      break;
      default:
        cout << "Sair do programa\n";
      break;
    }
    
  }while(op >= 1 && op <6);

  cout << "pilha = { ";
  for (auto i = pilha.begin(); i != pilha.end(); i++){
    cout << *i << " ";
  }
  cout << "}"<< endl << endl;


  
  
}

void imprime(vector<int>p){
  cout << endl;
  for (auto i = p.size()-1; i != -1; i--){
    cout << "|"<<p[i] << "|" << endl;
  }
  cout << " -" << endl << endl;

}