/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPViewController.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MPImageCache, UIMovieChapterListView, MPVideoView, NSArray;

@interface MPVideoChaptersViewController : MPViewController <UITableViewDataSource, UITableViewDelegate> {
	MPVideoView *_videoView;	// 196 = 0xc4
	MPImageCache *_imageCache;	// 200 = 0xc8
	unsigned _currentMarker;	// 204 = 0xcc
	NSArray *_chapterTimeMarkers;	// 208 = 0xd0
	UIMovieChapterListView *_chapterListView;	// 212 = 0xd4
	float _timeColumnWidth;	// 216 = 0xd8
	unsigned _haveThumbnails : 1;	// 220 = 0xdc
	unsigned _videoOutActive : 1;	// 220 = 0xdc
}
@property(retain, nonatomic) NSArray *chapterTimeMarkers;	// G=0x34dfb7f1; S=0x34dfaed1; @synthesize=_chapterTimeMarkers
@property(assign, nonatomic) unsigned currentMarkerIndex;	// G=0x34dfb7c1; S=0x34dfb7d1; @synthesize=_currentMarker
@property(assign, nonatomic) float topPadding;	// G=0x34dfaf81; S=0x34dfaeb1; 
@property(assign, nonatomic) BOOL videoOutActive;	// G=0x34dfafa1; S=0x34dfaf69; 
@property(retain, nonatomic) MPVideoView *videoView;	// G=0x34dfb7e1; S=0x34dfae59; @synthesize=_videoView
- (id)init;	// 0x34dfac39
- (void)_reloadThumbnails;	// 0x34dfb655
- (void)_sizeColumnsToFit;	// 0x34dfb725
// declared property getter: - (id)chapterTimeMarkers;	// 0x34dfb7f1
// declared property getter: - (unsigned)currentMarkerIndex;	// 0x34dfb7c1
- (void)dealloc;	// 0x34dfacc1
- (void)loadView;	// 0x34dfafb5
- (id)newImageRequestWithMediaEntity:(id)mediaEntity timeMarker:(id)marker;	// 0x34dfb2dd
// declared property setter: - (void)setChapterTimeMarkers:(id)markers;	// 0x34dfaed1
- (void)setCurrentMarker:(unsigned)marker;	// 0x34dfadf5
// declared property setter: - (void)setCurrentMarkerIndex:(unsigned)index;	// 0x34dfb7d1
// declared property setter: - (void)setTopPadding:(float)padding;	// 0x34dfaeb1
// declared property setter: - (void)setVideoOutActive:(BOOL)active;	// 0x34dfaf69
// declared property setter: - (void)setVideoView:(id)view;	// 0x34dfae59
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x34dfb3fd
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x34dfb5e5
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x34dfb3dd
// declared property getter: - (float)topPadding;	// 0x34dfaf81
// declared property getter: - (BOOL)videoOutActive;	// 0x34dfafa1
// declared property getter: - (id)videoView;	// 0x34dfb7e1
- (void)viewDidAppear:(BOOL)view;	// 0x34dfb121
- (void)viewDidDisappear:(BOOL)view;	// 0x34dfb195
- (void)viewDidUnload;	// 0x34dfb081
- (void)viewWillDisappear:(BOOL)view;	// 0x34dfb26d
@end

