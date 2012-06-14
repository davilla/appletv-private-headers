/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVInternetPhotosCollection.h"

@class NSString;

@interface ATVFlickrCollection : ATVInternetPhotosCollection {
@private
	NSString *_keyImageFlickrIdentifier;	// 64 = 0x40
}
@property(retain) NSString *keyImageFlickrIdentifier;	// G=0x328aeff9; S=0x328af0c5; converted property
- (id)initWithCollectionInfo:(id)collectionInfo;	// 0x328aeead
- (id)archivableCollectionInfo;	// 0x328af195
- (id)collectionType;	// 0x328af2c9
- (void)dealloc;	// 0x328aefad
// converted property getter: - (id)keyImageFlickrIdentifier;	// 0x328aeff9
- (id)mediaTypes;	// 0x328af285
// converted property setter: - (void)setKeyImageFlickrIdentifier:(id)identifier;	// 0x328af0c5
@end
