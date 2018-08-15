//
// Created by wxb on 2018/8/10.
//

#include <jni.h>


JNIEXPORT jstring JNICALL
Java_jni_com_myapplication2_xjni_getStr(JNIEnv *env, jobject instance, jstring s_) {
//    const char *s = env->GetStringUTFChars(env, s_, 0);
//
//
//    // TODO
//
//    (*env)->ReleaseStringUTFChars(env, s_, s);
//
//    return (*env)->NewStringUTF(env, s);

    const char *s = env->GetStringUTFChars(s_, 0);
    return env->NewStringUTF(s);
}

extern "C"
JNIEXPORT jstring JNICALL
Java_jni_com_myapplication2_MainActivity_getStr(JNIEnv *env, jobject instance, jstring s_) {
//    const char *s = env->GetStringUTFChars(s_, 0);

    // TODO

//    env->ReleaseStringUTFChars(s_, s);
//
//    return env->NewStringUTF(returnValue);
    const char *s = env->GetStringUTFChars(s_, 0);
    return env->NewStringUTF(s);
}