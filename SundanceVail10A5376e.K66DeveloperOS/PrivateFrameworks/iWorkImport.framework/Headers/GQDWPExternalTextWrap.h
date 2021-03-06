/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <NSObject.h> // Unknown library


@interface GQDWPExternalTextWrap : NSObject <GQDNameMappable> {
	BOOL mFloatingWrapEnabled;	// 4 = 0x4
	BOOL mInlineWrapEnabled;	// 5 = 0x5
	float mMargin;	// 8 = 0x8
	float mAlphaThreshold;	// 12 = 0xc
	int mWrapStyle;	// 16 = 0x10
	int mWrapDirection;	// 20 = 0x14
	int mFloatingWrapType;	// 24 = 0x18
	int mAttachmentWrapType;	// 28 = 0x1c
}
+ (const StateSpec *)stateForReading;	// 0x35822b15
- (float)alphaThreshold;	// 0x35822b51
- (int)attachmentWrapType;	// 0x35822b91
- (BOOL)floatingWrapEnabled;	// 0x35822b21
- (int)floatingWrapType;	// 0x35822b81
- (BOOL)inlineWrapEnabled;	// 0x35822b31
- (float)margin;	// 0x35822b41
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x35822ba1
- (int)wrapDirection;	// 0x35822b71
- (int)wrapStyle;	// 0x35822b61
@end

