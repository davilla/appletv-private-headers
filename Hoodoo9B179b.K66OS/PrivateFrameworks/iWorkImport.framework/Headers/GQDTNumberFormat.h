/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"

@class NSArray, NSIndexSet;

__attribute__((visibility("hidden")))
@interface GQDTNumberFormat : NSObject <GQDNameMappable> {
@private
	char *mUid;	// 4 = 0x4
	CFStringRef mFormatString;	// 8 = 0x8
	CFStringRef mCurrencyCode;	// 12 = 0xc
	long mDecimalPlaces;	// 16 = 0x10
	BOOL mUseAccountingStyle;	// 20 = 0x14
	BOOL mShowThousandsSeparator;	// 21 = 0x15
	int mValueType;	// 24 = 0x18
	int mNegativeStyle;	// 28 = 0x1c
	int mFractionAccuracy;	// 32 = 0x20
	BOOL mFormatStringRequiresSuppressionOfMinusSign;	// 36 = 0x24
	double mScaleFactor;	// 40 = 0x28
	BOOL mIsCustom;	// 48 = 0x30
	BOOL mRequiresFractionReplacement;	// 49 = 0x31
	unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;	// 50 = 0x32
	unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;	// 51 = 0x33
	unsigned short mIndexFromRightOfLastDigitPlaceholder;	// 52 = 0x34
	unsigned char mBase;	// 54 = 0x36
	unsigned short mBasePlaces;	// 56 = 0x38
	BOOL mBaseUsesMinusSign;	// 58 = 0x3a
	BOOL mUseScientificFormattingAutomatically;	// 59 = 0x3b
	BOOL mIgnoreDecimalPlacesForZeroValue;	// 60 = 0x3c
	BOOL mIsTextFormat;	// 61 = 0x3d
	BOOL mFormatContainsSpecialTokens;	// 62 = 0x3e
	BOOL mFormatContainsIntegerToken;	// 63 = 0x3f
	NSArray *mInterstitialStrings;	// 64 = 0x40
	NSIndexSet *mInterstitialStringInsertionIndexes;	// 68 = 0x44
	unsigned char mMinimumIntegerWidth;	// 72 = 0x48
	unsigned char mDecimalWidth;	// 73 = 0x49
	CFStringRef mSuffixString;	// 76 = 0x4c
}
+ (BOOL)needToSuppressMinusSignForFormatString:(CFStringRef)formatString;	// 0x35983da5
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy suffixString:(CFStringRef)string9;	// 0x3598167d
+ (const StateSpec *)stateForReading;	// 0x359803f1
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy suffixString:(CFStringRef)string9 scaleFactor:(double)factor base:(unsigned short)base basePlaces:(unsigned short)places12 baseUseMinusSign:(BOOL)sign isCustom:(BOOL)custom interstitialStrings:(id)strings interstitialStringInsertionIndexes:(id)indexes indexFromRightOfLastDigitPlaceholder:(unsigned short)lastDigitPlaceholder minimumIntegerWidth:(unsigned char)width decimalWidth:(unsigned char)width19 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)nonSpaceIntegerPlaceholderDigits numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)nonSpaceDecimalPlaceholderDigits isTextFormat:(BOOL)format formatName:(id)name;	// 0x35983515
- (id)baseStringFromDouble:(double)aDouble;	// 0x35983b11
- (CFStringRef)createStringFromDouble:(double)aDouble;	// 0x35981c31
- (id)currencyCode;	// 0x35980461
- (id)customNumberFormatTokens;	// 0x359808b9
- (void)dealloc;	// 0x3598295d
- (id)formatString;	// 0x35980451
- (int)fractionAccuracy;	// 0x359804a1
- (id)fractionStringFromDouble:(double)aDouble;	// 0x35983925
- (BOOL)hasValidDecimalPlaces;	// 0x359803fd
- (BOOL)isCustom;	// 0x35980481
- (BOOL)isTextFormat;	// 0x35980491
- (id)numberFormatBySettingNegativeStyle:(int)style;	// 0x35980595
- (id)numberFormatBySettingValueType:(int)type;	// 0x35980765
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x3598314d
- (void)setUseScientificFormattingAutomatically:(BOOL)automatically;	// 0x35980441
- (BOOL)showThousandsSeparator;	// 0x35980471
- (id)stringFromDouble:(double)aDouble;	// 0x35981ce5
- (BOOL)useAccountingStyle;	// 0x35980431
- (int)valueType;	// 0x35980421
@end

