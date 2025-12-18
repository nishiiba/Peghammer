# Peghammer – Vial Firmware (RP2040)

This directory contains the Vial-compatible firmware for the Peghammer
left-hand stick keyboard.

This firmware enables real-time keymap configuration using the Vial client
and is intended for wired RP2040-based controllers.

## How to Build and Flash

1. Build the firmware to generate a `.uf2` file.
2. Put the RP2040 board into bootloader mode.
3. Drag and drop the `.uf2` file onto the mounted RP2040 storage device.

## License

The firmware in this `vial/` directory is licensed under the  
**GNU General Public License, Version 2.0 (GPL-2.0)**.

This license applies **only** to the contents of the `firmware/vial/` directory.
Other firmware implementations or hardware designs in this repository are
licensed separately.

See the [LICENSE](./LICENSE) file for the full license text.

## Important Notes for Distribution and Sale

If you distribute this firmware in binary form (for example, as a HEX or UF2
file), including as part of a product or kit:

- You must provide access to the corresponding source code, as required by
  GPL-2.0.
- Providing a link to the public source repository is sufficient.
- Any modified versions of this firmware that are distributed must also be
  licensed under GPL-2.0.

These requirements apply only to the Vial firmware and do not affect the
hardware design or other firmware implementations in this repository.

## Third-Party Components and Licenses

This firmware incorporates the following third-party components:

| Component            | License  | Copyright Holder                    | Notes |
|----------------------|----------|-------------------------------------|-------|
| Vial Core Firmware   | GPL v2.0 | The Vial Project                    | Source code disclosure required |
| Pico SDK             | BSD-style| Raspberry Pi (Trading) Ltd.         | Copyright notice must be retained |

## Disclaimer

This firmware is provided “as is”, without any warranty.
