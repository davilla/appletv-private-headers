/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSDate, NSTimeZone;

@interface NSDateCheckingResult : NSTextCheckingResult {
	NSRange _range;	// 4 = 0x4
	NSDate *_date;	// 12 = 0xc
	NSTimeZone *_timeZone;	// 16 = 0x10
	double _duration;	// 20 = 0x14
	NSDate *_referenceDate;	// 28 = 0x1c
	id _underlyingResult;	// 32 = 0x20
	BOOL _timeIsSignificant;	// 36 = 0x24
	BOOL _timeIsApproximate;	// 37 = 0x25
}
@property(readonly, retain) NSDate *date;	// G=0x34729849; converted property
@property(readonly, assign) double duration;	// G=0x34729869; 
@property(readonly, assign) NSRange range;	// G=0x34729631; converted property
@property(readonly, assign) NSDate *referenceDate;	// G=0x34729881; 
@property(readonly, assign) BOOL timeIsApproximate;	// G=0x347298b1; 
@property(readonly, assign) BOOL timeIsSignificant;	// G=0x347298a1; 
@property(readonly, assign) NSTimeZone *timeZone;	// G=0x34729859; 
@property(readonly, assign) void *underlyingResult;	// G=0x34729891; 
- (id)initWithCoder:(id)coder;	// 0x3472945d
- (id)initWithRange:(NSRange)range date:(id)date;	// 0x34729141
- (id)initWithRange:(NSRange)range date:(id)date timeZone:(id)zone duration:(double)duration;	// 0x347290fd
- (id)initWithRange:(NSRange)range date:(id)date timeZone:(id)zone duration:(double)duration referenceDate:(id)date5;	// 0x347290b9
- (id)initWithRange:(NSRange)range date:(id)date timeZone:(id)zone duration:(double)duration referenceDate:(id)date5 underlyingResult:(void *)result;	// 0x34729075
- (id)initWithRange:(NSRange)range date:(id)date timeZone:(id)zone duration:(double)duration referenceDate:(id)date5 underlyingResult:(void *)result timeIsSignificant:(BOOL)significant timeIsApproximate:(BOOL)approximate;	// 0x34728f69
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x347297ad
// converted property getter: - (id)date;	// 0x34729849
- (void)dealloc;	// 0x34729189
- (id)description;	// 0x34729215
// declared property getter: - (double)duration;	// 0x34729869
- (void)encodeWithCoder:(id)coder;	// 0x34729301
// converted property getter: - (NSRange)range;	// 0x34729631
// declared property getter: - (id)referenceDate;	// 0x34729881
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x34729649
- (unsigned long long)resultType;	// 0x34729629
// declared property getter: - (BOOL)timeIsApproximate;	// 0x347298b1
// declared property getter: - (BOOL)timeIsSignificant;	// 0x347298a1
// declared property getter: - (id)timeZone;	// 0x34729859
// declared property getter: - (void *)underlyingResult;	// 0x34729891
@end
