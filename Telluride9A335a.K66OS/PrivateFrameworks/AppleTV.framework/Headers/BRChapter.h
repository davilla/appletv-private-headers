/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDate;

@interface BRChapter : NSObject {
@private
	NSString *_name;	// 4 = 0x4
	NSString *_description;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
	double _startTime;	// 16 = 0x10
	double _endTime;	// 24 = 0x18
	NSDate *_startDate;	// 32 = 0x20
	NSDate *_endDate;	// 36 = 0x24
}
@property(retain, nonatomic) NSString *description;	// G=0x34291de1; S=0x34291df1; @synthesize=_description
@property(retain, nonatomic) NSDate *endDate;	// G=0x34291ed5; S=0x34291ee5; @synthesize=_endDate
@property(assign, nonatomic) double endTime;	// G=0x34291e75; S=0x34291e8d; @synthesize=_endTime
@property(retain, nonatomic) NSString *identifier;	// G=0x34291e15; S=0x34291e25; @synthesize=_identifier
@property(retain, nonatomic) NSString *name;	// G=0x34291dad; S=0x34291dbd; @synthesize=_name
@property(retain, nonatomic) NSDate *startDate;	// G=0x34291ea1; S=0x34291eb1; @synthesize=_startDate
@property(assign, nonatomic) double startTime;	// G=0x34291e49; S=0x34291e61; @synthesize=_startTime
+ (id)chapterWithAssetID:(id)assetID startDate:(id)date endDate:(id)date3;	// 0x342919c9
+ (id)chapterWithAssetID:(id)assetID startTime:(double)time endTime:(double)time3;	// 0x34291979
- (id)initWithAssetID:(id)assetID startDate:(id)date endDate:(id)date3;	// 0x34291ae5
- (id)initWithAssetID:(id)assetID startTime:(double)time endTime:(double)time3;	// 0x34291a11
- (BOOL)containsDate:(id)date;	// 0x34291d21
- (BOOL)containsTime:(double)time;	// 0x34291c49
- (void)dealloc;	// 0x34291bb1
// declared property getter: - (id)description;	// 0x34291de1
// declared property getter: - (id)endDate;	// 0x34291ed5
// declared property getter: - (double)endTime;	// 0x34291e75
// declared property getter: - (id)identifier;	// 0x34291e15
- (id)imageProxy;	// 0x34291da9
- (void)invalidate;	// 0x34291c45
// declared property getter: - (id)name;	// 0x34291dad
// declared property setter: - (void)setDescription:(id)description;	// 0x34291df1
// declared property setter: - (void)setEndDate:(id)date;	// 0x34291ee5
// declared property setter: - (void)setEndTime:(double)time;	// 0x34291e8d
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x34291e25
// declared property setter: - (void)setName:(id)name;	// 0x34291dbd
// declared property setter: - (void)setStartDate:(id)date;	// 0x34291eb1
// declared property setter: - (void)setStartTime:(double)time;	// 0x34291e61
// declared property getter: - (id)startDate;	// 0x34291ea1
// declared property getter: - (double)startTime;	// 0x34291e49
@end
