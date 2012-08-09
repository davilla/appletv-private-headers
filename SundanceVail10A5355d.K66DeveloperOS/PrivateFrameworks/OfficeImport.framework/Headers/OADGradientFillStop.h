/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class OADColor;

@interface OADGradientFillStop : NSObject <NSCopying> {
	OADColor *mColor;	// 4 = 0x4
	float mPosition;	// 8 = 0x8
}
- (id)initWithColor:(id)color position:(float)position;	// 0x31c0613d
- (id)color;	// 0x31c08215
- (id)copyWithZone:(NSZone *)zone;	// 0x31cdd419
- (void)dealloc;	// 0x31c0c011
- (unsigned)hash;	// 0x31dcdbf1
- (BOOL)isEqual:(id)equal;	// 0x31dcdc35
- (float)position;	// 0x31dcdbe1
- (void)setStyleColor:(id)color;	// 0x31cdd5bd
@end
