/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPhotoProviderForCollection.h"
#import "ATVFlickrProvider.h"

@class ATVFlickrCollection;

@interface ATVFlickrProviderForCollection : ATVFlickrProvider <BRPhotoProviderForCollection> {
@private
	ATVFlickrCollection *_collection;	// 24 = 0x18
}
@property(readonly, retain) ATVFlickrCollection *collection;	// G=0x340c1925; converted property
@property(assign) BOOL vendPhotoDataOnly;	// G=0x340c193d; S=0x340c1939; converted property
+ (id)providerForCollection:(id)collection;	// 0x340c1639
- (id)initWithCollection:(id)collection;	// 0x340c1681
- (id)_data;	// 0x340c18b9
- (BOOL)_handlesObject:(id)object;	// 0x340c18d9
- (BOOL)canHaveZeroData;	// 0x340c1935
// converted property getter: - (id)collection;	// 0x340c1925
- (void)dealloc;	// 0x340c17a9
- (id)hashForDataAtIndex:(long)index;	// 0x340c187d
// converted property setter: - (void)setVendPhotoDataOnly:(BOOL)only;	// 0x340c1939
// converted property getter: - (BOOL)vendPhotoDataOnly;	// 0x340c193d
@end

