/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface Face : NSObject {
@private
	int size;	// 4 = 0x4
	int centerX;	// 8 = 0x8
	int centerY;	// 12 = 0xc
	double I;	// 16 = 0x10
	double Q;	// 24 = 0x18
}
@property(readonly, assign) double I;	// G=0x30717a11; @synthesize
@property(readonly, assign) double Q;	// G=0x30717a45; @synthesize
@property(readonly, assign) int centerX;	// G=0x307179f1; @synthesize
@property(readonly, assign) int centerY;	// G=0x30717a01; @synthesize
@property(readonly, assign) int size;	// G=0x307179e1; @synthesize
- (id)initWithBounds:(CGRect)bounds andImage:(id)image usingContext:(id)context;	// 0x30717519
// declared property getter: - (double)I;	// 0x30717a11
// declared property getter: - (double)Q;	// 0x30717a45
// declared property getter: - (int)centerX;	// 0x307179f1
// declared property getter: - (int)centerY;	// 0x30717a01
- (id)description;	// 0x307178e5
- (CGRect)faceRect;	// 0x3071797d
// declared property getter: - (int)size;	// 0x307179e1
@end

