/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSAffineTransform.h> // Unknown library


@interface NSAffineTransform (GQUAdditions)
- (id)initWithCGAffineTransform:(CGAffineTransform)cgaffineTransform;	// 0x359c0cb9
- (float)angle;	// 0x359c09fd
- (CGRect)boundsOfTransformedRect:(CGRect)transformedRect;	// 0x359c05e1
- (CGAffineTransform)cgAffineTransform;	// 0x359c04d1
- (id)description;	// 0x359c0559
- (BOOL)differOnlyByTranslation:(id)translation;	// 0x359c0379
- (BOOL)differsFrom:(id)from;	// 0x359c02dd
- (BOOL)isAxisAligned;	// 0x359c08b1
- (void)shearXBy:(float)by yBy:(float)by2;	// 0x359c0719
- (void)transformRect:(CGRect)rect upperLeft:(CGPoint *)left lowerLeft:(CGPoint *)left3 lowerRight:(CGPoint *)right upperRight:(CGPoint *)right5;	// 0x359c03f1
@end
