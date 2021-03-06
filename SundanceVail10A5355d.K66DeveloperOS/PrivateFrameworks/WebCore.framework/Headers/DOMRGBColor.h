/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMObject.h"

@class DOMCSSPrimitiveValue;

@interface DOMRGBColor : DOMObject {
}
@property(readonly, assign) DOMCSSPrimitiveValue *alpha;	// G=0x30d7931d; 
@property(readonly, assign) DOMCSSPrimitiveValue *blue;	// G=0x30d791c5; 
@property(readonly, assign) DOMCSSPrimitiveValue *green;	// G=0x30d7906d; 
@property(readonly, assign) DOMCSSPrimitiveValue *red;	// G=0x30d78f15; 
// declared property getter: - (id)alpha;	// 0x30d7931d
// declared property getter: - (id)blue;	// 0x30d791c5
- (CGColorRef)color;	// 0x30d79475
- (void)dealloc;	// 0x30d78e51
- (void)finalize;	// 0x30d78ec5
// declared property getter: - (id)green;	// 0x30d7906d
// declared property getter: - (id)red;	// 0x30d78f15
@end

