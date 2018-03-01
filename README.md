# Resolução do Exercício 1 - Padrão Observer

Nesta solução utilizaremos o padrão [Observer](https://pt.wikipedia.org/wiki/Observer) para que o botão seja capaz de notificar outras classes de que foi clicado.

Para isso criaremos uma interface chamada `ButtonObserver`, que define simplesmente o método `onClick`.

No C++, interfaces são criadas pelo conceito de [Abstract Base Classes (ABCs)](http://www.cs.technion.ac.il/users/yechiel/c++-faq/abc-defn.html), ou seja, uma classe contendo *apenas* métodos virtuais puros e um destrutor virtual. No Java, interfaces são criadas através da palavra chave `interface`.

Quem implementará a interface `ButtonObserver` será a classe `OfApp`. Note que essa classe representa a aplicação como um todo, portanto, é correto supor que ela deveria desenhar o círculo e o quadrado, já que esse desenho faz parte da lógica do aplicativo proposto no exercício e não de um botão específico.
