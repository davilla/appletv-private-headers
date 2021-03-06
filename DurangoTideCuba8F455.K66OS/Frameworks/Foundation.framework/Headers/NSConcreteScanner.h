/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSScanner.h"

@class NSString, NSCharacterSet;

__attribute__((visibility("hidden")))
@interface NSConcreteScanner : NSScanner {
@private
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
@property(assign) BOOL caseSensitive;	// G=0x31030165; S=0x3107c7c5; converted property
@property(retain) id charactersToBeSkipped;	// G=0x31030035; S=0x3107c859; converted property
@property(retain) id locale;	// G=0x3107c7e1; S=0x3107c81d; converted property
@property(assign) unsigned scanLocation;	// G=0x3102ff41; S=0x31030179; converted property
- (id)initWithString:(id)string;	// 0x3102fd95
- (id)_invertedSkipSet;	// 0x3102ff51
// converted property getter: - (BOOL)caseSensitive;	// 0x31030165
// converted property getter: - (id)charactersToBeSkipped;	// 0x31030035
- (void)dealloc;	// 0x31030209
- (void)finalize;	// 0x3107c7f1
// converted property getter: - (id)locale;	// 0x3107c7e1
- (BOOL)scanInt:(int *)int;	// 0x3107cff5
// converted property getter: - (unsigned)scanLocation;	// 0x3102ff41
- (BOOL)scanLongLong:(long long *)aLong;	// 0x3107d095
// converted property setter: - (void)setCaseSensitive:(BOOL)sensitive;	// 0x3107c7c5
// converted property setter: - (void)setCharactersToBeSkipped:(id)beSkipped;	// 0x3107c859
// converted property setter: - (void)setLocale:(id)locale;	// 0x3107c81d
// converted property setter: - (void)setScanLocation:(unsigned)location;	// 0x31030179
- (id)string;	// 0x3102ff31
@end

