/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library

@class NSNumber, NSString, NSSet;

@interface BBSectionSubtypeParameters : NSObject {
@private
	BBSectionSubtypeParameters *_fallbackParameters;	// 4 = 0x4
	NSString *_topic;	// 8 = 0x8
	NSString *_missedBannerDescriptionFormat;	// 12 = 0xc
	NSString *_fullUnlockActionLabel;	// 16 = 0x10
	NSString *_unlockActionLabel;	// 20 = 0x14
	NSSet *_alertSuppressionAppIDs;	// 24 = 0x18
	NSNumber *_boxedCoalescesWhenLocked;	// 28 = 0x1c
	NSNumber *_boxedSuppressesMessageForPrivacy;	// 32 = 0x20
	NSNumber *_boxedRealertCount;	// 36 = 0x24
	NSNumber *_boxedInertWhenLocked;	// 40 = 0x28
	NSNumber *_boxedPreservesUnlockActionCase;	// 44 = 0x2c
	NSNumber *_boxedBannerShowsSubtitle;	// 48 = 0x30
	NSNumber *_boxedVisuallyIndicatesWhenDateIsInFuture;	// 52 = 0x34
	NSNumber *_boxedSubtypePriority;	// 56 = 0x38
	NSNumber *_boxedIPodOutAlertType;	// 60 = 0x3c
}
@property(copy, nonatomic) NSSet *alertSuppressionAppIDs;	// G=0x36b7c675; S=0x36b7d0b5; @synthesize=_alertSuppressionAppIDs
@property(assign, nonatomic) BOOL bannerShowsSubtitle;	// G=0x36b7c7f9; S=0x36b7ca2d; 
@property(retain, nonatomic) NSNumber *boxedBannerShowsSubtitle;	// G=0x36b7d165; S=0x36b7d175; @synthesize=_boxedBannerShowsSubtitle
@property(retain, nonatomic) NSNumber *boxedCoalescesWhenLocked;	// G=0x36b7d0c5; S=0x36b7d0d5; @synthesize=_boxedCoalescesWhenLocked
@property(retain, nonatomic) NSNumber *boxedIPodOutAlertType;	// G=0x36b7d1c5; S=0x36b7d1d5; @synthesize=_boxedIPodOutAlertType
@property(retain, nonatomic) NSNumber *boxedInertWhenLocked;	// G=0x36b7d125; S=0x36b7d135; @synthesize=_boxedInertWhenLocked
@property(retain, nonatomic) NSNumber *boxedPreservesUnlockActionCase;	// G=0x36b7d145; S=0x36b7d155; @synthesize=_boxedPreservesUnlockActionCase
@property(retain, nonatomic) NSNumber *boxedRealertCount;	// G=0x36b7d105; S=0x36b7d115; @synthesize=_boxedRealertCount
@property(retain, nonatomic) NSNumber *boxedSubtypePriority;	// G=0x36b7d1a5; S=0x36b7d1b5; @synthesize=_boxedSubtypePriority
@property(retain, nonatomic) NSNumber *boxedSuppressesMessageForPrivacy;	// G=0x36b7d0e5; S=0x36b7d0f5; @synthesize=_boxedSuppressesMessageForPrivacy
@property(retain, nonatomic) NSNumber *boxedVisuallyIndicatesWhenDateIsInFuture;	// G=0x36b7d185; S=0x36b7d195; @synthesize=_boxedVisuallyIndicatesWhenDateIsInFuture
@property(assign, nonatomic) BOOL coalescesWhenLocked;	// G=0x36b7c6a9; S=0x36b7c901; 
@property(assign, nonatomic) BBSectionSubtypeParameters *fallbackParameters;	// G=0x36b7d055; S=0x36b7d065; @synthesize=_fallbackParameters
@property(copy, nonatomic) NSString *fullUnlockActionLabel;	// G=0x36b7c60d; S=0x36b7d095; @synthesize=_fullUnlockActionLabel
@property(assign, nonatomic) int iPodOutAlertType;	// G=0x36b7c8c1; S=0x36b7cae1; 
@property(assign, nonatomic) BOOL inertWhenLocked;	// G=0x36b7c771; S=0x36b7c9b5; 
@property(copy, nonatomic) NSString *missedBannerDescriptionFormat;	// G=0x36b7c5d9; S=0x36b7d085; @synthesize=_missedBannerDescriptionFormat
@property(assign, nonatomic) BOOL preservesUnlockActionCase;	// G=0x36b7c7b5; S=0x36b7c9f1; 
@property(assign, nonatomic) unsigned realertCount;	// G=0x36b7c731; S=0x36b7c979; 
@property(assign, nonatomic) unsigned subtypePriority;	// G=0x36b7c881; S=0x36b7caa5; 
@property(assign, nonatomic) BOOL suppressesMessageForPrivacy;	// G=0x36b7c6ed; S=0x36b7c93d; 
@property(copy, nonatomic) NSString *topic;	// G=0x36b7c5a5; S=0x36b7d075; @synthesize=_topic
@property(copy, nonatomic) NSString *unlockActionLabel;	// G=0x36b7c641; S=0x36b7d0a5; @synthesize=_unlockActionLabel
@property(assign, nonatomic) BOOL visuallyIndicatesWhenDateIsInFuture;	// G=0x36b7c83d; S=0x36b7ca69; 
- (id)initWithCoder:(id)coder;	// 0x36b7cb1d
- (id)initWithFallbackParameters:(id)fallbackParameters;	// 0x36b7c409
// declared property getter: - (id)alertSuppressionAppIDs;	// 0x36b7c675
// declared property getter: - (BOOL)bannerShowsSubtitle;	// 0x36b7c7f9
// declared property getter: - (id)boxedBannerShowsSubtitle;	// 0x36b7d165
// declared property getter: - (id)boxedCoalescesWhenLocked;	// 0x36b7d0c5
// declared property getter: - (id)boxedIPodOutAlertType;	// 0x36b7d1c5
// declared property getter: - (id)boxedInertWhenLocked;	// 0x36b7d125
// declared property getter: - (id)boxedPreservesUnlockActionCase;	// 0x36b7d145
// declared property getter: - (id)boxedRealertCount;	// 0x36b7d105
// declared property getter: - (id)boxedSubtypePriority;	// 0x36b7d1a5
// declared property getter: - (id)boxedSuppressesMessageForPrivacy;	// 0x36b7d0e5
// declared property getter: - (id)boxedVisuallyIndicatesWhenDateIsInFuture;	// 0x36b7d185
// declared property getter: - (BOOL)coalescesWhenLocked;	// 0x36b7c6a9
- (void)dealloc;	// 0x36b7c451
- (void)encodeWithCoder:(id)coder;	// 0x36b7cdf9
// declared property getter: - (id)fallbackParameters;	// 0x36b7d055
// declared property getter: - (id)fullUnlockActionLabel;	// 0x36b7c60d
// declared property getter: - (int)iPodOutAlertType;	// 0x36b7c8c1
// declared property getter: - (BOOL)inertWhenLocked;	// 0x36b7c771
// declared property getter: - (id)missedBannerDescriptionFormat;	// 0x36b7c5d9
// declared property getter: - (BOOL)preservesUnlockActionCase;	// 0x36b7c7b5
// declared property getter: - (unsigned)realertCount;	// 0x36b7c731
// declared property setter: - (void)setAlertSuppressionAppIDs:(id)ids;	// 0x36b7d0b5
// declared property setter: - (void)setBannerShowsSubtitle:(BOOL)subtitle;	// 0x36b7ca2d
// declared property setter: - (void)setBoxedBannerShowsSubtitle:(id)subtitle;	// 0x36b7d175
// declared property setter: - (void)setBoxedCoalescesWhenLocked:(id)locked;	// 0x36b7d0d5
// declared property setter: - (void)setBoxedIPodOutAlertType:(id)type;	// 0x36b7d1d5
// declared property setter: - (void)setBoxedInertWhenLocked:(id)locked;	// 0x36b7d135
// declared property setter: - (void)setBoxedPreservesUnlockActionCase:(id)aCase;	// 0x36b7d155
// declared property setter: - (void)setBoxedRealertCount:(id)count;	// 0x36b7d115
// declared property setter: - (void)setBoxedSubtypePriority:(id)priority;	// 0x36b7d1b5
// declared property setter: - (void)setBoxedSuppressesMessageForPrivacy:(id)privacy;	// 0x36b7d0f5
// declared property setter: - (void)setBoxedVisuallyIndicatesWhenDateIsInFuture:(id)future;	// 0x36b7d195
// declared property setter: - (void)setCoalescesWhenLocked:(BOOL)locked;	// 0x36b7c901
// declared property setter: - (void)setFallbackParameters:(id)parameters;	// 0x36b7d065
// declared property setter: - (void)setFullUnlockActionLabel:(id)label;	// 0x36b7d095
// declared property setter: - (void)setIPodOutAlertType:(int)type;	// 0x36b7cae1
// declared property setter: - (void)setInertWhenLocked:(BOOL)locked;	// 0x36b7c9b5
// declared property setter: - (void)setMissedBannerDescriptionFormat:(id)format;	// 0x36b7d085
// declared property setter: - (void)setPreservesUnlockActionCase:(BOOL)aCase;	// 0x36b7c9f1
// declared property setter: - (void)setRealertCount:(unsigned)count;	// 0x36b7c979
// declared property setter: - (void)setSubtypePriority:(unsigned)priority;	// 0x36b7caa5
// declared property setter: - (void)setSuppressesMessageForPrivacy:(BOOL)privacy;	// 0x36b7c93d
// declared property setter: - (void)setTopic:(id)topic;	// 0x36b7d075
// declared property setter: - (void)setUnlockActionLabel:(id)label;	// 0x36b7d0a5
// declared property setter: - (void)setVisuallyIndicatesWhenDateIsInFuture:(BOOL)future;	// 0x36b7ca69
// declared property getter: - (unsigned)subtypePriority;	// 0x36b7c881
// declared property getter: - (BOOL)suppressesMessageForPrivacy;	// 0x36b7c6ed
// declared property getter: - (id)topic;	// 0x36b7c5a5
// declared property getter: - (id)unlockActionLabel;	// 0x36b7c641
// declared property getter: - (BOOL)visuallyIndicatesWhenDateIsInFuture;	// 0x36b7c83d
@end

