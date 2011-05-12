/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import "CTMessageAddress.h"
#import "NSCopying.h"
#import "CoreTelephony-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress> {
	NSString *_digits;	// 4 = 0x4
	NSString *_countryCode;	// 8 = 0x8
	BOOL _isShortCode;	// 12 = 0xc
}
@property(readonly, assign) NSString *countryCode;	// G=0x34705569; @synthesize=_countryCode
@property(readonly, assign) NSString *digits;	// G=0x34705579; @synthesize=_digits
@property(assign) BOOL isShortCode;	// G=0x34705549; S=0x34705559; @synthesize=_isShortCode
+ (id)phoneNumberWithDigits:(id)digits countryCode:(id)code;	// 0x3470567d
- (id)initWithDigits:(id)digits countryCode:(id)code;	// 0x347057a9
- (id)canonicalFormat;	// 0x34705539
- (id)copyWithZone:(NSZone *)zone;	// 0x34705615
// declared property getter: - (id)countryCode;	// 0x34705569
- (void)dealloc;	// 0x3470574d
// declared property getter: - (id)digits;	// 0x34705579
- (id)encodedString;	// 0x34705589
- (id)formatForCallingCountry:(id)callingCountry;	// 0x347055d1
// declared property getter: - (BOOL)isShortCode;	// 0x34705549
- (int)numberOfDigitsForShortCodeNumber;	// 0x347056b5
// declared property setter: - (void)setIsShortCode:(BOOL)code;	// 0x34705559
@end

