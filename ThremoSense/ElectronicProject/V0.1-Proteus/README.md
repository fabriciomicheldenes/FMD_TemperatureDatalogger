# ThermoSense – Hardware V0.1.0

Este diretório contém o **hardware do protótipo V0.1.0** do sistema de aquisição e registro de temperatura, desenvolvido para prototipação rápida no **Labcenter Proteus (ISIS/Ares)** e baseado em módulos comerciais.

## Visão geral

O hardware é centrado em um **Arduino Mega 2560**, responsável por:

- Leitura de sensores de temperatura (termopares e módulos de condicionamento externos)
- Exibição de informações em **LCD 16x2**
- Registro temporal com **RTC DS1307**
- Interface com o usuário via **teclado matricial**
- Acionamento de cargas através de **relé** e **triac** isolados por optoacopladores
- Armazenamento de dados em **cartão SD**

## Principais componentes

| Componente        | Descrição / Função principal                                     |
|-------------------|------------------------------------------------------------------|
| Arduino Mega 2560 | Unidade de controle principal (MCU)                             |
| MOD_DS1307        | Módulo RTC para data e hora                                     |
| LCD16X2           | Display de 16 colunas x 2 linhas para interface local           |
| Teclado           | Teclado matricial para navegação de menus e comandos            |
| SDCARD            | Módulo de cartão SD para armazenamento de dados                 |
| MCP23S17          | Expansor de I/O SPI para teclas, LEDs e sinais auxiliares       |
| LED-GREEN         | LED de indicação (por exemplo, sistema OK / operação normal)    |
| LED-RED           | LED de alerta / erro                                            |
| LED-YELLOW        | LED de status intermediário (processamento, gravação, etc.)     |
| IRF640            | MOSFET de potência para acionamento de cargas em corrente contínua |
| BC547             | Transistor NPN para estágios de acionamento/isolamento         |
| G5CLE-1-DC5 RELE  | Relé para acionamento de cargas                                 |
| ULN2003A          | Array de transistores Darlington para acionamento de relés      |
| MOC3031M          | Optotriac para acionamento isolado de cargas AC                 |
| BTA16-600B        | Triac de potência para cargas AC                                |
| PC817C            | Optoacoplador para isolação de sinais                           |

## Arquivos do projeto

Os arquivos de esquemático e PCB foram desenvolvidos no **Labcenter Proteus (ISIS/Ares)** e estão organizados nas subpastas deste diretório (por exemplo, `schematic/` e `pcb/`, conforme convenção definida no repositório).

## Versão de hardware

- **Versão:** V0.1.0  
- **Status:** Protótipo para validação de conceito, testes elétricos e de firmware inicial.

## Licença

MIT
