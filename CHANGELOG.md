# Changelog
Todas as mudanças notáveis neste projeto serão documentadas aqui.

O formato segue o padrão **Keep a Changelog**  
e a versão segue **Semantic Versioning (SemVer)**.

---

## [Unreleased]
### Adicionado
- Estrutura inicial para a nova arquitetura do firmware usando **CMake**.
- Definição das camadas do novo sistema (drivers, core, modules, ui).
- Planejamento da reconstrução completa do hardware no **KiCad** com boas práticas modernas de layout.
- Definição da família de sistemas ThermoLogSystem:  
  - ThermoSense (hardware + firmware)  
  - ThermoLogger (captura e visualização)  
  - ThermoMine (análise, ML/IA, mineração de dados)

### Alterado
- Migração de PlatformIO para toolchain baseada em CMake (em progresso).
- Reorganização do repositório em múltiplos módulos independentes (roadmap).

### Obsoleto
- APIs antigas do firmware baseadas em PlatformIO/Arduino serão removidas após estabilização da nova estrutura.

---

## [v0.1.0] – 2025-11-13
### Adicionado
- Inclusão do **firmware legado** desenvolvido originalmente usando:
  - Arduino Mega 2560
  - PlatformIO
  - DS1307 RTC
  - SD card (SdFs/SdFat antigo)
  - Display LCD 16x2 e menu LiquidMenu
  - Termopares tipo K via módulos SPI dedicados  
- Adição de todas as classes e módulos históricos, incluindo:
  - `ThermoparK` :contentReference[oaicite:0]{index=0}  
  - `SPISensor` :contentReference[oaicite:1]{index=1}  
  - `Button` :contentReference[oaicite:2]{index=2}  
  - `RTC.h` / `DateTime.h`   
  - `SDCardManager.h` :contentReference[oaicite:4]{index=4}  
  - Lógica completa de controle térmico em `main.cpp` :contentReference[oaicite:5]{index=5}

### Alterado
- Reconstrução parcial do `platformio.ini` com dependências aproximadas, pois o arquivo original estava corrompido.  
  (Algumas bibliotecas antigas não estão mais disponíveis.)  
  :contentReference[oaicite:6]{index=6}

### Obsoleto
- Toda a versão v0.1.0 é considerada **legada**:
  - Não compila em ambientes modernos devido a bibliotecas descontinuadas.
  - Arquitetura monolítica e acoplada.
  - Uso intensivo de APIs de 2018/2019.

### Planejado (para substituição futura)
- Reescrita completa do firmware usando:
  - CMake
  - Arquitetura modular
  - Padrões de projeto (State, Strategy, Observer)
  - Drivers independentes e desacoplados
- Modernização do sistema de logging, menus e controle de temperatura.

### Hardware
- Hardware legado v0.1.0 criado no *Proteus (ISIS/Ares)* incluído como referência histórica.
- Início da reconstrução completa no **KiCad**, seguindo:
  - Separação adequada de planos
  - Rotas limpas para sinais SPI/RTD/termopar
  - Regras modernas de EMC/EMI
  - Organização hierárquica de esquemáticos
  - Footprints padronizadas e 3D

---

## Histórico de versões
- **v0.1.0** — Firmware e hardware originais legados (PlatformIO + Proteus)
- Próxima versão planejada: **v0.2.0** (CMake + KiCad + arquitetura modular)

---

