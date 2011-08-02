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
	NSMutableArray *mActions;	// 24 = 0x18
}
@property(readonly, assign) NSArray *actions;	// G=0x33da6f5d; 
@property(readonly, assign) unsigned countOfActions;	// G=0x33da7049; 
- (id)init;	// 0x33da6aa5
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x33da6b11
- (void)_insertAction:(id)action atIndex:(unsigned)index;	// 0x33da7241
- (id)actionAtIndex:(unsigned)index;	// 0x33da7129
// declared property getter: - (id)actions;	// 0x33da6f5d
- (id)addActionGroup;	// 0x33da7b75
- (id)addAnimationTriggerForTargetPlugObjectID:(id)targetPlugObjectID withAnimationKey:(id)animationKey;	// 0x33da79ad
- (id)addConditionalActionWithPredicate:(id)predicate;	// 0x33da7c0d
- (id)addGenericActionForTargetPlugObjectID:(id)targetPlugObjectID withAttributes:(id)attributes;	// 0x33da7a91
- (id)addTransitionForTargetPlugObjectID:(id)targetPlugObjectID withTransitionID:(id)transitionID;	// 0x33da78c9
// declared property getter: - (unsigned)countOfActions;	// 0x33da7049
- (void)demolish;	// 0x33da6c3d
- (id)imprint;	// 0x33da6e31
- (id)insertActionGroupAtIndex:(unsigned)index;	// 0x33da7b9d
- (id)insertAnimationTriggerForTargetPlugObjectID:(id)targetPlugObjectID withAnimationKey:(id)animationKey atIndex:(unsigned)index;	// 0x33da79f1
- (id)insertConditionalActionWithPredicate:(id)predicate atIndex:(unsigned)index;	// 0x33da7c39
- (id)insertGenericActionForTargetPlugObjectID:(id)targetPlugObjectID withAttributes:(id)attributes atIndex:(unsigned)index;	// 0x33da7ad5
- (id)insertTransitionForTargetPlugObjectID:(id)targetPlugObjectID withTransitionID:(id)transitionID atIndex:(unsigned)index;	// 0x33da790d
- (void)moveActionsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x33da7749
- (void)removeActionsAtIndices:(id)indices;	// 0x33da7395
- (void)removeAllActions;	// 0x33da757d
@end

