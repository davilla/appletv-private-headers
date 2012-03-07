/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import "NSCopying.h"
#import "CTMessageAddress.h"
#import "CoreTelephony-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress> {
	NSString *_digits;	// 4 = 0x4
	NSString *_countryCode;	// 8 = 0x8
	BOOL _isShortCode;	// 12 = 0xc
}
@property(readonly, assign) NSString *countryCode;	// G=0x31051cb5; @synthesize=_countryCode
@property(readonly, assign) NSString *digits;	// G=0x31051ca5; @synthesize=_digits
@property(assign) BOOL isShortCode;	// G=0x31051cc5; S=0x31051cd5; @synthesize=_isShortCode
+ (id)phoneNumberWithDigits:(id)digits countryCode:(id)code;	// 0x310518ad
- (id)initWithDigits:(id)digits countryCode:(id)code;	// 0x3105199d
- (id)canonicalFormat;	// 0x31051c51
- (id)copyWithZone:(NSZone *)zone;	// 0x31051b91
// declared property getter: - (id)countryCode;	// 0x31051cb5
- (void)dealloc;	// 0x31051b31
// declared property getter: - (id)digits;	// 0x31051ca5
- (id)encodedString;	// 0x31051c61
- (id)formatForCallingCountry:(id)callingCountry;	// 0x31051c05
// declared property getter: - (BOOL)isShortCode;	// 0x31051cc5
- (int)numberOfDigitsForShortCodeNumber;	// 0x310518ed
// declared property setter: - (void)setIsShortCode:(BOOL)code;	// 0x31051cd5
@end
