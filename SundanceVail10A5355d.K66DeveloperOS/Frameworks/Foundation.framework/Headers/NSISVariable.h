/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@protocol NSISVariableDelegate;

@interface NSISVariable : NSObject {
	int _refCount;	// 4 = 0x4
	id<NSISVariableDelegate> _delegate;	// 8 = 0x8
}
@property(assign) id<NSISVariableDelegate> delegate;	// G=0x347844f9; S=0x3478450d; @synthesize=_delegate
@property(readonly, assign) BOOL shouldBeMinimized;	// G=0x347842d5; 
@property(readonly, assign) int valueRestriction;	// G=0x34784271; 
+ (id)variableMarkingConstraint:(id)constraint valueRestriction:(int)restriction shouldBeMinimized:(BOOL)minimized;	// 0x34783f95
+ (id)variableWithDelegate:(id)delegate valueRestriction:(int)restriction shouldBeMinimized:(BOOL)minimized;	// 0x34783e61
+ (id)variableWithName:(id)name valueRestriction:(int)restriction shouldBeMinimized:(BOOL)minimized;	// 0x347840c9
- (BOOL)_isDeallocating;	// 0x347844cd
- (BOOL)_tryRetain;	// 0x3478446d
- (float)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;	// 0x347841e9
// declared property getter: - (id)delegate;	// 0x347844f9
- (id)description;	// 0x34784165
- (id)markedConstraint;	// 0x34784339
- (BOOL)markedConstraintIsEligibleForIntegralizationAdjustment;	// 0x34784219
- (oneway void)release;	// 0x347843dd
- (id)retain;	// 0x3478439d
- (unsigned)retainCount;	// 0x34784459
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3478450d
- (BOOL)shouldBeIntegral;	// 0x347841bd
// declared property getter: - (BOOL)shouldBeMinimized;	// 0x347842d5
- (BOOL)valueIsUserVisible;	// 0x34784245
// declared property getter: - (int)valueRestriction;	// 0x34784271
@end
