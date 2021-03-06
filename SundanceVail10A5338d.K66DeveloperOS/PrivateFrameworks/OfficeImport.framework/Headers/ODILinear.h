/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class ODIState;

@interface ODILinear : NSObject {
	BOOL mIsHorizontal;	// 4 = 0x4
	BOOL mWithConnectors;	// 5 = 0x5
	BOOL mStretch;	// 6 = 0x6
	float mPointHeight;	// 8 = 0x8
	float mConnectorWidth;	// 12 = 0xc
	float mPadding;	// 16 = 0x10
	BOOL mIsTextCenteredHorizontally;	// 20 = 0x14
	BOOL mIsTextCenteredVertically;	// 21 = 0x15
	unsigned mMaxPointCount;	// 24 = 0x18
	ODIState *mState;	// 28 = 0x1c
}
+ (BOOL)mapIdentifier:(id)identifier state:(id)state;	// 0x33c41461
+ (void)mapUnknownWithState:(id)state;	// 0x33c42599
- (id)initWithState:(id)state;	// 0x33c425b5
- (void)map;	// 0x33c4272d
- (void)mapPoint:(id)point bounds:(CGRect)bounds;	// 0x33c42b85
- (void)mapStyleFromPoint:(id)point shape:(id)shape;	// 0x33c42c59
- (void)mapStyleFromTransition:(id)transition shape:(id)shape;	// 0x33c42e05
- (void)mapTransition:(id)transition pointBounds:(CGRect)bounds;	// 0x33c42c99
- (void)nextPointBounds:(CGRect *)bounds;	// 0x33c42af1
- (void)setConnectorWidth:(float)width;	// 0x33c426bd
- (void)setIsHorizontal:(BOOL)horizontal;	// 0x33c4267d
- (void)setIsTextCentered:(BOOL)centered;	// 0x33c426dd
- (void)setIsTextCenteredHorizontally:(BOOL)horizontally;	// 0x33c426fd
- (void)setIsTextCenteredVertically:(BOOL)vertically;	// 0x33c4270d
- (void)setLogicalBounds;	// 0x33c428e5
- (void)setMaxPointCount:(unsigned)count;	// 0x33c4271d
- (void)setPadding:(float)padding;	// 0x33c426cd
- (void)setPointHeight:(float)height;	// 0x33c426ad
- (void)setStretch:(BOOL)stretch;	// 0x33c4269d
- (void)setWithConnectors:(BOOL)connectors;	// 0x33c4268d
@end

