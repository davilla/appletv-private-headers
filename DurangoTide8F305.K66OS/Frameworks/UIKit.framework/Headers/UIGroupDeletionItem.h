/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSIndexSet;

@interface UIGroupDeletionItem : NSObject {
@private
	unsigned _lastIndex;	// 4 = 0x4
	int _group;	// 8 = 0x8
	NSIndexSet *_indexes;	// 12 = 0xc
}
@property(readonly, assign) int group;	// G=0x32117b51; converted property
@property(readonly, retain) NSIndexSet *indexes;	// G=0x32117b61; converted property
@property(assign) unsigned lastIndex;	// G=0x32117b71; S=0x32117b81; converted property
- (id)initWithGroup:(int)group;	// 0x32118d51
- (id)initWithGroup:(int)group andIndexes:(id)indexes;	// 0x32118cd1
- (id)initWithIndexes:(id)indexes inGroup:(int)group;	// 0x32118cb5
- (void)dealloc;	// 0x32118c6d
// converted property getter: - (int)group;	// 0x32117b51
// converted property getter: - (id)indexes;	// 0x32117b61
// converted property getter: - (unsigned)lastIndex;	// 0x32117b71
// converted property setter: - (void)setLastIndex:(unsigned)index;	// 0x32117b81
@end

