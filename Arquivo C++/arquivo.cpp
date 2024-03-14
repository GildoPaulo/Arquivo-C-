#include<iostream>
#include<string>
#include<fstream>


using namespace std;


int main(){
	
//	ifstream, ofstream fstream


    ofstream arquivo;
    
    arquivo.open("nome2.txt ", ios::app);
    
    
    arquivo<< " gildo paulo  Correia Victor" << endl;
    arquivo.close();
    
    
    
    ifstream arquivoe;
    
    string linha;
    arquivoe.open("nome.txt");
    
    if (arquivoe.is_open()){
    	
    	while(getline(arquivoe, linha)){
          cout<< linha << endl;    		
		}
	}
	
	else{
		cout<<"nao foi possivel abrir o arquivo "<< endl;
	}
    


/*
    
    fstream arquivo;
    char opc ='s';
    string nome;
    
    arquivo.open("nome01.txt", ios::out | ios::app);
    while((opc =='s' ) or (opc =='S')){
    	cout<< "Digite um nome:" ;
    	cin>> nome;
    	arquivo << "nome:" << "\n" <<nome ;
    	
    	cout<<"Digite um novo nome [s/n]? :";
    	cin>> opc;
    	
    	system("cls");
	}
    
    arquivo.close();
    
    arquivo.open("nome01.txt", ios::in);
    string linha;
    
    cout<<"Nomes digitados:" << endl;
    
    if(arquivo.is_open()){
    	while(getline(arquivo, linha)){
    		
    		cout<<linha <<endl;
    		cout<< "aqui";
		}
	}
	else{
		cout<<" nao foi possivel brir o arquivo"<< endl;
	}
	
	*/
    return 0;
	
}
