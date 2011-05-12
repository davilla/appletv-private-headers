/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"
#import "WebCore-Structs.h"

@class DOMCSSPrimitiveValue;

__attribute__((visibility("hidden")))
@interface DOMRGBColor : DOMObject {
}
@property(readonly, retain) DOMCSSPrimitiveValue *alpha;	// G=0x315bdde1; 
@property(readonly, retain) DOMCSSPrimitiveValue *blue;	// G=0x315bdc9d; 
@property(readonly, retain) DOMCSSPrimitiveValue *green;	// G=0x315bdb55; 
@property(readonly, retain) DOMCSSPrimitiveValue *red;	// G=0x315bd8e5; 
// declared property getter: - (id)alpha;	// 0x315bdde1
// declared property getter: - (id)blue;	// 0x315bdc9d
- (CGColorRef)color;	// 0x316a11f1
- (void)dealloc;	// 0x315c3ff9
- (void)finalize;	// 0x316a123d
// declared property getter: - (id)green;	// 0x315bdb55
// declared property getter: - (id)red;	// 0x315bd8e5
@end

