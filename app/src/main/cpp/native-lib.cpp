#include <jni.h>
#include <string>
#include "com_wenld_hellondk_MainActivity.h"

jstring
Java_com_wenld_hellondk_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
