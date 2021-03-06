/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UITableViewCell.h> // Unknown library

@class MPTimeMarker, MPVideoChapterCellContentView, MPImageCache;

@interface MPVideoChapterCell : UITableViewCell {
	MPVideoChapterCellContentView *_chapterContentView;	// 248 = 0xf8
}
@property(retain, nonatomic) MPImageCache *artworkImageCache;	// G=0x35b76f15; S=0x35b76ef5; 
@property(assign, nonatomic, getter=isCurrent) BOOL current;	// G=0x35b76dcd; S=0x35b76df1; 
@property(assign, nonatomic) unsigned index;	// G=0x35b76dad; S=0x35b76e11; 
@property(assign, nonatomic) BOOL showThumbnailColumn;	// G=0x35b76e91; S=0x35b76e31; 
@property(assign, nonatomic) float timeColumnWidth;	// G=0x35b76eb5; S=0x35b76e51; 
@property(retain, nonatomic) MPTimeMarker *timeMarker;	// G=0x35b76ed5; S=0x35b76e71; 
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x35b76bbd
// declared property getter: - (id)artworkImageCache;	// 0x35b76f15
- (void)dealloc;	// 0x35b76d01
// declared property getter: - (unsigned)index;	// 0x35b76dad
// declared property getter: - (BOOL)isCurrent;	// 0x35b76dcd
- (void)prepareForReuse;	// 0x35b76f55
// declared property setter: - (void)setArtworkImageCache:(id)cache;	// 0x35b76ef5
- (void)setArtworkImageRequest:(id)request artworkLoadCompletionHandler:(id)handler;	// 0x35b76f35
// declared property setter: - (void)setCurrent:(BOOL)current;	// 0x35b76df1
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x35b76e11
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x35b76d55
// declared property setter: - (void)setShowThumbnailColumn:(BOOL)column;	// 0x35b76e31
// declared property setter: - (void)setTimeColumnWidth:(float)width;	// 0x35b76e51
// declared property setter: - (void)setTimeMarker:(id)marker;	// 0x35b76e71
// declared property getter: - (BOOL)showThumbnailColumn;	// 0x35b76e91
// declared property getter: - (float)timeColumnWidth;	// 0x35b76eb5
// declared property getter: - (id)timeMarker;	// 0x35b76ed5
@end

