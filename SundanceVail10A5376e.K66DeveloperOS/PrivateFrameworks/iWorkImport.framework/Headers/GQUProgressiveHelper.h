/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQUProgressiveHelper : NSObject {
	const void *mClient;	// 4 = 0x4
	XXStruct_1D5yyA *mCallBacks;	// 8 = 0x8
	unsigned char started;	// 12 = 0xc
	CFStringRef mNumbersSheetUri;	// 16 = 0x10
	float mPreviewHeight;	// 20 = 0x14
	float mPreviewWidth;	// 24 = 0x18
	BOOL mStartedMainHTML;	// 28 = 0x1c
}
- (id)initWithClient:(const void *)client andCallbacks:(XXStruct_1D5yyA *)callbacks;	// 0x35888d65
- (void)appendDataToAttachment:(CFURLRef)attachment chunk:(CFDataRef)chunk;	// 0x35888ea5
- (void)closeAttachment:(CFURLRef)attachment;	// 0x35888f11
- (CFURLRef)createAttachment:(CFStringRef)attachment options:(CFDictionaryRef)options;	// 0x35888e79
- (void)dealloc;	// 0x35888de5
- (void)displayGenericError:(CFErrorRef)error;	// 0x35888fb9
- (CFStringRef)getNumbersSheetUri;	// 0x35888f69
- (float)getPreviewHeight;	// 0x35888fa9
- (float)getPreviewWidth;	// 0x35888f99
- (BOOL)previewHasStreamedMainHTML;	// 0x35888fdd
- (void)setNumbersSheetUri:(CFStringRef)uri;	// 0x35888f39
- (void)setPreviewHeight:(float)height andWidth:(float)width;	// 0x35888f79
- (void)startDataWithOptions:(CFDictionaryRef)options;	// 0x35888e29
@end

