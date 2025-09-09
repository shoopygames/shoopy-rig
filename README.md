# 🦉 Shoopy-Rig

Shoopy-Rig is a modified version of [XMRig](https://github.com/xmrig/xmrig) customized for the Shoopy Treasure Hunt ecosystem. It is responsible for mining RandomX and providing energy for in-game mechanics.  

> **Note:** Shoopy-Rig is licensed under GPLv3. By using or distributing this software, you must comply with the terms of the GPLv3 license.

---

## Features

- RandomX mining optimized for integration with Shoopy-Minter.
- Custom modifications for Shoopy game mechanics.
- Cross-platform support: Windows and Linux.
- Minimal external dependencies for easier deployment.

---

## Build Instructions

### Windows

```bash
# Install dependencies (CMake, Visual Studio, etc.)
mkdir build
cd build
cmake .. -G "Visual Studio 17 2022" -A x64
cmake --build . --config Release
```

### Linux

```bash
mkdir build
cd build
cmake ..
make -j$(nproc)
```

> After building, the `shoopy-rig` executable will be generated in the `build/` folder.

---

## Usage

Shoopy-Rig is meant to be called by **Shoopy-Minter**. Do not run it standalone unless you are familiar with XMRig configuration options.  

Example:

```bash
./shoopy-rig -c config.json -o rig.shoopy.ir:3333 -u <ganjdari_address>
```

---

## License

Shoopy-Rig is licensed under the **GNU General Public License v3.0 (GPLv3)**.  
See the [LICENSE](LICENSE) file for details.  

> **Important:** If you redistribute Shoopy-Rig, you must provide the source code and comply with GPLv3 requirements.

---

## Contributing

Contributions are welcome! Please fork the repository and submit pull requests. Ensure that your changes comply with GPLv3 licensing.
