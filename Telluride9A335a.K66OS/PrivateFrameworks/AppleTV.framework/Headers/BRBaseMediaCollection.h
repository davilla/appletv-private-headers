/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaCollection.h"
#import <NSObject.h> // Unknown library

@protocol BRMediaProvider;

@interface BRBaseMediaCollection : NSObject <BRMediaCollection> {
@private
	id<BRMediaProvider> _provider;	// 4 = 0x4
}
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x341b4909
- (id)artist;	// 0x341b4a55
- (id)artistForSorting;	// 0x341b4a59
- (id)assetEnumerator;	// 0x341b4a25
- (id)childCollections;	// 0x341b49e1
- (id)collectionID;	// 0x341b4a05
- (id)collectionType;	// 0x341b49e9
- (int)count;	// 0x341b4c5d
- (id)date;	// 0x341b4c31
- (void)dealloc;	// 0x341b495d
- (long)duration;	// 0x341b4a6d
- (unsigned)hash;	// 0x341b49a9
- (id)imageProxy;	// 0x341b4a1d
- (BOOL)isAvailable;	// 0x341b4b85
- (BOOL)isCompilation;	// 0x341b4a4d
- (BOOL)isHidden;	// 0x341b4c29
- (BOOL)isLocal;	// 0x341b4b81
- (BOOL)isSingleArtistCompilation;	// 0x341b4a51
- (BOOL)isValid;	// 0x341b4a09
- (id)mediaAssets;	// 0x341b4a21
- (id)mediaObjectID;	// 0x341b4a0d
- (id)mediaType;	// 0x341b4b65
- (id)mediaTypes;	// 0x341b4a71
- (id)parentCollection;	// 0x341b49e5
- (void)performSelector:(SEL)selector target:(id)target;	// 0x341b4c35
- (void)performSelector:(SEL)selector target:(id)target withObject:(id)object;	// 0x341b4c49
- (id)provider;	// 0x341b49d1
- (id)title;	// 0x341b4a5d
- (id)titleForSorting;	// 0x341b4a61
- (id)titleForSortingNoDefault;	// 0x341b4a69
- (id)titleNoDefault;	// 0x341b4a65
- (void)willBeDeleted;	// 0x341b4c2d
@end

