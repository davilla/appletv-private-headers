/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRPhotoProviderForCollection.h"
#import "BRPhotoProvider.h"
#import "BRProvider.h"

@class NSArray, BRPhotoMediaCollection;

@protocol BRPhotoProviderForCollection <BRProvider>
@property(assign) BOOL vendPhotoDataOnly;	// converted property
- (BOOL)canHaveZeroData;
- (id)collection;
// converted property setter: - (void)setVendPhotoDataOnly:(BOOL)only;
// converted property getter: - (BOOL)vendPhotoDataOnly;
@end

@interface BRPhotoProviderForCollection : BRPhotoProvider <BRPhotoProviderForCollection> {
@private
	NSArray *_assets;	// 12 = 0xc
	BRPhotoMediaCollection *_collection;	// 16 = 0x10
	BOOL _vendPhotoDataOnly;	// 20 = 0x14
}
@property(readonly, retain) BRPhotoMediaCollection *collection;	// G=0x3300a84d; converted property
@property(assign) BOOL vendPhotoDataOnly;	// G=0x3300a871; S=0x3300a861; converted property
+ (id)providerForCollection:(id)collection controlFactory:(id)factory;	// 0x3300aa09
- (id)initWithCollection:(id)collection controlFactory:(id)factory;	// 0x3300a99d
- (id)_data;	// 0x3300a881
- (BOOL)canHaveZeroData;	// 0x3300a85d
// converted property getter: - (id)collection;	// 0x3300a84d
- (id)dataAtIndex:(long)index;	// 0x3300a8ed
- (long)dataCount;	// 0x3300a931
- (void)dealloc;	// 0x3300a955
- (id)hashForDataAtIndex:(long)index;	// 0x3300a8c9
// converted property setter: - (void)setVendPhotoDataOnly:(BOOL)only;	// 0x3300a861
// converted property getter: - (BOOL)vendPhotoDataOnly;	// 0x3300a871
@end

