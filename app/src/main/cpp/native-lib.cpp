#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_jniexample_MainActivity_stringFromJNIForCano(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jint

JNICALL Java_com_jniexample_MainActivity_sumTwoValues(JNIEnv *env, jobject obj, jint a, jint b) {
//_android_log_print("HelloJni", "values a", "%p", &a);
    return (a + b);
}