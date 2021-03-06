/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDIterate, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface PDCommonTimeNodeData : NSObject {
@private
	NSMutableArray *mStartTimeConditions;	// 4 = 0x4
	NSMutableArray *mEndTimeConditions;	// 8 = 0x8
	NSMutableArray *mChildTimeNodeList;	// 12 = 0xc
	NSMutableArray *mSubTimeNodeList;	// 16 = 0x10
	PDIterate *mIterate;	// 20 = 0x14
	int mType;	// 24 = 0x18
	int mAnimationPresetClass;	// 28 = 0x1c
	int mPresetId;	// 32 = 0x20
	int mPresetSubType;	// 36 = 0x24
	int mRepeatCount;	// 40 = 0x28
	int mRepeatDuration;	// 44 = 0x2c
	int mRestartType;	// 48 = 0x30
	BOOL mHasDuration;	// 52 = 0x34
	double mDuration;	// 56 = 0x38
	double mSpeed;	// 64 = 0x40
	double mAcceleration;	// 72 = 0x48
	double mDeceleration;	// 80 = 0x50
	NSString *mGroupId;	// 88 = 0x58
}
@property(assign) double acceleration;	// G=0x3458b425; S=0x3458b43d; converted property
@property(assign) int animationPresetClass;	// G=0x3458b2e9; S=0x3458b2f9; converted property
@property(retain) id childTimeNodeList;	// G=0x3458b299; S=0x3458c62d; converted property
@property(assign) double deceleration;	// G=0x3458b451; S=0x3458b469; converted property
@property(assign) double duration;	// G=0x3458b3b9; S=0x3458b3d1; converted property
@property(retain) id endTimeConditions;	// G=0x3458b289; S=0x3458c66d; converted property
@property(retain) id groupId;	// G=0x3458b47d; S=0x3458c50d; converted property
@property(retain) id iterate;	// G=0x3458b2b9; S=0x3458c5ad; converted property
@property(assign) int presetId;	// G=0x3458b329; S=0x3458b339; converted property
@property(assign) int presetSubType;	// G=0x3458b309; S=0x3458b319; converted property
@property(assign) int repeatCount;	// G=0x3458b349; S=0x3458b359; converted property
@property(assign) int repeatDuration;	// G=0x3458b369; S=0x3458b379; converted property
@property(assign) int restartType;	// G=0x3458b389; S=0x3458b399; converted property
@property(assign) double speed;	// G=0x3458b3f9; S=0x3458b411; converted property
@property(retain) id startTimeConditions;	// G=0x3458b279; S=0x3458c6ad; converted property
@property(retain) id subTimeNodeList;	// G=0x3458b2a9; S=0x3458c5ed; converted property
@property(assign) int type;	// G=0x3458b2c9; S=0x3458b2d9; converted property
- (id)init;	// 0x3458c495
// converted property getter: - (double)acceleration;	// 0x3458b425
// converted property getter: - (int)animationPresetClass;	// 0x3458b2e9
// converted property getter: - (id)childTimeNodeList;	// 0x3458b299
- (void)dealloc;	// 0x3458c6ed
// converted property getter: - (double)deceleration;	// 0x3458b451
// converted property getter: - (double)duration;	// 0x3458b3b9
// converted property getter: - (id)endTimeConditions;	// 0x3458b289
// converted property getter: - (id)groupId;	// 0x3458b47d
- (BOOL)hasDuration;	// 0x3458b3a9
- (BOOL)hasPresetClass;	// 0x3458c56d
- (BOOL)hasRestartType;	// 0x3458c54d
- (BOOL)hasType;	// 0x3458c58d
// converted property getter: - (id)iterate;	// 0x3458b2b9
// converted property getter: - (int)presetId;	// 0x3458b329
// converted property getter: - (int)presetSubType;	// 0x3458b309
// converted property getter: - (int)repeatCount;	// 0x3458b349
// converted property getter: - (int)repeatDuration;	// 0x3458b369
// converted property getter: - (int)restartType;	// 0x3458b389
// converted property setter: - (void)setAcceleration:(double)acceleration;	// 0x3458b43d
// converted property setter: - (void)setAnimationPresetClass:(int)aClass;	// 0x3458b2f9
// converted property setter: - (void)setChildTimeNodeList:(id)list;	// 0x3458c62d
// converted property setter: - (void)setDeceleration:(double)deceleration;	// 0x3458b469
// converted property setter: - (void)setDuration:(double)duration;	// 0x3458b3d1
// converted property setter: - (void)setEndTimeConditions:(id)conditions;	// 0x3458c66d
// converted property setter: - (void)setGroupId:(id)anId;	// 0x3458c50d
- (void)setGroupIdValue:(int)value;	// 0x3458c4c1
// converted property setter: - (void)setIterate:(id)iterate;	// 0x3458c5ad
// converted property setter: - (void)setPresetId:(int)anId;	// 0x3458b339
// converted property setter: - (void)setPresetSubType:(int)type;	// 0x3458b319
// converted property setter: - (void)setRepeatCount:(int)count;	// 0x3458b359
// converted property setter: - (void)setRepeatDuration:(int)duration;	// 0x3458b379
// converted property setter: - (void)setRestartType:(int)type;	// 0x3458b399
// converted property setter: - (void)setSpeed:(double)speed;	// 0x3458b411
// converted property setter: - (void)setStartTimeConditions:(id)conditions;	// 0x3458c6ad
// converted property setter: - (void)setSubTimeNodeList:(id)list;	// 0x3458c5ed
// converted property setter: - (void)setType:(int)type;	// 0x3458b2d9
// converted property getter: - (double)speed;	// 0x3458b3f9
// converted property getter: - (id)startTimeConditions;	// 0x3458b279
// converted property getter: - (id)subTimeNodeList;	// 0x3458b2a9
// converted property getter: - (int)type;	// 0x3458b2c9
@end

