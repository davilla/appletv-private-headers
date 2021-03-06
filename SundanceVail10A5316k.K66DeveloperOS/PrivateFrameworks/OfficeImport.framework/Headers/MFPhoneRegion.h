/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFRegion.h"


__attribute__((visibility("hidden")))
@interface MFPhoneRegion : MFRegion {
@private
	CGPathRef m_path;	// 4 = 0x4
	CGRect m_bounds;	// 8 = 0x8
}
- (id)initWithPath:(id)path :(CGRect)arg2;	// 0x311a8eb9
- (id)initWithRects:(id)rects :(CGRect)arg2 :(id)arg3;	// 0x31190439
- (id).cxx_construct;	// 0x31190435
- (void)dealloc;	// 0x31190a51
- (int)fill:(id)fill :(id)arg2;	// 0x312f876d
- (int)frame:(id)frame :(id)arg2;	// 0x312f879d
- (int)invert:(id)invert;	// 0x312f87a1
- (int)setClip:(id)clip :(int)arg2;	// 0x31190585
@end

