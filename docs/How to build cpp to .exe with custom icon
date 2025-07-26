# 🛠️ How to Build a `.exe` from `.cpp` with a Custom Icon (Windows / MinGW)

This guide walks you through compiling a C++ program into a Windows executable (`.exe`) and embedding a custom `.ico` file as its icon.

---

## 📦 Requirements

- [x] MinGW or MSYS2 with `g++` and `windres` installed
- [x] A valid `.ico` file (e.g., `myicon.ico`)
- [x] Your C++ source file (e.g., `main.cpp`)

---

## 📁 Folder Structure Example

Place all the following files in one directory:

```
ProjectFolder/
├── main.cpp
├── myicon.ico
└── resource.rc
```

---

## 📄 Step 1: Create `resource.rc`

Create a plain text file named `resource.rc` with the following content:

```rc
IDI_ICON1 ICON "myicon.ico"
```

> ⚠️ File must be saved as `resource.rc`, not `resource.rc.txt`.

---

## 🔧 Step 2: Generate the Resource File

Use `windres` to convert the `.rc` file to `.res` in COFF format:

```bash
windres resource.rc -O coff -o resource.res
```

This command tells `windres` to:
- Parse the `.rc` file
- Output in COFF format (`-O coff`)
- Save the result as `resource.res`

---

## ⚙️ Step 3: Compile the Executable with the Icon

Use `g++` to compile `main.cpp` and link the `.res` file:

```bash
g++ main.cpp resource.res -o output.exe
```

You now have:
- `output.exe` with your embedded icon

---

## 🧪 Test the Output

1. Refresh the folder (or restart Explorer) to see the icon change.
2. Run `output.exe` — it behaves just like any compiled C++ app, but now has your `.ico`.

---

## ❗ Troubleshooting

| Issue | Solution |
|-------|----------|
| `resource.res: file format not recognized` | Make sure you used `-O coff` in `windres` |
| `g++: command not found` | Ensure MinGW/bin is in your system PATH |
| Icon doesn't appear | Must be `.ico` format, 256x256 recommended |
| `.rc` not working | Ensure it’s saved with correct encoding and extension |

---

## 🧼 Optional Clean-up Script

Create a batch file to automate the build process:

```bat
@echo off
windres resource.rc -O coff -o resource.res
g++ main.cpp resource.res -o output.exe
pause
```

Save as `build.bat` and double-click to build easily.

---

## ✅ Final Checklist

- [x] Valid `.ico` file
- [x] Correct `.rc` format
- [x] `windres` used with `-O coff`
- [x] `g++` command links `resource.res`

You're good to go.