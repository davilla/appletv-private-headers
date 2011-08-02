/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSRegularExpression.h"


@interface NSDataDetector : NSRegularExpression {
	unsigned long long _types;	// 28 = 0x1c
}
@property(readonly, assign) unsigned long long checkingTypes;	// G=0x310d2cd5; 
+ (id)dataDetectorWithTypes:(unsigned long long)types error:(id *)error;	// 0x310d2ea1
+ (void)initialize;	// 0x310d2ee5
- (id)initWithCoder:(id)coder;	// 0x310d33c1
- (id)initWithPattern:(id)pattern options:(unsigned)options error:(id *)error;	// 0x310d2e4d
- (id)initWithTypes:(unsigned long long)types error:(id *)error;	// 0x310d3f05
// declared property getter: - (unsigned long long)checkingTypes;	// 0x310d2cd5
- (void)dealloc;	// 0x310d409d
- (id)description;	// 0x310d322d
- (void)encodeWithCoder:(id)coder;	// 0x310d2dd9
- (void)enumerateMatchesInString:(id)string options:(unsigned)options range:(NSRange)range usingBlock:(id)block;	// 0x310d40e1
- (void)finalize;	// 0x310d4059
- (unsigned)hash;	// 0x310d2dc5
- (BOOL)isEqual:(id)equal;	// 0x310d2d45
- (unsigned)numberOfCaptureGroups;	// 0x310d2ced
- (unsigned)options;	// 0x310d2ce9
- (id)pattern;	// 0x310d2ce5
@end

