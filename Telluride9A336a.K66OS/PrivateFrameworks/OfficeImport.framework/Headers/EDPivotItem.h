/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDPivotItem : NSObject {
@private
	unsigned mRepeatedItemCounts;	// 4 = 0x4
	int mType;	// 8 = 0x8
	EDCollection *mItemIndexes;	// 12 = 0xc
}
@property(assign) unsigned repeatedItemCounts;	// G=0x34d8bb5d; S=0x34d8bc21; converted property
@property(assign) int type;	// G=0x34d8bb6d; S=0x34d89fc9; converted property
+ (id)pivotItem;	// 0x34d89ef9
- (id)init;	// 0x34d89f41
- (void)dealloc;	// 0x34d8bf15
- (id)itemIndexes;	// 0x34d89fd9
// converted property getter: - (unsigned)repeatedItemCounts;	// 0x34d8bb5d
// converted property setter: - (void)setRepeatedItemCounts:(unsigned)counts;	// 0x34d8bc21
// converted property setter: - (void)setType:(int)type;	// 0x34d89fc9
// converted property getter: - (int)type;	// 0x34d8bb6d
@end
