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
@property(assign) CGRect logicalBounds;	// G=0x351f4dad; S=0x351f3d9d; converted property
- (id)init;	// 0x351f3a95
- (void)addChild:(id)child;	// 0x352a4249
- (void)addChildren:(id)children;	// 0x351f3dc1
- (id)childAtIndex:(unsigned)index;	// 0x351f52a1
- (unsigned)childCount;	// 0x351f4d8d
- (id)children;	// 0x353c92d9
- (void)dealloc;	// 0x351f647d
- (id)groupProperties;	// 0x352df259
// converted property getter: - (CGRect)logicalBounds;	// 0x351f4dad
- (void)removeUnnecessaryOverrides;	// 0x351f4165
// converted property setter: - (void)setLogicalBounds:(CGRect)bounds;	// 0x351f3d9d
- (void)setParentTextListStyle:(id)style;	// 0x351f3e89
@end

