/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFormatter.h"
#import "Foundation-Structs.h"


@interface NSByteCountFormatter : NSFormatter {
	unsigned _allowedUnits;	// 4 = 0x4
	BOOL _countStyle;	// 8 = 0x8
	BOOL _allowsNonnumericFormatting;	// 9 = 0x9
	BOOL _includesUnit;	// 10 = 0xa
	BOOL _includesCount;	// 11 = 0xb
	BOOL _includesActualByteCount;	// 12 = 0xc
	BOOL _adaptive;	// 13 = 0xd
	BOOL _zeroPadsFractionDigits;	// 14 = 0xe
	int _reserved[6];	// 16 = 0x10
}
@property(assign, getter=isAdaptive) BOOL adaptive;	// G=0x37471101; S=0x37471119; @synthesize=_adaptive
@property(assign) unsigned allowedUnits;	// G=0x37470799; S=0x374707a9; 
@property(assign) BOOL allowsNonnumericFormatting;	// G=0x37471041; S=0x37471059; @synthesize=_allowsNonnumericFormatting
@property(assign) int countStyle;	// G=0x374707b9; S=0x374707c9; 
@property(assign) BOOL includesActualByteCount;	// G=0x374710d1; S=0x374710e9; @synthesize=_includesActualByteCount
@property(assign) BOOL includesCount;	// G=0x374710a1; S=0x374710b9; @synthesize=_includesCount
@property(assign) BOOL includesUnit;	// G=0x37471071; S=0x37471089; @synthesize=_includesUnit
@property(assign) BOOL zeroPadsFractionDigits;	// G=0x37471131; S=0x37471149; @synthesize=_zeroPadsFractionDigits
+ (id)stringFromByteCount:(long long)byteCount countStyle:(int)style;	// 0x37470951
- (id)init;	// 0x37470a35
- (id)initWithCoder:(id)coder;	// 0x37470e41
- (unsigned long long)_options;	// 0x374707d9
// declared property getter: - (unsigned)allowedUnits;	// 0x37470799
// declared property getter: - (BOOL)allowsNonnumericFormatting;	// 0x37471041
- (id)copyWithZone:(NSZone *)zone;	// 0x37470ab9
// declared property getter: - (int)countStyle;	// 0x374707b9
- (void)encodeWithCoder:(id)coder;	// 0x37470c1d
- (BOOL)getObjectValue:(out id *)value forString:(id)string errorDescription:(out id *)description;	// 0x37470a2d
// declared property getter: - (BOOL)includesActualByteCount;	// 0x374710d1
// declared property getter: - (BOOL)includesCount;	// 0x374710a1
// declared property getter: - (BOOL)includesUnit;	// 0x37471071
// declared property getter: - (BOOL)isAdaptive;	// 0x37471101
- (BOOL)isPartialStringValid:(id *)valid proposedSelectedRange:(NSRange *)range originalString:(id)string originalSelectedRange:(NSRange)range4 errorDescription:(id *)description;	// 0x37470a31
// declared property setter: - (void)setAdaptive:(BOOL)adaptive;	// 0x37471119
// declared property setter: - (void)setAllowedUnits:(unsigned)units;	// 0x374707a9
// declared property setter: - (void)setAllowsNonnumericFormatting:(BOOL)formatting;	// 0x37471059
// declared property setter: - (void)setCountStyle:(int)style;	// 0x374707c9
// declared property setter: - (void)setIncludesActualByteCount:(BOOL)count;	// 0x374710e9
// declared property setter: - (void)setIncludesCount:(BOOL)count;	// 0x374710b9
// declared property setter: - (void)setIncludesUnit:(BOOL)unit;	// 0x37471089
// declared property setter: - (void)setZeroPadsFractionDigits:(BOOL)digits;	// 0x37471149
- (id)stringForObjectValue:(id)objectValue;	// 0x374709c5
- (id)stringFromByteCount:(long long)byteCount;	// 0x37470995
// declared property getter: - (BOOL)zeroPadsFractionDigits;	// 0x37471131
@end
