MugenTower
=========
このゲームはMac版OpenSiv3d0.4.0とC++17によって制作されました．

## 起動方法
empty.appを実行してください．

## 操作方法

* マウス　  : ステージ選択
* 左右キー  : 移動
* Zキー     : ダッシュ
* Xキー     : ジャンプ・ワイヤー射出
* Cキー     : 周りを見る

## ソースファイル
* srcフォルダに入っています
* https://github.com/ajinorisenpai/MugenTower で見ることもできます．

## ステージエディタ
 * Levelsの中にあるstage1.csvをいじればステージエディットできます．
 * 新たにステージファイルを作る場合は100x100のCSVファイルで作ってください．

 * ステージの個々のブロックは一つの値で管理されており，立っているビット数でブロックの属性が変わります．
     * 1ビット目：衝突判定の有無
     * 2ビット目：ワイヤー無効の有無
     * 3ビット目：即死効果の有無
     * 4ビット目：ステージクリアフラグ
     * 5ビット目：ステージスタートフラグ

## Visual Studioデコンパイルする時
`nkf`コマンドでソースコードにBOMつけてあげる
```bash
% find . -name "*.hpp" -exec nkf --overwrite --oc=UTF-8-BOM {} \;
% find . -name "*.h" -exec nkf --overwrite --oc=UTF-8-BOM {} \;
% find . -name "*.cpp" -exec nkf --overwrite --oc=UTF-8-BOM {} \;
```