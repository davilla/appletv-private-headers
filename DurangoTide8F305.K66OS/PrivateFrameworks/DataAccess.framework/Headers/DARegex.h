/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface DARegex : NSObject {
	NSString *_pattern;	// 4 = 0x4
	struct {
		int re_magic;
		unsigned re_nsub;
		char *re_endp;
		re_guts *re_g;
	} _regex;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *pattern;	// G=0x3023d021; @synthesize=_pattern
+ (BOOL)matchesString:(id)string pattern:(id)pattern ignoreCase:(BOOL)aCase;	// 0x3023d0f1
+ (id)regexWithPattern:(id)pattern ignoreCase:(BOOL)aCase;	// 0x3023d04d
+ (id)subexpressionsMatchingString:(id)string pattern:(id)pattern ignoreCase:(BOOL)aCase;	// 0x3023d091
- (id)initWithPattern:(id)pattern ignoreCase:(BOOL)aCase;	// 0x3023d151
- (void)dealloc;	// 0x3023d209
- (BOOL)matchesString:(id)string;	// 0x3023d031
// declared property getter: - (id)pattern;	// 0x3023d021
- (id)subexpressionsMatchingString:(id)string;	// 0x3023d261
@end

