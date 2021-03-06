/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseMediaCollection.h"

@class NSMutableArray;

@interface BRMovieTrailerCollection : BRBaseMediaCollection {
@private
	NSMutableArray *_mediaAssets;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *mediaAssets;	// G=0x33a5b915; converted property
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x33a5b749
- (void)addObject:(id)object;	// 0x33a5b8cd
- (id)artist;	// 0x33a5b929
- (id)artistForSorting;	// 0x33a5b965
- (id)collectionID;	// 0x33a5b81d
- (id)collectionType;	// 0x33a5b801
- (int)count;	// 0x33a5b8ed
- (id)coverArt;	// 0x33a5b859
- (void)dealloc;	// 0x33a5b7b5
- (long)duration;	// 0x33a5ba19
- (BOOL)hasCoverArt;	// 0x33a5b895
- (BOOL)isCompilation;	// 0x33a5b925
- (BOOL)isLocal;	// 0x33a5ba91
// converted property getter: - (id)mediaAssets;	// 0x33a5b915
- (id)mediaType;	// 0x33a5ba55
- (id)primaryGenre;	// 0x33a5bac9
- (id)title;	// 0x33a5b9a1
- (id)titleForSorting;	// 0x33a5b9dd
@end

