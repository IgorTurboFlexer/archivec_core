#include <jni.h>

#include "../archiver.hpp"
/* Header for class ua_chillcrew_archivec_core_ArchivecCore */

#ifndef _Included_ua_chillcrew_archivec_core_ArchivecCore
#define _Included_ua_chillcrew_archivec_core_ArchivecCore
#ifdef __cplusplus
extern "C" {
#endif

Archiver *archiver = new Archiver();

/*
 * Class:     ua_chillcrew_archivec_core_ArchivecCore
 * Method:    initNative
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ua_chillcrew_archivec_core_ArchivecCore_initNative
        (JNIEnv *, jclass, jstring);

/*
 * Class:     ua_chillcrew_archivec_core_ArchivecCore
 * Method:    crushNative
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ua_chillcrew_archivec_core_ArchivecCore_crushNative
        (JNIEnv *, jclass, jstring);

/*
 * Class:     ua_chillcrew_archivec_core_ArchivecCore
 * Method:    getFilesCountNative
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ua_chillcrew_archivec_core_ArchivecCore_getFilesCountNative
        (JNIEnv *, jclass, jstring);

/*
 * Class:     ua_chillcrew_archivec_core_ArchivecCore
 * Method:    getFileNamesNative
 * Signature: (Ljava/lang/String;)Ljava/util/ArrayList;
 */
JNIEXPORT jobject JNICALL Java_ua_chillcrew_archivec_core_ArchivecCore_getFileNamesNative
        (JNIEnv *, jclass, jstring);

/*
 * Class:     ua_chillcrew_archivec_core_ArchivecCore
 * Method:    extractFileNative
 * Signature: (Ljava/lang/String;Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_ua_chillcrew_archivec_core_ArchivecCore_extractFileNative
        (JNIEnv *, jclass, jstring, jstring, jint);

/*
 * Class:     ua_chillcrew_archivec_core_ArchivecCore
 * Method:    extractNative
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ua_chillcrew_archivec_core_ArchivecCore_extractNative
        (JNIEnv *, jclass, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif
