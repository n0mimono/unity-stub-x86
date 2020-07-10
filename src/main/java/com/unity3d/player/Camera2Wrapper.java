package com.unity3d.player;

public class Camera2Wrapper {
    private final native void initCamera2Jni();

    private final native void deinitCamera2Jni();

    private final native void nativeFrameReady(Object var1, Object var2, Object var3, int var4, int var5, int var6);

    private final native void nativeSurfaceTextureReady(Object var1);
}
