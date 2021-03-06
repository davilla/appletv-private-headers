/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRMediaCollection.h"

@protocol BRMediaProvider;

@interface BRBaseMediaCollection : NSObject <BRMediaCollection> {
@private
	id<BRMediaProvider> _provider;	// 4 = 0x4
}
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x302610c9
- (id)artist;	// 0x30261215
- (id)artistForSorting;	// 0x30261219
- (id)assetEnumerator;	// 0x302611e5
- (id)childCollections;	// 0x302611a1
- (id)collectionID;	// 0x302611c5
- (id)collectionType;	// 0x302611a9
- (int)count;	// 0x3026141d
- (id)date;	// 0x302613f1
- (void)dealloc;	// 0x3026111d
- (long)duration;	// 0x3026122d
- (unsigned)hash;	// 0x30261169
- (id)imageProxy;	// 0x302611dd
- (BOOL)isAvailable;	// 0x30261345
- (BOOL)isCompilation;	// 0x3026120d
- (BOOL)isHidden;	// 0x302613e9
- (BOOL)isLocal;	// 0x30261341
- (BOOL)isSingleArtistCompilation;	// 0x30261211
- (BOOL)isValid;	// 0x302611c9
- (id)mediaAssets;	// 0x302611e1
- (id)mediaObjectID;	// 0x302611cd
- (id)mediaType;	// 0x30261325
- (id)mediaTypes;	// 0x30261231
- (id)parentCollection;	// 0x302611a5
- (void)performSelector:(SEL)selector target:(id)target;	// 0x302613f5
- (void)performSelector:(SEL)selector target:(id)target withObject:(id)object;	// 0x30261409
- (id)provider;	// 0x30261191
- (id)title;	// 0x3026121d
- (id)titleForSorting;	// 0x30261221
- (id)titleForSortingNoDefault;	// 0x30261229
- (id)titleNoDefault;	// 0x30261225
- (void)willBeDeleted;	// 0x302613ed
@end

