# Enviroment Setting

Current only config the env for the Window with Visual studio 2022 x64.

1. Install vcpkg
```
git clone https://github.com/microsoft/vcpkg.git
cd vcpkg
bootstrap-vcpkg.bat # on Windows
bootstrap-vcpkg.sh  # on Linux
```

2. Install Boost with Vcpkg
```
# direct install
.\vckpg.exe install boost
# install a specific version
.\vcpkg.exe install boost:x64-window-static 
```

3. Add the Env into your PC
```
e.g.
VCPKG_ROOT = F:\XXXX\XXX\vcpkg
```

4. Update CMakeList.json
Ctrl + Shift + B

5. Build the project
F7 and run
