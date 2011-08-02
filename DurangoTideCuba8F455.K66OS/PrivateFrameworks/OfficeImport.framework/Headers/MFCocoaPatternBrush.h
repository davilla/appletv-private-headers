/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFCocoaBrush.h"

@class MFCocoaBitmap;

__attribute__((visibility("hidden")))
@interface MFCocoaPatternBrush : MFCocoaBrush {
@private
	MFCocoaBitmap *m_pattern;	// 4 = 0x4
	BOOL m_usePaletteForBilevel;	// 8 = 0x8
}
+ (id)patternBrushWithBitmap:(id)bitmap usePaletteForBilevel:(BOOL)bilevel;	// 0x32c7ffd1
- (id)initWithBitmap:(id)bitmap usePaletteForBilevel:(BOOL)bilevel;	// 0x32c80009
- (void)dealloc;	// 0x32c80165
- (void)fillPath:(id)path :(id)arg2;	// 0x32c80071
@end

