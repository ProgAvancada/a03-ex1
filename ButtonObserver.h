#pragma once

//Forward declaration da classe Button. Evita problemas com #include ciclico.
//Mais detalhes: https://en.wikipedia.org/wiki/Forward_declaration
class Button;

/**
 Objetos interessados em ouvir cliques de botão devem implementar essa interface
 */
class ButtonObserver 
{
	public:
        //Método que será acionado quando o botão for clicado.
        //O parametro source contem a referência do botão clicado.
		virtual void onClick(Button* source) = 0;
    
        //Toda classe com métodos virtuais precisa necessariamente de um destrutor virtual vazio.
		virtual ~ButtonObserver() {}
};
