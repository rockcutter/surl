# surl
urlを短縮するプログラム

## 概要
コマンドライン引数で渡されたurlを短縮するためのプログラムです。

## build
```bash=
git clone https://github.com/rockcutter/surl
cd surl
mkdir bld
cd bld
cmake ../
make
```

## つかいかた
```bash=
# 基本の使い方
./surl "[url]"
# windowsであれば、出力をclipにパイプで流すことでクリップボードに直接コピーできる
./surl.exe "[url]" | clip
```