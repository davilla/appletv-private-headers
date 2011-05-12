/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSMutableDictionary, NSArray, NSString, BRWaitSpinnerControl, BRImage;

__attribute__((visibility("hidden")))
@interface BRTransportLayer : BRControl {
@private
	BOOL _zeroDuration;	// 44 = 0x2c
	BOOL _drawsBetweenLeftEdgeAndBufferEdge;	// 45 = 0x2d
	BOOL _useWideLeftEndCap;	// 46 = 0x2e
	BOOL _playerStateHidden;	// 47 = 0x2f
	float _percentComplete;	// 48 = 0x30
	NSRange _downloadedRange;	// 52 = 0x34
	int _currentState;	// 60 = 0x3c
	NSString *_currentChapter;	// 64 = 0x40
	NSMutableDictionary *_cachedImages;	// 68 = 0x44
	CGRect _leftEndCapBounds;	// 72 = 0x48
	CGRect _rightEndCapBounds;	// 88 = 0x58
	CGRect _leftEndCapExtensionBounds;	// 104 = 0x68
	BRImage *_leftEndCap;	// 120 = 0x78
	BRImage *_leftEndCapPiece;	// 124 = 0x7c
	BRImage *_rightEndCap;	// 128 = 0x80
	CGRect _leftProgressEndCapBounds;	// 132 = 0x84
	CGRect _rightProgressEndCapBounds;	// 148 = 0x94
	BRImage *_leftProgressEndCap;	// 164 = 0xa4
	BRImage *_rightProgressEndCap;	// 168 = 0xa8
	BRImage *_leftProgressUnbufferedEndCap;	// 172 = 0xac
	CGRect _leftGrayBarBounds;	// 176 = 0xb0
	CGRect _rightGrayBarBounds;	// 192 = 0xc0
	BRImage *_grayBarPiece;	// 208 = 0xd0
	CGRect _rightGrayEndCapBounds;	// 212 = 0xd4
	BRImage *_rightGrayEndCap;	// 228 = 0xe4
	CGRect _leftWhiteBarBounds;	// 232 = 0xe8
	CGRect _rightWhiteBarBounds;	// 248 = 0xf8
	BRImage *_whiteBarPiece;	// 264 = 0x108
	CGRect _blueAlreadyPlayedBounds;	// 268 = 0x10c
	BRImage *_blueAlreadyPlayed;	// 284 = 0x11c
	CGRect _chapterMarkerBounds;	// 288 = 0x120
	NSArray *_chapterMarkers;	// 304 = 0x130
	float _temporaryMarkerPositionPercentage;	// 308 = 0x134
	BOOL _showChapterMarkers;	// 312 = 0x138
	CGRect _playheadBounds;	// 316 = 0x13c
	BRImage *_playhead;	// 332 = 0x14c
	CGSize _dynamicBounds;	// 336 = 0x150
	CGSize _staticBounds;	// 344 = 0x158
	BRWaitSpinnerControl *_spinner;	// 352 = 0x160
}
@property(assign) BOOL showChapterMarks;	// G=0x3299106d; S=0x329910a5; converted property
- (id)initWithSpinner:(BOOL)spinner;	// 0x32991239
- (id)_cachedImageForName:(id)name;	// 0x3292e259
- (void)_drawChapterMarkersInContext:(CGContextRef)context;	// 0x329915e1
- (id)_loadImageForName:(id)name;	// 0x3292e2b9
- (void)_updateDynamicFrames;	// 0x3292e369
- (void)_updateLeftEnd;	// 0x3292e8b9
- (void)_updateStaticFrames;	// 0x3292e9d9
- (void)dealloc;	// 0x3292ffb5
- (void)drawInContext:(CGContextRef)context;	// 0x3292f5ed
- (void)layoutSubcontrols;	// 0x3299107d
- (CGRect)leftEndCapRenderableArea;	// 0x32991461
- (float)playheadPosition;	// 0x3292f569
- (CGRect)rightEndCapFrame;	// 0x3292f4f1
- (void)setChapterMarkers:(id)markers withTemporaryMarker:(float)temporaryMarker;	// 0x329910c5
- (void)setDownloadedRange:(NSRange)range;	// 0x3292e31d
- (void)setDrawsBetweenLeftEdgeAndBufferEdge:(BOOL)edge;	// 0x329911fd
- (void)setPercentComplete:(float)complete;	// 0x3292efd5
- (void)setPlayerStateHidden:(BOOL)hidden;	// 0x32991175
// converted property setter: - (void)setShowChapterMarks:(BOOL)marks;	// 0x329910a5
- (void)setState:(int)state;	// 0x3292ef85
- (void)setUseWideLeftEndCap:(BOOL)cap;	// 0x329911b1
- (void)setZeroDuration:(BOOL)duration;	// 0x32991139
// converted property getter: - (BOOL)showChapterMarks;	// 0x3299106d
@end

