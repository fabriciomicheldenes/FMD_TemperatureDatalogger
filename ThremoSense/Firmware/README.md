# ThermoSense – Firmware v0.1.0 (Versão Legada)

Esta é a **versão original do firmware** do módulo **ThermoSense**, desenvolvida entre 2018–2019 usando **Arduino Framework + PlatformIO**.  
O objetivo desta versão foi implementar toda a lógica de controle térmico, leitura dos sensores, registro em SD e interface via menus LCD.

⚠️ **IMPORTANTE:**  
Com a perda do arquivo `platformio.ini` original e a atualização das bibliotecas ao longo dos anos, **esta versão não compila mais** em ambientes modernos. O código depende de múltiplas bibliotecas antigas e APIs obsoletas que não estão mais disponíveis ou mudaram significativamente.

Uma **nova versão**, totalmente reestruturada usando **CMake**, arquitetura modular e padrões de projeto (**State, Strategy, Observer, Drivers separados, etc.**) está em desenvolvimento.

---

## 📦 Arquitetura do Firmware (v0.1.0)

O firmware integrava diversos módulos, incluindo:

- Leitura de até **18 sensores termopar tipo K**, via classe `ThermoparK` baseada em SPI  
  :contentReference[oaicite:0]{index=0}
- Driver genérico de comunicação SPI (`SPISensor`)  
  :contentReference[oaicite:1]{index=1}
- Sistema de botões com debounce via classe `Button`  
  :contentReference[oaicite:2]{index=2}
- Estruturas de controle térmico (`TemperatureLimits`)  
  :contentReference[oaicite:3]{index=3}
- Manipulação de data/hora via DS1307 (`DateTime.h` + `RTC.h`)  
  :contentReference[oaicite:4]{index=4}  
  :contentReference[oaicite:5]{index=5}
- Rotinas de leitura e parsing de arquivos CSV no SD (`SDCardManager.h`)  
  :contentReference[oaicite:6]{index=6}
- Lógica completa de controle de aquecimento/resfriamento, logging e operação principal em `main.cpp`  
  :contentReference[oaicite:7]{index=7}

---

## 📁 Configuração PlatformIO (arquivo reconstruído)

A reconstrução parcial de dependências foi possível através das versões comentadas no `platformio.ini`:  
:contentReference[oaicite:8]{index=8}

Dependências identificadas:

- **RTClib**
- **Adafruit BusIO**
- **SD (Arduino oficial)**
- **LiquidCrystal**
- **LiquidMenu**
- **TimerOne**
- **SdFs (Greiman)**

**Porém**, muitas dessas bibliotecas sofreram alterações de API desde 2018, e várias chamadas presentes no código legado não existem mais nas versões modernas.

---

## ⚠️ Problemas conhecidos desta versão

### 1. 🔧 Bibliotecas obsoletas ou incompatíveis
A versão depende de antigas APIs das bibliotecas:

- DS1307
- LiquidMenu
- SdFs / SdFat versões antigas
- TimerOne antigo
- Classes de menu específicas (`LiquidSystem`, `LCD_Menu`) — **não presentes no repositório atual**

### 2. 📚 platformio.ini original perdido
O arquivo original, contendo versões específicas das bibliotecas, foi corrompido.  
A reconstrução atual é **aproximada**, o que impede a compilação exata da versão original.

### 3. ⚡ Uso intensivo de funções bloqueantes
Delays, polling e loops grandes exigem revisão para arquitetura moderna baseada em **eventos** e **máquinas de estado**.

### 4. 🧱 Arquitetura monolítica
A lógica principal está concentrada em `main.cpp`, misturando:

- controle de hardware  
- lógica de negócio  
- interface de usuário  
- leitura de sensores  
- logging  
- timers  

---

## 🛠️ Status da Versão v0.1.0

- **Estado:** Legada / Não compila em ambiente atual  
- **Objetivo original:** Prova de conceito completa e funcional  
- **Situação atual:** Preservada para referência histórica  

---

## 🚀 Próxima geração do firmware

Uma nova versão está em desenvolvimento, com:

- **CMake** em substituição ao PlatformIO  
- Portabilidade para múltiplas toolchains  
- Drivers independentes para LCD, SD, RTC, Sensores  
- Padrões de projeto (Strategy, Observer, State Machine, Adapter)  
- Modularização total:  
  - `/drivers`  
  - `/core`  
  - `/modules`  
  - `/ui`  
- Testes unitários via **Unity** ou **CppUTest**  
- Suporte futuro ao **ThermoLogger** e **ThermoMine**  
- Versionamento semântico completo (`v0.2.0`, `v0.3.0`…)

---

## 🏷️ Sobre esta release

Esta versão é registrada como:

