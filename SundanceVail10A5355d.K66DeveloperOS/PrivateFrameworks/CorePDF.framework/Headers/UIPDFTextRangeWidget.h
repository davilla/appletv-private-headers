/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "UIPDFSelectionWidget.h"
#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class CALayer, UIPDFPageView;

@interface UIPDFTextRangeWidget : NSObject <UIPDFSelectionWidget> {
	CALayer *_leftSelectionGrabber;	// 4 = 0x4
	CALayer *_leftBar;	// 8 = 0x8
	CALayer *_rightSelectionGrabber;	// 12 = 0xc
	CALayer *_rightBar;	// 16 = 0x10
	CALayer *_leftHandle;	// 20 = 0x14
	CALayer *_rightHandle;	// 24 = 0x18
	CALayer *_fixedSelectionGrabber;	// 28 = 0x1c
	UIPDFPageView *_pageView;	// 32 = 0x20
	float _handleHeight;	// 36 = 0x24
	float _handleWidth;	// 40 = 0x28
	CGPoint _initialSelectionPointOnPage;	// 44 = 0x2c
	float _offsetX;	// 52 = 0x34
	float _offsetY;	// 56 = 0x38
	BOOL _hiDPI;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) CGPoint currentSelectionPointOnPage;	// G=0x34d2d395; 
@property(readonly, assign, nonatomic) CGPoint initialSelectionPointOnPage;	// G=0x34d2d5c1; @synthesize=_initialSelectionPointOnPage
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x34d2d5a1; S=0x34d2d5b1; @synthesize=_pageView
- (id)init;	// 0x34d2b9d1
// declared property getter: - (CGPoint)currentSelectionPointOnPage;	// 0x34d2d395
- (void)dealloc;	// 0x34d2bcd5
- (void)endTracking;	// 0x34d2d36d
- (void)hide;	// 0x34d2d51d
- (BOOL)hitTest:(CGPoint)test fixedPoint:(CGPoint *)point preceeds:(BOOL *)preceeds;	// 0x34d2cbf5
// declared property getter: - (CGPoint)initialSelectionPointOnPage;	// 0x34d2d5c1
- (void)layout;	// 0x34d2d32d
- (void)layoutLeftSelectionGrabber:(CGRect)grabber transform:(CGAffineTransform *)transform width:(float)width extraHeight:(float)height unitSize:(CGSize)size;	// 0x34d2bd19
- (void)layoutRightSelectionGrabber:(CGRect)grabber transform:(CGAffineTransform *)transform width:(float)width extraHeight:(float)height unitSize:(CGSize)size;	// 0x34d2c1f1
- (void)layoutWidget;	// 0x34d2c6e5
// declared property getter: - (id)pageView;	// 0x34d2d5a1
- (void)remove;	// 0x34d2cb5d
- (CGPoint)selectedPointFor:(CGPoint)aFor;	// 0x34d2cbad
- (CGRect)selectionRectangle;	// 0x34d2d371
// declared property setter: - (void)setPageView:(id)view;	// 0x34d2d5b1
- (void)setSelectedGrabber:(unsigned)grabber;	// 0x34d2ca95
- (void)setSelection:(id)selection;	// 0x34d2cac5
- (void)track:(CGPoint)track;	// 0x34d2d369
- (CGPoint)viewOffset;	// 0x34d2d1b5
@end

