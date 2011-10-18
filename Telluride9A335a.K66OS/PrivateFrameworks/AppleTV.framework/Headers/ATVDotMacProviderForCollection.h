/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPhotoProviderForCollection.h"
#import "ATVDotMacProvider.h"

@class ATVDotMacCollection;

@interface ATVDotMacProviderForCollection : ATVDotMacProvider <BRPhotoProviderForCollection> {
@private
	ATVDotMacCollection *_collection;	// 28 = 0x1c
	BOOL _vendPhotoDataOnly;	// 32 = 0x20
}
@property(readonly, retain) ATVDotMacCollection *collection;	// G=0x340b58c1; converted property
@property(assign) BOOL vendPhotoDataOnly;	// G=0x340b58e5; S=0x340b58d5; converted property
+ (id)providerForCollection:(id)collection;	// 0x340b5549
+ (id)temporaryProviderForCollection:(id)collection;	// 0x340b5595
- (id)initWithCollection:(id)collection;	// 0x340b55e1
- (id)initWithCollection:(id)collection isTemporaryProvider:(BOOL)provider;	// 0x340b55f5
- (id)_data;	// 0x340b5831
- (BOOL)_handlesObject:(id)object;	// 0x340b5875
- (BOOL)canHaveZeroData;	// 0x340b58d1
// converted property getter: - (id)collection;	// 0x340b58c1
- (void)dealloc;	// 0x340b5721
- (id)hashForDataAtIndex:(long)index;	// 0x340b57f5
// converted property setter: - (void)setVendPhotoDataOnly:(BOOL)only;	// 0x340b58d5
// converted property getter: - (BOOL)vendPhotoDataOnly;	// 0x340b58e5
@end

