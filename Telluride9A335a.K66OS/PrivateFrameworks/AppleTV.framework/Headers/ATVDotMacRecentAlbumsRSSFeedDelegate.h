/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseParserDelegate.h"

@class NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVDotMacRecentAlbumsRSSFeedDelegate : BRBaseParserDelegate {
@private
	NSMutableArray *_recentAlbums;	// 12 = 0xc
	NSMutableDictionary *_currentAlbumInfo;	// 16 = 0x10
}
@property(readonly, retain) NSMutableArray *recentAlbums;	// G=0x341102b1; converted property
+ (id)delegate;	// 0x341101a5
- (id)init;	// 0x341101ed
- (void)dealloc;	// 0x34110251
- (void)endItem;	// 0x3411046d
- (void)endLink;	// 0x3411058d
- (void)endPubDate;	// 0x341104c1
- (void)endTitle;	// 0x34110529
// converted property getter: - (id)recentAlbums;	// 0x341102b1
- (void)startEnclosureWithAttributes:(id)attributes;	// 0x34110321
- (void)startItemWithAttributes:(id)attributes;	// 0x341102dd
@end

