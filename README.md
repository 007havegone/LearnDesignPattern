# Enviroment Setting

Current only config the env for the Window with Visual studio 2022 x64.

1. Install vcpkg
```
git clone https://github.com/microsoft/vcpkg.git
cd vcpkg
bootstrap-vcpkg.bat # on Windows
bootstrap-vcpkg.sh  # on Linux
```

2. Install Boost and lib with Vcpkg
```
# boost library
.\vckpg.exe install boost:x64-windows
# boost dependency injectoion library
.\vcpkg.exe install bext-di:x64-windows
# google test
 .\vcpkg.exe install gtest:x64-windows
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
