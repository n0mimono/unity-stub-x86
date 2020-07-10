#include <string.h>
#include <jni.h>

void Java_com_unity3d_player_Camera2Wrapper_initCamera2Jni(JNIEnv *env, jobject thiz, jint var1)
{
}

void Java_com_unity3d_player_Camera2Wrapper_deinitCamera2Jni(JNIEnv *env, jobject thiz, jobject var1, jobject var2, jobject var3)
{
}

void Java_com_unity3d_player_Camera2Wrapper_nativeFrameReady(JNIEnv *env, jobject thiz, jobject var1)
{
}

void Java_com_unity3d_player_Camera2Wrapper_nativeSurfaceTextureReady(JNIEnv *env, jobject thiz)
{
}

void Java_com_unity3d_player_AudioVolumeHandler_onAudioVolumeChanged(JNIEnv *env, jobject thiz, jint var1)
{
}

void Java_com_unity3d_player_GoogleARCoreApi_initializeARCore(JNIEnv *env, jobject thiz, jobject var1)
{
}

void Java_com_unity3d_player_GoogleARCoreApi_pauseARCore(JNIEnv *env, jobject thiz)
{
}

void Java_com_unity3d_player_GoogleARCoreApi_resumeARCore(JNIEnv *env, jobject thiz)
{
}

void Java_com_unity3d_player_HFPStatus_initHFPStatusJni(JNIEnv *env, jobject thiz)
{
}

void Java_com_unity3d_player_HFPStatus_deinitHFPStatusJni(JNIEnv *env, jobject thiz)
{
}

jboolean Java_com_unity3d_player_NativeLoader_load(JNIEnv *env, jobject thiz, jstring var1)
{
    return JNI_TRUE;
}

jboolean Java_com_unity3d_player_NativeLoader_unload(JNIEnv *env, jobject thiz)
{
    return JNI_TRUE;
}

void Java_com_unity3d_player_UnityPlayer_nativeUnitySendMessage(JNIEnv *env, jobject thiz, jstring var0, jstring var1, jbyteArray var2)
{
}

void Java_com_unity3d_player_UnityPlayer_initJni(JNIEnv *env, jobject thiz, jobject var1)
{
}

jboolean Java_com_unity3d_player_UnityPlayer_nativeRender(JNIEnv *env, jobject thiz)
{
    return JNI_TRUE;
}

void Java_com_unity3d_player_UnityPlayer_nativeSetInputArea(JNIEnv *env, jobject thiz, jint var1, jint var2, jint var3, jint var4)
{
}

void Java_com_unity3d_player_UnityPlayer_nativeSetKeyboardIsVisible(JNIEnv *env, jobject thiz, jboolean var1)
{
}

void Java_com_unity3d_player_UnityPlayer_nativeSetInputString(JNIEnv *env, jobject thiz, jstring var1)
{
}

void Java_com_unity3d_player_UnityPlayer_nativeSetInputSelection(JNIEnv *env, jobject thiz, jint var1, jint var2)
{
}

void Java_com_unity3d_player_UnityPlayer_nativeSoftInputCanceled(JNIEnv *env, jobject thiz)
{
}

void Java_com_unity3d_player_UnityPlayer_nativeSoftInputLostFocus(JNIEnv *env, jobject thiz)
{
}

void Java_com_unity3d_player_UnityPlayer_nativeReportKeyboardConfigChanged(JNIEnv *env, jobject thiz)
{
}

jboolean Java_com_unity3d_player_UnityPlayer_nativePause(JNIEnv *env, jobject thiz)
{
    return JNI_FALSE;
}

void Java_com_unity3d_player_UnityPlayer_nativeResume(JNIEnv *env, jobject thiz)
{
}
void Java_com_unity3d_player_UnityPlayer_nativeLowMemory(JNIEnv *env, jobject thiz)
{
}

void Java_com_unity3d_player_UnityPlayer_nativeApplicationUnload(JNIEnv *env, jobject thiz)
{
}

void Java_com_unity3d_player_UnityPlayer_nativeFocusChanged(JNIEnv *env, jobject thiz, jboolean var1)
{
}

void Java_com_unity3d_player_UnityPlayer_nativeRecreateGfxState(JNIEnv *env, jobject thiz, jint var1, jobject var2)
{
}

void Java_com_unity3d_player_UnityPlayer_nativeSendSurfaceChangedEvent(JNIEnv *env, jobject thiz)
{
}

jboolean Java_com_unity3d_player_UnityPlayer_nativeDone(JNIEnv *env, jobject thiz)
{
    return JNI_TRUE;
}

void Java_com_unity3d_player_UnityPlayer_nativeSoftInputClosed(JNIEnv *env, jobject thiz)
{
}

jboolean Java_com_unity3d_player_UnityPlayer_nativeInjectEvent(JNIEnv *env, jobject thiz, jobject var1)
{
    return JNI_TRUE;
}

jboolean Java_com_unity3d_player_UnityPlayer_nativeIsAutorotationOn(JNIEnv *env, jobject thiz)
{
    return JNI_TRUE;
}

void Java_com_unity3d_player_UnityPlayer_nativeMuteMasterAudio(JNIEnv *env, jobject thiz, jboolean var1)
{
}

void Java_com_unity3d_player_UnityPlayer_nativeRestartActivityIndicator(JNIEnv *env, jobject thiz)
{
}

void Java_com_unity3d_player_UnityPlayer_nativeSetLaunchURL(JNIEnv *env, jobject thiz, jstring var1)
{
}

void Java_com_unity3d_player_UnityPlayer_nativeOrientationChanged(JNIEnv *env, jobject thiz, jint var1, jint var2)
{
}
