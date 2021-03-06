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
- (id)initWithColor:(id)color position:(float)position;	// 0x339d781d
- (id)color;	// 0x339d98f5
- (id)copyWithZone:(NSZone *)zone;	// 0x33aaeaf9
- (void)dealloc;	// 0x339dd6f1
- (unsigned)hash;	// 0x33b9f2d1
- (BOOL)isEqual:(id)equal;	// 0x33b9f315
- (float)position;	// 0x33b9f2c1
- (void)setStyleColor:(id)color;	// 0x33aaec9d
@end

