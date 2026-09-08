# keymap-editorを使用したボタン設定

<br>

<img src="image/s004.jpg" width="600">

<br>

## keymap-editorでできること

･ホイールの設定変更  
･ビヘイビアやコンボキー､マクロの新規作成  
･キーの押下時間など細かい設定変更  
･saveするごとに履歴が残るので過去のキーマップに戻すことが可能

<br>

キー設定で解説した追加ビヘイビアもkeymap-editorで作成しています  
DYA Studioでうまく動作しないホイールのビヘイビアはこちらで設定可能です

<br>

DYA Studioよりも細かい設定ができますが導入に手間がかかる事と  
設定変更するたびファームウェアを生成して書き込む必要があるので  
少しハードルが高いです  


<br><br>

## 準備

①Githubのアカウントを作成  
-
<br>

[Github](https://github.com/)にアクセスして自分のアカウントを作成します  

<br>

②リポジトリをフォーク  
-
<br>

リポジトリ　=　共有フォルダ   
フォーク　=　他人の共有フォルダを丸ごと自分のアカウントにコピーして編集可能にする  

<br>

ファームウェアの元データが格納してある[zmkconf_pegh_p](https://github.com/nishiiba/zmkconf_pegh_p)リポジトリをフォークして下さい  

<img src="image/s009.jpg" width="600">

名前はそのままで右下のCreate forkボタンを押します


<br><br>

③keymap-editorのインストール
-

<br>

[keymap-editor](https://nickcoutsos.github.io/keymap-editor/)にアクセスしGithubアカウントでログインしてから  
zmkconf_pegh_pリポジトリを指定してinstallを押します  

※keymap-editorはgithubアカウントにインストールされます

<br>

<img src="image/s011.jpg" width="600">

<br>

<img src="image/s012.jpg" width="600">



<br>



これでkeymap-editorが使用できるようになりました

<br>
<br>

## キーマップ変更
<br>

基本操作はDYA Studioとだいたい同じです

ホイールを編集する場合は&rsr_1ビヘイビアを一旦削除して  
&inc_dec_kp(キー入力)　または　&scroll(マウスホイール)　を割り当てて下さい

**&rsr_1ビヘイビアを削除すると今後DYA Studioではホイールの設定ができなくなります**

<img src="image/s017.jpg" width="300">

<br>

<img src="image/s018.jpg" width="600">



<br>


変更が完了したら左上のSaveを押してから右の青いボタンを押しActionsに移動します

<br>

<img src="image/s014.jpg" width="600">

<br>

フォークしたリポジトリのActionsにファームウェア(zipファイル)が生成されるので  
ダウンロードしてデバイスに書き込みます　　

<br>

<img src="image/s008.jpg" width="600">

<br>

ファームウェアの生成は2分程かかり有線接続で書き込まなければならないため  
まずDYA Studioでボタン設定を試して配列が固まったらkeymap-editorを  
使用するのが良いかと思います  

DYA Studioはデバイス内の設定を変更するもの  
keymap-editorはクラウド上でファームウェアを作り変えるものと考えて下さい


<br>
<br>


## マクロの作成

<br>

ペイントアプリでよく使用するマクロの一例です  
マクロは上のMACROSのタブから作成することが出来ます  

<br>

### キーを順番に入力 

このようにキー入力とウェイトを交互に入れて下さい  
適度にウェイトを入れないと入力が速すぎてPCやアプリによっては取りこぼしがあります  

<img src="image/s019.jpg" width="600">

<br>
<br>


### 押した時と離した時に別々のキーを入力

<br>

Aを押す動作とAを離す動作を入れてからBのタップを入れます

<img src="image/s021.jpg" width="600">

<br>


作成したマクロはビヘイビアとして登録されDYA Studioでも使用可能になります  


<br>
<br>

#### [戻る](Index.md#目次)

<br>
<br>

---

このビルドガイド（文章・画像）は [CC BY 4.0](https://creativecommons.org/licenses/by/4.0/deed.ja) の下に提供されています。

Copyright (c) 2026 nishiiba
