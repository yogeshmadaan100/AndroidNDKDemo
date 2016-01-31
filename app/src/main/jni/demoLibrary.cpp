//
// Created by Yogesh Madaan on 01/02/16.
//

#include "demoLibrary.h"
/* C++ Version */

#include <string.h>
#include <jni.h>

/*
 * replace com_example_whatever with your package name
 *
 * HelloJni should be the name of the activity that will
 * call this function
 *
 * change the returned string to be one that exercises
 * some functionality in your wrapped library to test that
 * it all works
 *
 */



extern "C" {
JNIEXPORT jstring JNICALL
Java_com_example_androidndkdemo_MainActivity_stringFromJNI(JNIEnv *env, jobject instance) {
    return env->NewStringUTF("Hello from C++ JNI !");
}
}