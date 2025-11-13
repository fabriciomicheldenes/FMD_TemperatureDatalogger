# ThermoSense – Release v0.1.0 (Versão Legada)

Este branch contém a **versão histórica v0.1.0** do sistema **ThermoSense**, incluindo:

- O **firmware legado** desenvolvido originalmente entre 2018–2019 usando  
  **PlatformIO + Arduino Mega 2560**
- O **hardware legado** desenvolvido no **Proteus (ISIS/Ares)** para prototipação rápida  
- Toda a estrutura original do projeto antes da modernização completa

Esta release foi preservada para fins de **referência técnica**, documentação, estudo e comparação com as versões futuras.

---

## 📌 Sobre esta versão (v0.1.0)

### 🔧 Firmware legado
O firmware desta versão inclui:

- Leitura de até **18 sensores termopares tipo K** via módulos SPI  
- Controle térmico com aquecimento/resfriamento automático  
- Sistema de menus via **LiquidCrystal + LiquidMenu**  
- Registro de dados de temperatura no **SD card**  
- RTC **DS1307** para timestamping  
- Uso intensivo de interrupções com **TimerOne**  
- Código estruturado em múltiplos módulos (`ThermoparK`, `SPISensor`, `RTC`, `SDCardManager`, etc.)

**Atenção:**  
Esta versão **não compila** mais em ambientes modernos do PlatformIO devido ao uso de **bibliotecas antigas e APIs obsoletas**.  
O arquivo `platformio.ini` original também se perdeu, e as dependências foram reconstruídas parcialmente.

Esta versão deve ser tratada como **legado**.

---

### 🧱 Hardware legado (Proteus v0.1)
O hardware desta release foi criado usando:

- **Labcenter Proteus (ISIS/Ares)**
- Módulos comerciais plug-and-play (MAX6675, RTC, LCD, SD, relés)
- Layout simples para prototipação rápida

Ele continua no repositório apenas como referência histórica.

---

## 🔜 Próxima geração do projeto

Uma nova versão moderna está em desenvolvimento, incluindo:

### 🛠️ Novo Firmware (em desenvolvimento)
- Reescrita completa usando **CMake**
- Arquitetura modular baseada em camadas
- Padrões de projeto (State, Strategy, Observer, Drivers)
- Drivers independentes para LCD, SD, RTC, SPI e sensores
- Estrutura compatível com ThermoLogger (GUI) e ThermoMine (AI/Analytics)

### 🧩 Novo Hardware (em desenvolvimento)
- Migração total do Proteus para **KiCad**
- Boas práticas modernas de layout PCB:
  - Separação de planos
  - Controle de impedância
  - Rotas organizadas para SPI e sinais sensíveis
  - Hierarquia e documentação profissional
  - Footprints padronizadas e 3D

---

## 🎯 Propósito do branch `release/v0.1.0`

Este branch existe para:

- Manter um registro congelado da primeira geração do projeto
- Servir como marco histórico no repositório
- Permitir comparação entre versões
- Apoiar migrações e reengenharia

Ele **não receberá mais atualizações** além de documentação da própria release.

---

## 📄 Documentos úteis incluídos

- Firmware legado completo em `ThremoSense/Firmware/`
- Projeto eletrônico legado em `ThremoSense/ElectronicProject/V0.1-Proteus/`
- Documentação histórica do hardware e firmware
- CHANGELOG documentando esta release

---

## 📌 Estado de manutenção

> ⚠️ **Esta versão está oficialmente arquivada.**  
> Todo novo desenvolvimento ocorrerá em `develop` e nas versões futuras (v0.2.x, v0.3.x…).

---

## ✔ Histórico

- **v0.1.0 (este branch)** — Primeira geração do firmware e hardware (legado)  
- **v0.2.0 (planejado)** — Firmware modular em CMake + novo hardware KiCad  
- **v0.3.0 (planejado)** — Integração com ThermoLogger e ThermoMine

---

Se você procura a versão mais recente, consulte o branch:

