/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class UIBezierPath;

@interface MPAlternateTrackCellBackgroundView : UIView {
	int _sectionLocation;	// 48 = 0x30
	UIBezierPath *_fillPath;	// 52 = 0x34
	UIBezierPath *_strokePath;	// 56 = 0x38
}
@property(assign, nonatomic) int sectionLocation;	// G=0x301358f1; S=0x3013530d; @synthesize=_sectionLocation
- (id)initWithFrame:(CGRect)frame;	// 0x3013517d
- (void)_createBezierPathWithCornerRadius:(float)cornerRadius bottomRadius:(float)radius animating:(BOOL)animating;	// 0x30135365
- (void)_invalidatePaths;	// 0x30135251
- (void)dealloc;	// 0x301351f1
- (void)drawRect:(CGRect)rect;	// 0x301357b9
- (void)layoutSubviews;	// 0x301358b1
// declared property getter: - (int)sectionLocation;	// 0x301358f1
- (void)setFrame:(CGRect)frame;	// 0x301352a9
// declared property setter: - (void)setSectionLocation:(int)location;	// 0x3013530d
- (void)setSectionLocation:(int)location animated:(BOOL)animated;	// 0x30135321
@end

