# SDL プロジェクト

## 必要条件

- CMake (バージョン 3.10 以上)
- SDL2
- C/C++コンパイラ (GCC, Clang, Visual Studio など)

## ビルド手順

### Windows

1. SDL2をインストールします（https://www.libsdl.org/download-2.0.php からダウンロード）
2. ダウンロードしたSDL2を`C:\SDL2`に展開します
3. 環境変数`Path`に`C:\SDL2\lib\x64`を追加します
4. 以下のコマンドを実行します：
   ```
   mkdir build
   cd build
   cmake ..
   cmake --build . --config Release
   ```
5. 実行ファイルは`build\Release\SDLApp.exe`に生成されます

### macOS

1. Homebrew を使用して SDL2 と cmake をインストールします：

   ```
   brew install cmake
   brew install sdl2
   ```

   CMake と SDL2 のインストールが完了したら、以下の手順でビルドを行います。

2. 以下のコマンドを実行します：
   ```
   mkdir build
   cd build
   cmake ..
   make
   ```

## 実行

ビルドが完了したら、`build`ディレクトリ内の`SDLApp`（Windows: `SDLApp.exe`）を実行します。
