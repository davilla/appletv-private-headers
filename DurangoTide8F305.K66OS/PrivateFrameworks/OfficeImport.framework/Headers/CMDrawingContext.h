/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSAffineTransform, CMDrawableMapper;

__attribute__((visibility("hidden")))
@interface CMDrawingContext : NSObject {
@private
	CMDrawableMapper *_mapper;	// 4 = 0x4
	NSMutableArray *_actions;	// 8 = 0x8
	CGRect _frame;	// 12 = 0xc
	CGRect _finalFrame;	// 28 = 0x1c
	CFDataRef _data;	// 44 = 0x2c
	CGDataConsumerRef _dataConsumer;	// 48 = 0x30
	CGContextRef _cgContext;	// 52 = 0x34
	NSAffineTransform *_currentTransform;	// 56 = 0x38
	NSMutableArray *_transforms;	// 60 = 0x3c
	CGImageRef _fillImage;	// 64 = 0x40
}
@property(readonly, assign) CGRect frame;	// G=0x3457bf91; converted property
@property(retain) CMDrawableMapper *mapper;	// G=0x3453cd7d; S=0x343ccf85; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x343cce95
- (void)_addTransform:(id)transform;	// 0x343cd545
- (void)_applyTransform:(id)transform;	// 0x34437245
- (CGContextRef)_cgContext;	// 0x3457bf81
- (void)_closeContext;	// 0x34437565
- (void)_createCGContext;	// 0x344370b1
- (void)_playbackActions;	// 0x344372a5
- (void)_restoreLastTransform;	// 0x34436df5
- (CGRect)_transformRect:(CGRect)rect withTransform:(id)transform;	// 0x34433f21
- (void)addDebugPath:(CGPathRef)path;	// 0x3457c105
- (void)addPath:(CGPathRef)path;	// 0x343d0301
- (void)addTransform:(id)transform;	// 0x343cd4d5
- (id)createPDF;	// 0x34436fd5
- (float)currentScaleFactor;	// 0x3457c0c1
- (CGAffineTransform)currentTransform;	// 0x343ce275
- (void)dealloc;	// 0x344379a1
// converted property getter: - (CGRect)frame;	// 0x3457bf91
// converted property getter: - (id)mapper;	// 0x3453cd7d
- (CGRect)pdfFrame;	// 0x34437215
- (void)restoreLastTransform;	// 0x34436d85
- (void)setFillColor:(CGColorRef)color;	// 0x343cf58d
- (void)setFillImage:(CGImageRef)image;	// 0x3453cd8d
- (void)setLineDash:(id)dash;	// 0x344d03a5
- (void)setLineWidth:(float)width;	// 0x3445592d
// converted property setter: - (void)setMapper:(id)mapper;	// 0x343ccf85
- (void)setStrokeColor:(CGColorRef)color;	// 0x343cf529
- (CGRect)transformRectToGroup:(CGRect)group;	// 0x34569c31
- (CGRect)transformRectToPage:(CGRect)page;	// 0x34433ec5
@end

