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
@property(readonly, retain) ATVDotMacCollection *collection;	// G=0x3072d041; converted property
@property(assign) BOOL vendPhotoDataOnly;	// G=0x3072d065; S=0x3072d055; converted property
+ (id)providerForCollection:(id)collection;	// 0x3072d2f9
+ (id)temporaryProviderForCollection:(id)collection;	// 0x3072d2b9
- (id)initWithCollection:(id)collection;	// 0x3072d2a1
- (id)initWithCollection:(id)collection isTemporaryProvider:(BOOL)provider;	// 0x3072f3d1
- (id)_data;	// 0x3072d15d
- (BOOL)_handlesObject:(id)object;	// 0x3072d115
- (BOOL)canHaveZeroData;	// 0x3072d051
// converted property getter: - (id)collection;	// 0x3072d041
- (void)dealloc;	// 0x3072d1d9
- (id)hashForDataAtIndex:(long)index;	// 0x3072d1a5
// converted property setter: - (void)setVendPhotoDataOnly:(BOOL)only;	// 0x3072d055
// converted property getter: - (BOOL)vendPhotoDataOnly;	// 0x3072d065
@end

