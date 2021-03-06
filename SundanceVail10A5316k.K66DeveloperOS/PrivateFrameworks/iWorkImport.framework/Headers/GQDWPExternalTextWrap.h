/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQDWPExternalTextWrap : NSObject <GQDNameMappable> {
@private
	BOOL mFloatingWrapEnabled;	// 4 = 0x4
	BOOL mInlineWrapEnabled;	// 5 = 0x5
	float mMargin;	// 8 = 0x8
	float mAlphaThreshold;	// 12 = 0xc
	int mWrapStyle;	// 16 = 0x10
	int mWrapDirection;	// 20 = 0x14
	int mFloatingWrapType;	// 24 = 0x18
	int mAttachmentWrapType;	// 28 = 0x1c
}
+ (const StateSpec *)stateForReading;	// 0x36c5dcb5
- (float)alphaThreshold;	// 0x36c5dcf1
- (int)attachmentWrapType;	// 0x36c5dd31
- (BOOL)floatingWrapEnabled;	// 0x36c5dcc1
- (int)floatingWrapType;	// 0x36c5dd21
- (BOOL)inlineWrapEnabled;	// 0x36c5dcd1
- (float)margin;	// 0x36c5dce1
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x36c5dd41
- (int)wrapDirection;	// 0x36c5dd11
- (int)wrapStyle;	// 0x36c5dd01
@end

