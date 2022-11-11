# Template para Global

Atividade avaliativa da matéria Disruptive Architectures IoT e IA 

# Arduino e Node-Red

**Gabriel de Nicola Gonçalves RM 88803** </br>
**Gustavo de Souza Nascimento RM 88804** </br>
**João Victor Deziderio       RM 88805** </br>
**Nathan Pagliari Augusto     RM 88806** 

**Turma: 2TDSF**

## Objetivo 

O desafio está dividido em 2 questões:

1)[5 pontos] Um dos grandes problemas do trânsito é encontrar uma vaga para estacionar. Buscando auxiliar os clientes de um estacionamento, a empresa precisa desenvolver uma aplicação que faça a detecção de quantas vagas estão disponíveis. O desafio do seu grupo é:Simule um protótipo no Tinkercad (https://www.tinkercad.com/) que contenha:
- 2 (dois) sensores ultrassônicos;
- 2 (dois) LEDs vermelhos;
- 2 (dois) LEDs verdes
- 1 (um) display LCD.Como o sistema vai funcionar:

Suponha que cada sensor ultrassônico está instalado na altura de 2 m do solo, posicionado acima de uma vaga para estacionar. Sendo assim, se um carro parar nesta vaga, o sensor detectará uma distância menor que 2 m, indicando que o local foi preenchido.

Como demonstrar o funcionamento do protótipo: Cada  vaga  deverá  ter  um  sensor  ultrassônico,  um  LED  vermelho  e  um  LED  verde.  Se  a  vaga  estiver ocupada, o LED vermelho deverá acender e o verde apagar, caso contrário, o LED verde deverá ficar ligado e o vermelho desligado.

O display LCD deverá mostrar a quantidade de vagas LIVRES e a quantidade de vagas OCUPADAS do estacionamento.

2)[5 pontos] Inspirado em uma arquitetura simples IoT, faça o desenvolvimento de um gateway utilizando o Node-Red. 

Como o sistema vai funcionar:

Um flow recebe as informações dos sensores e envia para o segundo flow que irá exibir em um dashboard o statusdas vagas.Como demonstrar o funcionamento do protótipo:Desenvolvam 2 fluxos no Node-Red:Fluxo1-Gateway que recebe as informações das vagas via serial e envia (publisher) via protocolo MQTT.  Simule o estacionamento com 2 vagas (vaga A e vaga B) utilize o node “inject”. Oformato da mensagem dos sensores é:•Somente a vaga A disponível → envia “A”•Somente a vaga B disponível → envia “B”•Ambas as vagas disponíveis → envia “AB”•Nenhuma vaga disponível → envia “X”Fluxo2-Dashboard  que  recebe  (subscriber)  os  dados  via  protocolo  MQTT  e  exibe  o  status  em  um Dashboard.

## Diagrama do projeto

Imagem para o desenvolvimento da atividade.

<img src="/Simulação.png" width="550">
<img src="/node-red-img.png" width="550">

