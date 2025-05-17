# evLPC2388/test03 -- FreeRTOS for ARM7TDMI-S/LPC2388

## What is this?(コレは何？)
手持ちのLPC2388で、とりあえずFreeRTOSを立ち上げようかな～、という軽い気持ちのソースツリーです。
Shinichiro Nakamura氏と北乃きつね氏によるlpc2388-bios(https://github.com/kitanokitsune/lpc2388-bios)の初期化部分のみを使用しています。
当初は、上記bios上で動くアプリケーションを作成しようかと考えていたのですけれども、
GCCのバージョンが古いバージョンと現行バージョンでは、.mapファイルの書式が変わっている関係で、
現在では両氏の設計意図通りに動かなくなっています。

## Environment(動作環境)
Tool                    | Description
:-----------------------|:---------------------------------------------------------------
**target**              | LPC2388FBD144
**GCC**                 | arm-none-eabi-gcc (15:10.3-2021.07-4) 10.3.1 20210621 (release)
**make**                | GNU Make 4.3, Built for x86_64-pc-linux-gnu
**CAD**                 | KiCad Version (6.0.11), release build

## Status(進捗) -- 2025年5月現在
初期化部分の取り出し -> 完了。LPC2388での実機動作も確認済み
LCDlib2388.c, lcd1602.hの修正 -> 私個人のサジ加減で。
_init.cの修正 -> 同じく、私個人の好みで。
include/lpc2388pinconfig.hの追加 -> _init.cの修正に伴う追加。
xymodem.cのテスト -> Z80proto2用のAdHocな実装。XMODEM/CRCのみ動作している。CRCチェック機能をデバッグ中。まだbuggyなのでEXPERIMENTAL。LCDを繋ぐと動作が観えます。

## TODO(今後修正・追加すべきモノゴトと細かい話)
0. FatFs, diskio, mallocの動作検証 -> おそらく問題は少ないと思う
1. FreeRTOSの実装 -> 特に難しくはない
2. SRAM追加とメモリマネジメントタスクの追加 -> そんな大袈裟な話でもない
3. onチップEthernetの実装 -> やってみないとボリュームが掴めない
4. ユーザAPI(らしきモノ)の設計と実装 -> 何年かかるか見当が付かない

## Known Problem(既知の問題)
今の所は。。。元プログラムの作成者各位が、かなりしっかりしたプログラムを書いておられるので。
作成者各位が指摘しているように、ARM7はI/Oレジスタアクセスの際にパイプラインの「詰まり」が起きるようです。ループでポーリングしたりすると頻発します(xymodem.cを見てみてね)。

## LICENSE(ライセンス)
ソースツリーには、lpc2388-biosの一部が含まれています。lpc2388-monbios.txtを参照してください。
使用しているデバイスについて、メーカーがデータシートなどで開示している技術情報は、各社に工業所有権があります。
私(yasunoxx▼Julia)が書いたプログラムは、MITライセンスで開示しています。
本プログラム[test03](https://github.com/yasunoxx/evLPC2388/srcs/test03)を使用した/使用しない事による全ての結果について、上記権利者と私は何の保証も賠償も致しません。
