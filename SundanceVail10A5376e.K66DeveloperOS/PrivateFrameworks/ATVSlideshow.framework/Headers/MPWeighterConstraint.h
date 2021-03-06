/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray, NSDictionary;

@interface MPWeighterConstraint : NSObject {
	int numOfImages;	// 4 = 0x4
	NSDictionary *nextConstraints;	// 8 = 0x8
	NSString *presetID;	// 12 = 0xc
	int movieCount;	// 16 = 0x10
	BOOL moviesOnly;	// 20 = 0x14
	BOOL ignoreMovies;	// 21 = 0x15
	int wideLandscape;	// 24 = 0x18
	int square;	// 28 = 0x1c
	int landscape;	// 32 = 0x20
	int portrait;	// 36 = 0x24
	int hBreaks;	// 40 = 0x28
	int vBreaks;	// 44 = 0x2c
	int supportsHBreaks;	// 48 = 0x30
	int supportsVBreaks;	// 52 = 0x34
	int supportsAllBreaks;	// 56 = 0x38
	int allBreaks;	// 60 = 0x3c
	BOOL hasBreak;	// 64 = 0x40
	NSArray *maxAspectRatios;	// 68 = 0x44
	NSArray *minAspectRatios;	// 72 = 0x48
	NSArray *tags;	// 76 = 0x4c
	BOOL tagsOnSourceOnly;	// 80 = 0x50
	BOOL shelf;	// 81 = 0x51
}
@property(retain, nonatomic) NSArray *maxAspectRatios;	// G=0x36230581; S=0x36230591; @synthesize
@property(retain, nonatomic) NSArray *minAspectRatios;	// G=0x362305a1; S=0x362305b1; @synthesize
@property(retain, nonatomic) NSDictionary *nextConstraints;	// G=0x36230541; S=0x36230551; @synthesize
@property(retain, nonatomic) NSString *presetID;	// G=0x36230561; S=0x36230571; @synthesize
@property(retain, nonatomic) NSArray *tags;	// G=0x362305c1; S=0x362305d1; @synthesize
- (id)init;	// 0x36230341
- (void)dealloc;	// 0x36230481
// declared property getter: - (id)maxAspectRatios;	// 0x36230581
// declared property getter: - (id)minAspectRatios;	// 0x362305a1
// declared property getter: - (id)nextConstraints;	// 0x36230541
// declared property getter: - (id)presetID;	// 0x36230561
// declared property setter: - (void)setMaxAspectRatios:(id)ratios;	// 0x36230591
// declared property setter: - (void)setMinAspectRatios:(id)ratios;	// 0x362305b1
// declared property setter: - (void)setNextConstraints:(id)constraints;	// 0x36230551
// declared property setter: - (void)setPresetID:(id)anId;	// 0x36230571
// declared property setter: - (void)setTags:(id)tags;	// 0x362305d1
// declared property getter: - (id)tags;	// 0x362305c1
@end

