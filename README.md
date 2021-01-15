# unity-stub-x86

## 概要

Unity 2019.4.0.1f 対応版 libmain.so

Unity は x86 をサポートしておらず、 Android エミュレータでアプリを起動したときに `UnsatisfiedLinkError` が起きる。 特に、 Unity as a library として Unity を利用する場合には、 Android ネイティブ側でエミュレータを使用できないと不便なことがある。これに対して、ダミーのsoファイルをつくることにより回避するというのが本リポジトリの主旨である。

## ビルド

```
make build
```

あるいは jni/ 下で `ndk-build` を実行する。

```
cd src/main/jni/
ndk-build
```

libs/ 以下に libmain.so ができる。

## 組み込み

Unity が出力する unityLibrary の jniLibs に libmain.so をコピーする。

- unityLibrary
    - src
        - main
            - jniLibs
                - x86
                    - libmain.so

また、build.grade で x86 を有効化する。

```gradle
    defaultConfig {
        minSdkVersion 23
        targetSdkVersion 30
        ndk {
            abiFilters 'armeabi-v7a', 'arm64-v8a', 'x86'
        }
        versionCode 1
        versionName '0.1'
        consumerProguardFiles 'proguard-unity.txt'
    }

    ...

    packagingOptions {
        doNotStrip '*/armeabi-v7a/*.so'
        doNotStrip '*/arm64-v8a/*.so'
        doNotStrip '*/x86/*.so'
    }
```

## 詳細

- java/com/unity3d/player 以下
    - UnityPlayer.class から抜き出したメソッドを書き並べたもの
    - これ自体は特に何にも使われない
- main.c
    - 本体
    - com/unity3d/player 以下に対応するように記述する
- Android.mk
    - ndk-build 用のビルドファイル

## その他

- `NativeLoader_load` が `JNI_TRUE` を返すべきかは不明
- UnityPlayerが強制終了するため、 `UnityPlayer_nativePause` は `JNI_FALSE` を返すようにする
