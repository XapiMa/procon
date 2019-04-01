# 競技プログラミング用メモ

## 環境設定
### コンパイラ
- c++のコンパイラをclangからgccに変更する
- bits/stdc++.h ヘッダファイルをincludeするため
  - 全てのヘッダファイルを一括してインクルードしてくれる
```sh
brew install gcc
sudo ln -sf /usr/local/bin/g++-8 /usr/local/bin/g++
```

### GDB
- Macで動かすにはいくつかの配慮が必要
- [参考](https://qiita.com/kaityo256/items/d2f7ac7acc42cf2098b2)
-
### IDE
- MacでのIDEにはClionを用いる
- [参考](https://qiita.com/sifue/items/a6d33d0d75f32cf0c728)
