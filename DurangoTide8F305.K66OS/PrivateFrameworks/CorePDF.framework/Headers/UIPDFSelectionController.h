/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class UIPDFPageView;
@protocol UIPDFSelectionWidget;

@interface UIPDFSelectionController : NSObject {
	UIPDFPageView *_pageView;	// 4 = 0x4
	BOOL _rangeMode;	// 8 = 0x8
	id<UIPDFSelectionWidget> _selectionWidget;	// 12 = 0xc
	BOOL _resizingWidget;	// 16 = 0x10
	CGPoint _selectionFixedPoint;	// 20 = 0x14
	BOOL _preceeds;	// 28 = 0x1c
	BOOL _isTracking;	// 29 = 0x1d
	CGPoint _adjustedPoint;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) CGPoint adjustedPoint;	// G=0x302d03ad; @synthesize=_adjustedPoint
@property(readonly, assign, nonatomic) BOOL isTracking;	// G=0x302d03c5; @synthesize=_isTracking
@property(readonly, assign, nonatomic) BOOL isVisibleSelection;	// G=0x302d0415; 
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x302d03f5; S=0x302d0405; @synthesize=_pageView
@property(readonly, assign, nonatomic) BOOL rangeMode;	// G=0x302d03e5; @synthesize=_rangeMode
@property(readonly, assign, nonatomic) id<UIPDFSelectionWidget> selectionWidget;	// G=0x302d03d5; @synthesize=_selectionWidget
// declared property getter: - (CGPoint)adjustedPoint;	// 0x302d03ad
- (void)clearSelection;	// 0x302d0a85
- (void)displaySelection;	// 0x302d0449
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x302d0aed
- (void)endTracking:(CGPoint)tracking;	// 0x302d0489
- (void)extendSelection:(CGPoint)selection;	// 0x302d0bbd
- (void)extendSelectionToParagraph;	// 0x302d0a11
// declared property getter: - (BOOL)isTracking;	// 0x302d03c5
// declared property getter: - (BOOL)isVisibleSelection;	// 0x302d0415
// declared property getter: - (id)pageView;	// 0x302d03f5
// declared property getter: - (BOOL)rangeMode;	// 0x302d03e5
// declared property getter: - (id)selectionWidget;	// 0x302d03d5
// declared property setter: - (void)setPageView:(id)view;	// 0x302d0405
- (void)setSelectionFor:(CGPoint)aFor;	// 0x302d0d35
- (BOOL)shouldTrackAt:(CGPoint)at;	// 0x302d0845
- (void)startTracking:(CGPoint)tracking;	// 0x302d070d
- (void)tracking:(CGPoint)tracking;	// 0x302d0649
@end

