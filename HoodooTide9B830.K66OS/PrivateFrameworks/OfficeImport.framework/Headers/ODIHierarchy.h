/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class ODIState, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ODIHierarchy : NSObject {
@private
	int mType;	// 4 = 0x4
	int mMaxMappableTreeDepth;	// 8 = 0x8
	ODIState *mState;	// 12 = 0xc
	NSMutableDictionary *mNodeInfoMap;	// 16 = 0x10
}
+ (BOOL)mapIdentifier:(id)identifier state:(id)state;	// 0x31399235
- (id)initWithType:(int)type state:(id)state;	// 0x3139930d
- (CGRect)boundsOfNode:(id)node;	// 0x3139a045
- (void)createInfoForNode:(id)node depth:(int)depth;	// 0x3139948d
- (void)dealloc;	// 0x313993dd
- (id)infoForNode:(id)node;	// 0x3139943d
- (void)map;	// 0x3139976d
- (void)mapLogicalBoundsWithXRanges:(const ODIHRangeVector *)xranges;	// 0x313996f9
- (void)mapNode:(id)node;	// 0x3139a0c1
- (ODIHRangeVector *)mapRangesForNode:(id)node;	// 0x31399831
- (void)setAbsolutePositionOfNode:(id)node parentRow:(int)row parentXOffset:(float)offset;	// 0x313995a9
@end
