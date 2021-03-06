/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSMutableArray, NSArray;

@interface MCActionGroup : MCAction {
@private
	NSMutableArray *_actions;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSArray *actions;	// G=0x321745b5; @synthesize=_actions
@property(readonly, assign, nonatomic) unsigned countOfActions;	// G=0x321746a5; 
+ (id)actionGroup;	// 0x3217412d
- (id)init;	// 0x32174171
- (id)initWithImprint:(id)imprint;	// 0x321741d5
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x32174d59
- (id)actionAtIndex:(unsigned)index;	// 0x321747a1
// declared property getter: - (id)actions;	// 0x321745b5
- (void)addAction:(id)action;	// 0x321748d1
- (void)addActions:(id)actions;	// 0x32174921
// declared property getter: - (unsigned)countOfActions;	// 0x321746a5
- (void)demolish;	// 0x321742e9
- (id)imprint;	// 0x32174481
- (void)insertAction:(id)action atIndex:(unsigned)index;	// 0x32174955
- (void)insertActions:(id)actions atIndex:(unsigned)index;	// 0x32174995
- (void)moveActionsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x32174c11
- (void)removeActionsAtIndices:(id)indices;	// 0x32174a9d
- (void)removeAllActions;	// 0x32174b59
@end

