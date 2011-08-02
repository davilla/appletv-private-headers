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
- (id)availableArtworkFormatIDsForChapterIndex:(unsigned)chapterIndex;	// 0x31bcd71d
- (id)bestImageDataForSize:(CGSize)size chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x31bcd719
- (ChapterData *)chapterDataRef;	// 0x31be6585
- (unsigned)chapterIndexAtTimeLocationInMS:(unsigned)ms;	// 0x31bcd721
- (unsigned)chapterIndexForGroupIndex:(unsigned)groupIndex groupingProperty:(int)property;	// 0x31bcd6f1
- (unsigned)countOfChapters;	// 0x31bcd6e9
- (unsigned)countOfGroupsForProperty:(int)property;	// 0x31bcd6ed
- (unsigned)durationInMSOfGroupAtIndex:(unsigned)index groupingProperty:(int)property;	// 0x31bcd6f9
- (unsigned)groupIndexAtTimeLocationInMS:(unsigned)ms groupingProperty:(int)property;	// 0x31bcd6fd
- (unsigned)groupIndexForChapterIndex:(unsigned)chapterIndex groupingProperty:(int)property;	// 0x31bcd6f5
- (BOOL)hasDataForProperty:(int)property;	// 0x31bcd7a1
- (id)imageDataForArtworkFormatID:(unsigned)artworkFormatID chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x31bcd715
- (unsigned)timeLocationInMSOfChapterAtIndex:(unsigned)index;	// 0x31bcd705
- (unsigned)timeLocationInMSOfGroupAtIndex:(unsigned)index groupingProperty:(int)property;	// 0x31bcd701
- (id)titlePropertyOfChapterAtIndex:(unsigned)index;	// 0x31bcd709
- (id)urlPropertyOfChapterAtIndex:(unsigned)index;	// 0x31bcd711
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned)index;	// 0x31bcd70d
@end

