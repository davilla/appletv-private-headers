/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "MLITChapterTOCRep.h"

@class ML3Track;

__attribute__((visibility("hidden")))
@interface ML3ChapterTOC : MLITChapterTOCRep {
@private
	ML3Track *_track;	// 24 = 0x18
}
- (id)initWithChapterDataRef:(ChapterData *)chapterDataRef track:(id)track;	// 0x333ed8e1
- (id)availableArtworkFormatIDsForArtworkGroupChapterIndex:(unsigned)artworkGroupChapterIndex;	// 0x333ed749
- (void)dealloc;	// 0x333ed899
- (id)imageDataForArtworkFormatID:(unsigned)artworkFormatID size:(CGSize)size artworkChapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x333ed7e5
@end

