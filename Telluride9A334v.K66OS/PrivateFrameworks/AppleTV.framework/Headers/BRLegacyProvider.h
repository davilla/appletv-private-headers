/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"
#import "BRControlHeightFactory.h"

@class NSMutableArray;
@protocol BRMenuListItemProvider;

__attribute__((visibility("hidden")))
@interface BRLegacyProvider : NSObject <BRControlFactory, BRControlHeightFactory, BRProvider> {
@private
	id<BRMenuListItemProvider> _source;	// 4 = 0x4
	NSMutableArray *_dividers;	// 8 = 0x8
	long _firstDividerIndex;	// 12 = 0xc
	long _lastDividerIndex;	// 16 = 0x10
}
@property(retain) id datasource;	// G=0x3320c78d; S=0x3320c77d; converted property
- (long)_listRowForProviderRow:(long)providerRow;	// 0x3320cfad
- (long)_providerRowForListRow:(long)listRow divider:(id *)divider;	// 0x3320cea9
- (void)_updateDividers;	// 0x3320cd4d
- (void)addDividerAtIndex:(long)index withLabel:(id)label;	// 0x3320c79d
- (id)controlFactory;	// 0x3320caa5
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x3320cc31
- (id)dataAtIndex:(long)index;	// 0x3320cb7d
- (long)dataCount;	// 0x3320caa9
// converted property getter: - (id)datasource;	// 0x3320c78d
- (long)datasourceIndexForProviderIndex:(long)providerIndex;	// 0x3320cc1d
- (void)dealloc;	// 0x3320c731
- (id)hashForDataAtIndex:(long)index;	// 0x3320cbc1
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x3320cc99
- (long)providerIndexForDatasourceIndex:(long)datasourceIndex;	// 0x3320cc0d
- (void)removeDividerAtIndex:(long)index;	// 0x3320c96d
- (void)removeDividers;	// 0x3320ca61
// converted property setter: - (void)setDatasource:(id)datasource;	// 0x3320c77d
@end

