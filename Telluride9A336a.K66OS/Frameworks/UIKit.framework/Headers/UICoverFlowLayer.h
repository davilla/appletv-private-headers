/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <CALayer.h> // Unknown library
#import "UIKit-Structs.h"


@interface UICoverFlowLayer : CALayer {
@private
	void *_private;	// 48 = 0x30
}
- (id)initWithFrame:(CGRect)frame numberOfCovers:(unsigned)covers numberOfPlaceholders:(unsigned)placeholders;	// 0x35222665
- (unsigned)_coverAtScreenPosition:(CGPoint)screenPosition;	// 0x35229569
- (void)_notifySelectionDidChange;	// 0x35227799
- (void)_prefetch:(unsigned)prefetch atIndex:(unsigned)index;	// 0x352c59c1
- (void)_recycleLayer:(int)layer to:(int)to;	// 0x35229871
- (void)_requestBatch;	// 0x35227a11
- (void)_requestImageAtIndex:(int)index;	// 0x352277e1
- (void)_requestImageAtIndex:(int)index quality:(unsigned)quality;	// 0x352279a5
- (void)_setNewSelectedIndex:(int)index;	// 0x35227265
- (void)_setupFlippedCoverLayer:(id)layer;	// 0x35229b99
- (void)_updateTick;	// 0x352248f5
- (void)benchmarkHeartbeatLongScrub;	// 0x352c5d49
- (void)benchmarkHeartbeatScrubAndWait;	// 0x352c5ec1
- (void)benchmarkHeartbeatShortScrub;	// 0x352c5dc9
- (BOOL)benchmarkImageManager:(void *)manager;	// 0x352c664d
- (void)benchmarkImageMode:(int)mode;	// 0x352c68e9
- (BOOL)benchmarkLoadScrub;	// 0x352c64c1
- (void)benchmarkLongScrubSpeed:(float)speed;	// 0x352c69b5
- (void)benchmarkMode:(int)mode;	// 0x352c681d
- (void)benchmarkPerformanceLog:(BOOL)log;	// 0x352c693d
- (void)benchmarkSetEnv;	// 0x3522319d
- (void)benchmarkSkipImageLoad:(BOOL)load;	// 0x352c69f1
- (int)benchmarkTick;	// 0x352c5bc1
- (void)benchmarkTickMode:(int)mode;	// 0x352c68a5
- (void)benchmarkTightLoop;	// 0x352c5fe5
- (void)benchmarkTightLoopScrub;	// 0x352c6091
- (void)benchmarkTightLoopTime:(unsigned)time;	// 0x352c6981
- (unsigned)coverIndexAtPosition:(float)position;	// 0x352c5bbd
- (void)dealloc;	// 0x3522a8a5
- (void)displayTick;	// 0x35227b41
- (void)dragFlow:(unsigned)flow atPoint:(CGPoint)point;	// 0x35228b45
- (void)flipSelectedCover;	// 0x35229a89
- (unsigned)indexOfSelectedCover;	// 0x35223bc5
- (unsigned)numberOfCovers;	// 0x352c5959
- (unsigned)numberOfPlaceholders;	// 0x352c596d
- (void)selectCoverAtIndex:(unsigned)index;	// 0x35223bd9
- (void)selectCoverAtOffset:(int)offset;	// 0x352c5b99
- (void)setDelegate:(id)delegate;	// 0x352235b5
- (void)setDisplayedOrientation:(int)orientation animate:(BOOL)animate;	// 0x35223489
- (void)setImage:(void *)image atIndex:(unsigned)index;	// 0x352c5b19
- (void)setImage:(void *)image atIndex:(unsigned)index type:(unsigned)type;	// 0x352c5ad1
- (void)setImage:(void *)image atIndex:(unsigned)index type:(unsigned)type imageSubRect:(CGRect)rect;	// 0x35227d69
- (void)setInfoLayer:(id)layer;	// 0x35228989
- (void)setPlaceholderImage:(void *)image atPlaceholderIndex:(unsigned)placeholderIndex;	// 0x352c5981
- (void)setPlaceholderImage:(void *)image atPlaceholderIndex:(unsigned)placeholderIndex imageSubRect:(CGRect)rect;	// 0x35223911
- (void)setPlaceholderIndicesForCovers:(unsigned *)covers;	// 0x352239a5
- (void)transition:(unsigned)transition withCoverFrame:(CGRect)coverFrame;	// 0x3522416d
- (void)transitionIn:(float)anIn;	// 0x352c5a11
- (void)transitionIn:(float)anIn fromFrame:(CGRect)frame;	// 0x352c5a71
- (void)transitionOut:(float)anOut;	// 0x352c5a41
- (void)transitionOut:(float)anOut toFrame:(CGRect)frame;	// 0x352c5aa1
@end
