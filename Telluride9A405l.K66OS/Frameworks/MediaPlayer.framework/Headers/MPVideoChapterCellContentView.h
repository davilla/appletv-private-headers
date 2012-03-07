/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class MPImageCache, MPImageCacheRequest, MPTimeMarker, UIImage;

@interface MPVideoChapterCellContentView : UIView {
	unsigned _current : 1;	// 46 = 0x2e
	unsigned _index;	// 48 = 0x30
	unsigned _selected : 1;	// 52 = 0x34
	unsigned _showThumbnailColumn : 1;	// 52 = 0x34
	float _timeColumnWidth;	// 56 = 0x38
	MPTimeMarker *_timeMarker;	// 60 = 0x3c
	UIImage *_artwork;	// 64 = 0x40
	MPImageCache *_artworkImageCache;	// 68 = 0x44
	MPImageCacheRequest *_artworkImageRequest;	// 72 = 0x48
}
@property(retain, nonatomic) UIImage *artwork;	// G=0x33bed6b5; S=0x33bed6c5; @synthesize=_artwork
@property(retain, nonatomic) MPImageCache *artworkImageCache;	// G=0x33bed6e9; S=0x33bed6f9; @synthesize=_artworkImageCache
@property(assign, nonatomic, getter=isCurrent) BOOL current;	// G=0x33bed359; S=0x33bed381; 
@property(assign, nonatomic) unsigned index;	// G=0x33bed685; S=0x33bed3cd; @synthesize=_index
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x33bed36d; S=0x33bed3f9; 
@property(assign, nonatomic) BOOL showThumbnailColumn;	// G=0x33bed511; S=0x33bed445; 
@property(assign, nonatomic) float timeColumnWidth;	// G=0x33bed695; S=0x33bed4d5; @synthesize=_timeColumnWidth
@property(retain, nonatomic) MPTimeMarker *timeMarker;	// G=0x33bed6a5; S=0x33bed47d; @synthesize=_timeMarker
// declared property getter: - (id)artwork;	// 0x33bed6b5
// declared property getter: - (id)artworkImageCache;	// 0x33bed6e9
- (void)dealloc;	// 0x33bece6d
- (void)drawRect:(CGRect)rect;	// 0x33becf15
// declared property getter: - (unsigned)index;	// 0x33bed685
// declared property getter: - (BOOL)isCurrent;	// 0x33bed359
// declared property getter: - (BOOL)isSelected;	// 0x33bed36d
// declared property setter: - (void)setArtwork:(id)artwork;	// 0x33bed6c5
// declared property setter: - (void)setArtworkImageCache:(id)cache;	// 0x33bed6f9
- (void)setArtworkImageRequest:(id)request artworkLoadCompletionHandler:(id)handler;	// 0x33bed525
// declared property setter: - (void)setCurrent:(BOOL)current;	// 0x33bed381
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x33bed3cd
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x33bed3f9
// declared property setter: - (void)setShowThumbnailColumn:(BOOL)column;	// 0x33bed445
// declared property setter: - (void)setTimeColumnWidth:(float)width;	// 0x33bed4d5
// declared property setter: - (void)setTimeMarker:(id)marker;	// 0x33bed47d
// declared property getter: - (BOOL)showThumbnailColumn;	// 0x33bed511
// declared property getter: - (float)timeColumnWidth;	// 0x33bed695
// declared property getter: - (id)timeMarker;	// 0x33bed6a5
@end
