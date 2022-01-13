Chronos
=======

ChromiumベースのWindows環境向けWebブラウザ

 * 管理者による機能制限をサポート
 * ThinAppなどの仮想環境との統合
 * URLフィルタ・カスタムスクリプティングが可能。

## 開発手順

[HOWTOBUILD.md](HOWTOBUILD.md) を参照してください。

ChronosはThinAppと組み合わせて使用することが前提となっています。
そのため、ビルド結果をThinAppが無い環境でそのまま起動することはできません。
ThinAppと組み合わせずChronosを使用する場合、`ChronosN.exe` を `Chronos.exe` という名前でコピーして実行する必要があります。
