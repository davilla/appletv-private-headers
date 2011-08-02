/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class MPTimeMarker;

@interface MPVideoChapterCellContentView : UIView {
	unsigned _current : 1;	// 41 = 0x29
	unsigned _index;	// 44 = 0x2c
	unsigned _selected : 1;	// 48 = 0x30
	unsigned _showThumbnailColumn : 1;	// 48 = 0x30
	float _timeColumnWidth;	// 52 = 0x34
	MPTimeMarker *_timeMarker;	// 56 = 0x38
}
@property(assign, nonatomic, getter=isCurrent) BOOL current;	// G=0x335ff7b9; S=0x335ffab1; 
@property(assign, nonatomic) unsigned index;	// G=0x335ff815; S=0x335ffa89; @synthesize=_index
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x335ff7cd; S=0x335ffa49; 
@property(assign, nonatomic) BOOL showThumbnailColumn;	// G=0x335ff7e1; S=0x335ff9b9; 
@property(assign, nonatomic) float timeColumnWidth;	// G=0x335ff805; S=0x335ff8e9; @synthesize=_timeColumnWidth
@property(retain, nonatomic) MPTimeMarker *timeMarker;	// G=0x335ff7f5; S=0x335ff91d; @synthesize=_timeMarker
- (void)_addThumbnailIfNecessary:(id)necessary;	// 0x335ff885
- (void)_removeThumbnailIfNecessary:(id)necessary;	// 0x335ff825
- (void)dealloc;	// 0x335ffaf1
- (void)drawRect:(CGRect)rect;	// 0x335fff5d
// declared property getter: - (unsigned)index;	// 0x335ff815
// declared property getter: - (BOOL)isCurrent;	// 0x335ff7b9
// declared property getter: - (BOOL)isSelected;	// 0x335ff7cd
- (void)layoutSubviews;	// 0x335ffe6d
// declared property setter: - (void)setCurrent:(BOOL)current;	// 0x335ffab1
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x335ffa89
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x335ffa49
// declared property setter: - (void)setShowThumbnailColumn:(BOOL)column;	// 0x335ff9b9
// declared property setter: - (void)setTimeColumnWidth:(float)width;	// 0x335ff8e9
// declared property setter: - (void)setTimeMarker:(id)marker;	// 0x335ff91d
// declared property getter: - (BOOL)showThumbnailColumn;	// 0x335ff7e1
// declared property getter: - (float)timeColumnWidth;	// 0x335ff805
// declared property getter: - (id)timeMarker;	// 0x335ff7f5
@end

