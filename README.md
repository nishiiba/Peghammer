

# Peghammer – スティック型キーボード PCB & ファームウェア

![Peghammer – stick-style left-hand mechanical keyboard](peghammer.jpg)

Peghammer is an **open-source stick-style left-hand mechanical keyboard**
designed for manga drawing and illustration workflows.
It supports **Vial (wired)** and **ZMK (Bluetooth)** firmware.

Peghammer は、漫画・イラスト制作向けに設計した  
スティック型キーボード(左手デバイス)です。

詳細はビルドガイド(note)を確認して下さい｡

 **https://note.com/nishiiba/n/n56c571a729d1**
---

## 各データの保存先

- **PCB発注用ガーバーデータ**  
  `PCB/Gerberdata`

- **3Dプリント部品発注用データ**  
  `PCB/knob (stl)`

- **設計用 KiCad データ**  
  `PCB/kicad`

- **各種ファームウェア**  
  `firmware/`

※ データの使用については、各ライセンスの範囲内で自己責任にてご利用ください。

---

## Repository Structure

This repository is organized into multiple components, each with its own
license:

- **pcb/**  
  Hardware design files (schematics, PCB layouts, Gerber data)  
  Licensed under **CERN Open Hardware Licence v2 – Permissive (CERN-OHL-P-2.0)**

- **firmware/vial/**  
  Wired firmware based on **Vial** (RP2040)  
  Licensed under **GNU General Public License v2.0 (GPL-2.0)**

- **firmware/zmk/**  
  Bluetooth firmware configuration based on **ZMK**  
  Licensed under the **MIT License**

Each license applies **only** to its respective directory unless stated
otherwise.

---

## Licensing Overview

This project uses multiple open-source licenses:

- Hardware (PCB): CERN-OHL-P-2.0  
- Firmware (Vial): GPL-2.0  
- Firmware (ZMK): MIT  

Please refer to the `LICENSE` file in each directory for full license terms.

---

## Distribution and Sales Notes

- The hardware design may be manufactured and sold under the terms of
  CERN-OHL-P-2.0.
- If Vial firmware binaries (HEX / UF2) are distributed, the corresponding
  source code must be made available in accordance with GPL-2.0.
- ZMK firmware configurations are provided under the MIT License and may be
  used independently.

---

## Disclaimer

This project is provided “as is”, without any warranty.
The author is not responsible for any damage, loss, or issues arising from
the manufacture or use of this design.

---

## Author

- **nishiiba**
