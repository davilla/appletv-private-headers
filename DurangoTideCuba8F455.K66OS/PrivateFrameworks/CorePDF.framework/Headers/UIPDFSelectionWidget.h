/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"

@class UIPDFPageView;

@protocol UIPDFSelectionWidget
@property(assign, nonatomic) UIPDFPageView *pageView;
- (void)addToLayer:(id)layer;
- (BOOL)hitTest:(CGPoint)test;
- (BOOL)hitTest:(CGPoint)test fixedPoint:(CGPoint *)point preceeds:(BOOL *)preceeds;
// declared property getter: - (id)pageView;
- (void)remove;
- (CGPoint)selectedPointFor:(CGPoint)aFor;
- (void)setNeedsDisplay;
// declared property setter: - (void)setPageView:(id)view;
- (void)setSelection:(id)selection;
@end

