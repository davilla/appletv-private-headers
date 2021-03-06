/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawable.h"
#import "OfficeImport-Structs.h"
#import "OADDrawableContainer.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADGroup : OADDrawable <OADDrawableContainer> {
@private
	CGRect mLogicalBounds;	// 24 = 0x18
	NSMutableArray *mChildren;	// 40 = 0x28
}
@property(assign) CGRect logicalBounds;	// G=0x34442dad; S=0x34441d9d; converted property
- (id)init;	// 0x34441a95
- (void)addChild:(id)child;	// 0x344f2249
- (void)addChildren:(id)children;	// 0x34441dc1
- (id)childAtIndex:(unsigned)index;	// 0x344432a1
- (unsigned)childCount;	// 0x34442d8d
- (id)children;	// 0x346172d9
- (void)dealloc;	// 0x3444447d
- (id)groupProperties;	// 0x3452d259
// converted property getter: - (CGRect)logicalBounds;	// 0x34442dad
- (void)removeUnnecessaryOverrides;	// 0x34442165
// converted property setter: - (void)setLogicalBounds:(CGRect)bounds;	// 0x34441d9d
- (void)setParentTextListStyle:(id)style;	// 0x34441e89
@end

