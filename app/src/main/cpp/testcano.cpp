//
// Created by cano-07 on 28/5/18.
//

#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_jniexample_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from Cano c++";
    return env->NewStringUTF(hello.c_str());
}

