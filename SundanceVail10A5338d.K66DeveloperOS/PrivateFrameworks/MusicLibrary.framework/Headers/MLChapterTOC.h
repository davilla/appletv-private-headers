/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library


@interface MLChapterTOC : NSObject {
}
- (id)artworkCacheIDForChapterIndex:(unsigned)chapterIndex;	// 0x30b0d775
- (id)artworkCacheIDForTimeInMS:(unsigned)ms;	// 0x30b0d771
- (id)bestImageDataForSize:(CGSize)size chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x30b0d77d
- (ChapterData *)chapterDataRef;	// 0x30b0d781
- (unsigned)chapterIndexAtTimeLocationInMS:(unsigned)ms;	// 0x30b0d6e1
- (unsigned)chapterIndexForGroupIndex:(unsigned)groupIndex groupingProperty:(int)property;	// 0x30b0d6cd
- (unsigned)countOfChapters;	// 0x30b0d6a9
- (unsigned)countOfGroupsForProperty:(int)property;	// 0x30b0d6c9
- (unsigned)durationInMSOfGroupAtIndex:(unsigned)index groupingProperty:(int)property;	// 0x30b0d6d5
- (unsigned)groupIndexAtTimeLocationInMS:(unsigned)ms groupingProperty:(int)property;	// 0x30b0d6d9
- (unsigned)groupIndexForChapterIndex:(unsigned)chapterIndex groupingProperty:(int)property;	// 0x30b0d6d1
- (BOOL)hasDataForProperty:(int)property;	// 0x30b0d6ad
- (id)imageDataForArtworkFormatID:(unsigned)artworkFormatID chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x30b0d779
- (unsigned)timeLocationInMSOfChapterAtIndex:(unsigned)index;	// 0x30b0d761
- (unsigned)timeLocationInMSOfGroupAtIndex:(unsigned)index groupingProperty:(int)property;	// 0x30b0d6dd
- (id)titlePropertyOfChapterAtIndex:(unsigned)index;	// 0x30b0d765
- (id)urlPropertyOfChapterAtIndex:(unsigned)index;	// 0x30b0d76d
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned)index;	// 0x30b0d769
@end

