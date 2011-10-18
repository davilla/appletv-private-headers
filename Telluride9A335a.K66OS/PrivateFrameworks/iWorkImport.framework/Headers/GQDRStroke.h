/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"

@class GQDRStrokePattern, GQDColor;

__attribute__((visibility("hidden")))
@interface GQDRStroke : NSObject <GQDNameMappable> {
@private
	float mMiterLimit;	// 4 = 0x4
	float mWidth;	// 8 = 0x8
	int mCap;	// 12 = 0xc
	int mJoin;	// 16 = 0x10
	GQDColor *mColor;	// 20 = 0x14
	GQDRStrokePattern *mPattern;	// 24 = 0x18
}
+ (const StateSpec *)stateForReading;	// 0x3046d759
- (int)cap;	// 0x3046d785
- (id)color;	// 0x3046d7a5
- (void)dealloc;	// 0x3046d889
- (int)join;	// 0x3046d795
- (float)miterLimit;	// 0x3046d765
- (id)pattern;	// 0x3046d7b5
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x3046d969
- (float)width;	// 0x3046d775
@end

