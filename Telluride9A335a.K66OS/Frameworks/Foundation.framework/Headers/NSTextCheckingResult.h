/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSTextCheckingResult : NSObject <NSCopying, NSCoding> {
}
@property(readonly, assign) NSRange range;	// G=0x320ebdcd; 
@property(readonly, assign) unsigned long long resultType;	// G=0x320ebda5; 
+ (id)addressCheckingResultWithRange:(NSRange)range components:(id)components;	// 0x320ec0b1
+ (id)correctionCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x320ec255
+ (id)dashCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x320ec1ad
+ (id)dateCheckingResultWithRange:(NSRange)range date:(id)date;	// 0x320ebffd
+ (id)dateCheckingResultWithRange:(NSRange)range date:(id)date timeZone:(id)zone duration:(double)duration;	// 0x320ec051
+ (id)grammarCheckingResultWithRange:(NSRange)range details:(id)details;	// 0x320ebfa9
+ (void)initialize;	// 0x320eba95
+ (id)linkCheckingResultWithRange:(NSRange)range URL:(id)url;	// 0x320ec105
+ (id)orthographyCheckingResultWithRange:(NSRange)range orthography:(id)orthography;	// 0x320ebf09
+ (id)phoneNumberCheckingResultWithRange:(NSRange)range phoneNumber:(id)number;	// 0x320ec385
+ (id)quoteCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x320ec159
+ (id)regularExpressionCheckingResultWithRanges:(NSRange *)ranges count:(unsigned)count regularExpression:(id)expression;	// 0x320ec2a9
+ (id)replacementCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x320ec201
+ (id)spellCheckingResultWithRange:(NSRange)range;	// 0x320ebf5d
+ (id)transitInformationCheckingResultWithRange:(NSRange)range components:(id)components;	// 0x320ec3d9
- (id)initWithCoder:(id)coder;	// 0x320ebb99
- (id)URL;	// 0x320ebef5
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x320ebe1d
- (id)addressComponents;	// 0x320ebee1
- (id)components;	// 0x320ebef1
- (id)copyWithZone:(NSZone *)zone;	// 0x320ebad5
- (id)date;	// 0x320ebec5
- (NSRange)decodeRangeWithCoder:(id)coder;	// 0x320ebc6d
- (id)description;	// 0x320ebae5
- (double)duration;	// 0x320ebecd
- (void)encodeRangeWithCoder:(id)coder;	// 0x320ebbbd
- (void)encodeWithCoder:(id)coder;	// 0x320ebb75
- (id)grammarDetails;	// 0x320ebec1
- (unsigned)numberOfRanges;	// 0x320ebe21
- (id)orthography;	// 0x320ebebd
- (id)phoneNumber;	// 0x320ebf01
// declared property getter: - (NSRange)range;	// 0x320ebdcd
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x320ebe25
- (id)regularExpression;	// 0x320ebefd
- (id)replacementString;	// 0x320ebef9
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x320ebdf9
// declared property getter: - (unsigned long long)resultType;	// 0x320ebda5
- (id)timeZone;	// 0x320ebec9
- (void *)underlyingResult;	// 0x320ebf05
@end

