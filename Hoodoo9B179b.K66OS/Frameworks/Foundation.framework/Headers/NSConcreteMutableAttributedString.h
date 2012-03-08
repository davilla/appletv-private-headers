/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMutableAttributedString.h"

@class NSMutableString, NSMutableRLEArray;

@interface NSConcreteMutableAttributedString : NSMutableAttributedString {
@private
	NSMutableString *mutableString;	// 4 = 0x4
	NSMutableRLEArray *mutableAttributes;	// 8 = 0x8
	struct {
		unsigned attributeFixingDisabled : 8;
		unsigned  : 24;
	} fields;	// 12 = 0xc
}
+ (Class)_mutableStringClass;	// 0x31025da5
- (id)init;	// 0x310259fd
- (id)initWithAttributedString:(id)attributedString;	// 0x31025b05
- (id)initWithCoder:(id)coder;	// 0x31028441
- (id)initWithString:(id)string;	// 0x31025a19
- (id)initWithString:(id)string attributes:(id)attributes;	// 0x310e4bb9
- (id)_runArrayHoldingAttributes;	// 0x31027b35
- (void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;	// 0x310e4e75
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x310289d5
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x310e4fa1
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x31028a19
- (Class)classForCoder;	// 0x310e5121
- (void)dealloc;	// 0x31027b89
- (void)edited:(unsigned)edited range:(NSRange)range changeInLength:(int)length;	// 0x310260f1
- (void)finalize;	// 0x310e4d09
- (unsigned)length;	// 0x310289b5
- (void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;	// 0x310e4d35
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x31025f29
- (void)setAttributes:(id)attributes range:(NSRange)range;	// 0x31027311
- (id)string;	// 0x31027b25
@end
