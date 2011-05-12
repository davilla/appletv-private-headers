/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"

@class BRProviderGroup;

@interface BRDependentProvider : NSObject <BRProvider> {
@private
	id<BRProvider> _provider;	// 4 = 0x4
	BRProviderGroup *_providerGroup;	// 8 = 0x8
	long _threshold;	// 12 = 0xc
	BOOL _hidden;	// 16 = 0x10
}
@property(readonly, assign) long threshold;	// G=0x329f0891; converted property
+ (id)providerWithDependentProvider:(id)dependentProvider providers:(id)providers threshold:(long)threshold;	// 0x329f0d19
- (id)initWithDependentProvider:(id)dependentProvider providers:(id)providers threshold:(long)threshold;	// 0x329f0b71
- (void)_groupDataCountChanged:(id)changed;	// 0x329f0959
- (void)_providerDataSetChanged:(id)changed;	// 0x329f090d
- (void)_providerItemsModified:(id)modified;	// 0x329f08a1
- (id)controlFactory;	// 0x329f0acd
- (id)dataAtIndex:(long)index;	// 0x329f0a65
- (long)dataCount;	// 0x329f0a99
- (void)dealloc;	// 0x329f0aed
- (id)hashForDataAtIndex:(long)index;	// 0x329f0a31
- (id)providers;	// 0x329f0a11
// converted property getter: - (long)threshold;	// 0x329f0891
@end

