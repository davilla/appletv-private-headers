/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSAttributedString.h"


@interface NSMutableAttributedString : NSAttributedString {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3061b9c1
- (void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;	// 0x306da5b9
- (void)addAttributes:(id)attributes range:(NSRange)range;	// 0x306da6e5
- (void)addAttributesWeakly:(id)weakly range:(NSRange)range;	// 0x306da815
- (void)appendAttributedString:(id)string;	// 0x306daabd
- (void)beginEditing;	// 0x306dabc1
- (void)deleteCharactersInRange:(NSRange)range;	// 0x306dab05
- (void)endEditing;	// 0x306dabc5
- (void)insertAttributedString:(id)string atIndex:(unsigned)index;	// 0x306daa9d
- (id)mutableString;	// 0x306da56d
- (void)removeAttribute:(id)attribute range:(NSRange)range;	// 0x306da8f1
- (void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;	// 0x306da9bd
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x306da525
- (void)setAttributedString:(id)string;	// 0x306dab79
- (void)setAttributes:(id)attributes range:(NSRange)range;	// 0x306da549
@end

