//
// Created by Administrator on 2019/6/6.
//
#include "jni.h"

#include "HelloWorld.h"

/*
 * Class:     HelloWorld
 * Method:    init
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_HelloWorld_init(JNIEnv *env, jobject job, jint lPort){
    int number=10;
    number+=lPort;
    return number;

}

/*
 * Class:     HelloWorld
 * Method:    print
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_HelloWorld_print(JNIEnv *env, jobject job, jstring str){
    printf("%s\n", str);
}

