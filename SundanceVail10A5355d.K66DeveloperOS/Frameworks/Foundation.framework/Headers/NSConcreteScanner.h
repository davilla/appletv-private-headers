/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSScanner.h"

@class NSCharacterSet, NSString;

__attribute__((visibility("hidden")))
@interface NSConcreteScanner : NSScanner {
	NSString *scanString;	// 4 = 0x4
	NSCharacterSet *skipSet;	// 8 = 0x8
	NSCharacterSet *invertedSkipSet;	// 12 = 0xc
	id locale;	// 16 = 0x10
	unsigned scanLocation;	// 20 = 0x14
	struct {
		unsigned caseSensitive : 1;
		unsigned  : 31;
	} flags;	// 24 = 0x18
}
@property(assign) BOOL caseSensitive;	// G=0x3467a0a1; S=0x346d87f9; converted property
@property(retain) id charactersToBeSkipped;	// G=0x34679f5d; S=0x346d8785; converted property
@property(retain) id locale;	// G=0x34684645; S=0x346d8811; converted property
@property(assign) unsigned scanLocation;	// G=0x34679e79; S=0x3467a0b5; converted property
- (id)initWithString:(id)string;	// 0x34679cb9
- (id)_invertedSkipSet;	// 0x34679e89
// converted property getter: - (BOOL)caseSensitive;	// 0x3467a0a1
// converted property getter: - (id)charactersToBeSkipped;	// 0x34679f5d
- (void)dealloc;	// 0x3467a141
- (void)finalize;	// 0x346d8891
// converted property getter: - (id)locale;	// 0x34684645
- (BOOL)scanInt:(int *)int;	// 0x34684435
// converted property getter: - (unsigned)scanLocation;	// 0x34679e79
- (BOOL)scanLongLong:(long long *)aLong;	// 0x346d8855
// converted property setter: - (void)setCaseSensitive:(BOOL)sensitive;	// 0x346d87f9
// converted property setter: - (void)setCharactersToBeSkipped:(id)beSkipped;	// 0x346d8785
// converted property setter: - (void)setLocale:(id)locale;	// 0x346d8811
// converted property setter: - (void)setScanLocation:(unsigned)location;	// 0x3467a0b5
- (id)string;	// 0x34679e69
@end
