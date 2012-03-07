/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPhotoMediaCollection.h"


@interface ATVDefaultPhotos : BRPhotoMediaCollection {
@private
	int _photosType;	// 44 = 0x2c
}
+ (id)appleDefaultPhotos:(int)photos;	// 0x35cb7439
+ (id)appleDefaultPhotosCollection:(int)collection;	// 0x35cb75ad
- (id)initWithPhotosType:(int)photosType;	// 0x35cb7641
- (id)collectionID;	// 0x35cb76fd
- (id)collectionName;	// 0x35cb7685
- (id)mediaAssets;	// 0x35cb772d
@end
