/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class UIView;

@interface MPMovieSnapshot : NSObject {
	id _delegate;	// 4 = 0x4
	CGSize _size;	// 8 = 0x8
	int _interfaceOrientation;	// 16 = 0x10
	float _time;	// 20 = 0x14
	float _originalTime;	// 24 = 0x18
	UIView *_snapshot;	// 28 = 0x1c
}
@property(readonly, retain) id delegate;	// G=0x335c0f35; converted property
@property(readonly, retain) UIView *snapshot;	// G=0x335c0f45; converted property
@property(readonly, assign) float time;	// G=0x335c0f55; converted property
+ (id)infoWithSize:(CGSize)size orientation:(int)orientation time:(float)time delegate:(id)delegate;	// 0x335c1005
- (void)dealloc;	// 0x335c16a5
// converted property getter: - (id)delegate;	// 0x335c0f35
- (id)description;	// 0x335c162d
- (BOOL)prepareForSnapshotOfLayer:(id)layer;	// 0x335c0f65
// converted property getter: - (id)snapshot;	// 0x335c0f45
- (void)snapshotLayer:(id)layer;	// 0x335c17a9
// converted property getter: - (float)time;	// 0x335c0f55
@end

