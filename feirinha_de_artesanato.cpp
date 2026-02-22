#include <iostream>
#include <vector>
#include <utility>
#include <functional>
#include <algorithm>
using namespace std;
int saida = 0;
int quantidade_de_objetos_em_estoque_inicio_do_dia;
vector<int> objetos_por_tipo;
vector<int> preco_objetos_tipo_1;
vector<int> preco_objetos_tipo_2;
int numero_de_clientes_que_vao_visitar_a_barraca;
vector<int> tipo_de_objeto_desejado_por_cliente;
void decidido(int i){
    int tipo = tipo_de_objeto_desejado_por_cliente[i];
    if(tipo == 1){
        if(preco_objetos_tipo_1.size() != 0){
            saida = saida + preco_objetos_tipo_1[preco_objetos_tipo_1.size() - 1];
            preco_objetos_tipo_1.pop_back();
        }
    }else{
        if(preco_objetos_tipo_2.size() != 0){
            saida = saida + preco_objetos_tipo_2[preco_objetos_tipo_2.size() - 1];
            preco_objetos_tipo_2.pop_back();
        }
    }
}
void indeciso(){
    int size1 = preco_objetos_tipo_1.size();
    int size2 = preco_objetos_tipo_2.size();
    if(size1 == 0 && size2 == 0) return;
    if(size1 > 0 && size2 == 0){
        saida = saida + preco_objetos_tipo_1[size1 - 1];
        preco_objetos_tipo_1.pop_back();
    }else if(size2 > 0 && size1 == 0){
        saida = saida + preco_objetos_tipo_2[size2 - 1];
        preco_objetos_tipo_2.pop_back();
    }else{
        if(preco_objetos_tipo_1[size1 - 1] == preco_objetos_tipo_2[size2 - 1]){
            saida = saida + preco_objetos_tipo_1[size1 - 1];
            preco_objetos_tipo_1.pop_back();
        }else if(preco_objetos_tipo_1[size1 - 1] < preco_objetos_tipo_2[size2 - 1]){
            saida = saida + preco_objetos_tipo_1[size1 - 1];
            preco_objetos_tipo_1.pop_back();
        }else{
            saida = saida + preco_objetos_tipo_2[size2 - 1];
            preco_objetos_tipo_2.pop_back();
        }
    }
}
int main(){
    //Entrada de dados
    cin >> quantidade_de_objetos_em_estoque_inicio_do_dia;
    for(int i = 0; i < quantidade_de_objetos_em_estoque_inicio_do_dia; i++){
        int x;
        cin >> x;
        objetos_por_tipo.push_back(x);
    }
    for(int i = 0; i < quantidade_de_objetos_em_estoque_inicio_do_dia; i++){
        int x;
        cin >> x;
        if(objetos_por_tipo[i] == 1){
            preco_objetos_tipo_1.push_back(x);
        }else{
            preco_objetos_tipo_2.push_back(x);
        }
    }
    cin >> numero_de_clientes_que_vao_visitar_a_barraca;
    for(int i = 0; i < numero_de_clientes_que_vao_visitar_a_barraca; i++){
        int x;
        cin >> x;
        tipo_de_objeto_desejado_por_cliente.push_back(x);
    }
    //Processamento
    sort(preco_objetos_tipo_1.begin(), preco_objetos_tipo_1.end(), greater<int>());
    sort(preco_objetos_tipo_2.begin(), preco_objetos_tipo_2.end(), greater<int>());
    for(int i = 0; i < tipo_de_objeto_desejado_por_cliente.size(); i++){
        if(tipo_de_objeto_desejado_por_cliente[i] == 0){
            indeciso();
        }else{
            decidido(i);
        }
    }
    cout << saida;
    return 0;
}