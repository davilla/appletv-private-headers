/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@class GQDColor;

@interface GQDRGradientStop : NSObject {
	float mFraction;	// 4 = 0x4
	GQDColor *mColor;	// 8 = 0x8
}
+ (const StateSpec *)stateForReading;	// 0x34be84d5
- (id)color;	// 0x34be857d
- (void)dealloc;	// 0x34be84e1
- (float)fraction;	// 0x34be856d
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x34be852d
@end

