#include <iostream>
#include <stdexcept>
#include <iostream>
#include <list>
#include <vector>

#include "Datagrama.h"
#include "Segmento.h"
#include "TabelaDeRepasse.h"
#include "No.h"
#include "Roteador.h"
#include "Processo.h"
#include "ServidorWeb.h"
#include "Navegador.h"
#include "Hospedeiro.h"

using namespace std;


int main()
{
    /*vector<Processo*>* p = new vector<Processo*>();
    Segmento *s1 = new Segmento(11, 12, "oi");
    Datagrama *d1 = new Datagrama(10, 20, 8, s1);
    Roteador *r1 = new Roteador(18);
    Roteador *r2 = new Roteador(19);
    Hospedeiro *h1 = new Hospedeiro(60, r2);
    r1->receber(d1);
    delete r1;
    cout << d1->getDado()->getDado() << endl;
    h1->adicionarNavegador(25);
    h1->adicionarServidorWeb(24, "oi");
    p = h1->getProcessos();
    cout << p->at(0)->getPorta() << endl;
    delete h1;*/

    vector<Processo*>* p = new vector<Processo*>();
    Segmento *s1 = new Segmento(10, 20, "ola");
    Segmento *s2 = new Segmento(10, 30, "ola");
    Datagrama* d1 = new Datagrama(12, 8, 10, s1);
    Datagrama* d2 = new Datagrama(12, 8, 10, s2);
    Roteador *r1 = new Roteador(1);
    Roteador *r2 = new Roteador(2);
    Hospedeiro *h = new Hospedeiro(10, r1);
    h->adicionarServidorWeb(20, "oi");
    r2->getTabela()->setPadrao(r1);
    r1->getTabela()->setPadrao(h);
    r2->receber(d1);
    r2->processar();
    r1->processar();
    h->processar();
    /*h->adicionarNavegador(20);
    h->adicionarServidorWeb(30, "oi");
    p = h->getProcessos();

    for(unsigned int i = 0; i < p->size(); i++) {
		cout << p->at(i)->getPorta() << endl;
	}
	h->receber(d1);
	h->receber(d2);
	h->processar();
	h->processar();*/
return 0;
}
