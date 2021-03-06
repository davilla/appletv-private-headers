/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class UIPDFPageView;
@protocol UIPDFSelectionWidget, NSObject;

@interface UIPDFSelectionController : NSObject {
	UIPDFPageView *_pageView;	// 4 = 0x4
	BOOL _rangeMode;	// 8 = 0x8
	id<UIPDFSelectionWidget, NSObject> _selectionWidget;	// 12 = 0xc
	BOOL _resizingWidget;	// 16 = 0x10
	CGPoint _selectionFixedPoint;	// 20 = 0x14
	CGRect _selectionBounds;	// 28 = 0x1c
	BOOL _preceeds;	// 44 = 0x2c
	BOOL _isTracking;	// 45 = 0x2d
	CGPoint _adjustedPoint;	// 48 = 0x30
	BOOL _hiding;	// 56 = 0x38
	int _firstIndex;	// 60 = 0x3c
	int _lastIndex;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) CGPoint adjustedPoint;	// G=0x3265a911; @synthesize=_adjustedPoint
@property(readonly, assign, nonatomic) CGPoint currentSelectionPoint;	// G=0x3265aaed; 
@property(readonly, assign, nonatomic) CGPoint initialSelectionPoint;	// G=0x3265ab51; 
@property(readonly, assign, nonatomic) BOOL isTracking;	// G=0x3265a929; @synthesize=_isTracking
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x3265a959; S=0x3265a969; @synthesize=_pageView
@property(readonly, assign, nonatomic) BOOL rangeMode;	// G=0x3265a949; @synthesize=_rangeMode
@property(readonly, assign, nonatomic) id<UIPDFSelectionWidget> selectionWidget;	// G=0x3265a939; @synthesize=_selectionWidget
- (id)init;	// 0x3265a979
- (void)adjustSelection:(CGPoint)selection;	// 0x3265b675
// declared property getter: - (CGPoint)adjustedPoint;	// 0x3265a911
- (void)clearSelection;	// 0x3265b395
// declared property getter: - (CGPoint)currentSelectionPoint;	// 0x3265aaed
- (void)dealloc;	// 0x3265be9d
- (void)endTracking:(CGPoint)tracking;	// 0x3265abdd
- (void)extendSelectionToParagraph;	// 0x3265b47d
- (void)hideWidget;	// 0x3265b369
// declared property getter: - (CGPoint)initialSelectionPoint;	// 0x3265ab51
// declared property getter: - (BOOL)isTracking;	// 0x3265a929
- (void)layoutSelections;	// 0x3265aac1
// declared property getter: - (id)pageView;	// 0x3265a959
// declared property getter: - (BOOL)rangeMode;	// 0x3265a949
- (CGPoint)selectedPointOffset;	// 0x3265abb5
- (void)selectionHide:(id)hide;	// 0x3265be55
- (void)selectionShow:(id)show;	// 0x3265be0d
- (void)selectionShowDelayed:(id)delayed;	// 0x3265bdd1
// declared property getter: - (id)selectionWidget;	// 0x3265a939
// declared property setter: - (void)setPageView:(id)view;	// 0x3265a969
- (void)setSelectionFor:(CGPoint)aFor;	// 0x3265b501
- (BOOL)shouldTrackAt:(CGPoint)at;	// 0x3265b2b5
- (void)startSelectingAt:(CGPoint)at;	// 0x3265b165
- (void)startTracking:(CGPoint)tracking showMagnifier:(BOOL *)magnifier;	// 0x3265afe9
- (void)tracking:(CGPoint)tracking showMagnifier:(BOOL *)magnifier;	// 0x3265adfd
- (BOOL)useParagraphMode;	// 0x3265a90d
@end

