/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "BRContainerViewCell.h"

@class CATransition, BRImage, BRImageControl, BRDotArrayControl;

@interface BRPagedView : BRControl <BRContainerViewCell> {
@private
	id _delegate;	// 48 = 0x30
	id _dataSource;	// 52 = 0x34
	unsigned _currentPage;	// 56 = 0x38
	BRControl *_contentPanel;	// 60 = 0x3c
	BRControl *_content;	// 64 = 0x40
	BRImage *_arrowImage;	// 68 = 0x44
	BRImageControl *_rightArrow;	// 72 = 0x48
	BRImageControl *_leftArrow;	// 76 = 0x4c
	BRDotArrayControl *_pageDots;	// 80 = 0x50
	CATransition *_prevPageTransition;	// 84 = 0x54
	CATransition *_nextPageTransition;	// 88 = 0x58
	BOOL _showsArrows;	// 92 = 0x5c
	BOOL _showsDots;	// 93 = 0x5d
	id _loadCompletionBlock;	// 96 = 0x60
	BOOL _delegateRetained;	// 100 = 0x64
	BOOL _dataSourceRetained;	// 101 = 0x65
}
@property(readonly, assign) unsigned currentPage;	// G=0x3031f8d5; @synthesize=_currentPage
@property(assign) id dataSource;	// G=0x3031f845; S=0x3031f855; @synthesize=_dataSource
@property(assign) id delegate;	// G=0x3031ed29; S=0x3031ed39; 
@property(retain) CATransition *nextPageTransition;	// G=0x3031f865; S=0x3031f879; @synthesize=_nextPageTransition
@property(retain) CATransition *prevPageTransition;	// G=0x3031f89d; S=0x3031f8b1; @synthesize=_prevPageTransition
@property(assign) BOOL showsArrows;	// G=0x3031ea81; S=0x3031ea91; 
@property(assign) BOOL showsDots;	// G=0x3031eb05; S=0x3031eb15; 
- (id)init;	// 0x3031e465
- (BOOL)brEventAction:(id)action;	// 0x3031f0bd
- (void)cancelContainerViewLoad;	// 0x3031f34d
- (void)controlWasDeactivated;	// 0x3031e9b9
// declared property getter: - (unsigned)currentPage;	// 0x3031f8d5
// declared property getter: - (id)dataSource;	// 0x3031f845
- (void)dealloc;	// 0x3031e8e1
// declared property getter: - (id)delegate;	// 0x3031ed29
- (void)layoutSubcontrols;	// 0x3031f539
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x3031f22d
- (BOOL)nextPage;	// 0x3031eebd
// declared property getter: - (id)nextPageTransition;	// 0x3031f865
- (BOOL)prevPage;	// 0x3031efd1
// declared property getter: - (id)prevPageTransition;	// 0x3031f89d
- (void)reloadData;	// 0x3031eb51
- (void)removeFromParent;	// 0x3031ee1d
// declared property setter: - (void)setDataSource:(id)source;	// 0x3031f855
- (void)setDatasource:(id)datasource;	// 0x3031ec85
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3031ed39
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x3031f411
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x3031f461
// declared property setter: - (void)setNextPageTransition:(id)transition;	// 0x3031f879
// declared property setter: - (void)setPrevPageTransition:(id)transition;	// 0x3031f8b1
- (void)setReadyToDisplay;	// 0x3031f3c1
// declared property setter: - (void)setShowsArrows:(BOOL)arrows;	// 0x3031ea91
// declared property setter: - (void)setShowsDots:(BOOL)dots;	// 0x3031eb15
// declared property getter: - (BOOL)showsArrows;	// 0x3031ea81
// declared property getter: - (BOOL)showsDots;	// 0x3031eb05
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3031f4b5
- (void)windowMaxBoundsChanged;	// 0x3031ea2d
@end

