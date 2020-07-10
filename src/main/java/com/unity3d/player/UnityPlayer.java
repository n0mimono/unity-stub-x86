package com.unity3d.player;

import android.content.Context;
import android.view.InputEvent;
import android.view.Surface;

public class UnityPlayer {
    private static native void nativeUnitySendMessage(String var0, String var1, byte[] var2);

    private final native void initJni(Context var1);

    private final native boolean nativeRender();

    private final native void nativeSetInputArea(int var1, int var2, int var3, int var4);

    private final native void nativeSetKeyboardIsVisible(boolean var1);

    private final native void nativeSetInputString(String var1);

    private final native void nativeSetInputSelection(int var1, int var2);

    private final native void nativeSoftInputCanceled();

    private final native void nativeSoftInputLostFocus();

    private final native void nativeReportKeyboardConfigChanged();

    private final native boolean nativePause();

    private final native void nativeResume();

    private final native void nativeLowMemory();

    private final native void nativeApplicationUnload();

    private final native void nativeFocusChanged(boolean var1);

    private final native void nativeRecreateGfxState(int var1, Surface var2);

    private final native void nativeSendSurfaceChangedEvent();

    private final native boolean nativeDone();

    private final native void nativeSoftInputClosed();

    private final native boolean nativeInjectEvent(InputEvent var1);

    private final native boolean nativeIsAutorotationOn();

    private final native void nativeMuteMasterAudio(boolean var1);

    private final native void nativeRestartActivityIndicator();

    private final native void nativeSetLaunchURL(String var1);

    private final native void nativeOrientationChanged(int var1, int var2);
}
