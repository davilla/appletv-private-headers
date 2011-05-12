/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPActionSupport.h"
#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSString;

@interface MPConditionalAction : MPAction <MPActionSupport> {
	NSString *_predicate;	// 16 = 0x10
	MPAction *_actionIfTrue;	// 20 = 0x14
	MPAction *_actionIfFalse;	// 24 = 0x18
}
@property(readonly, assign) MPAction *actionIfFalse;	// G=0x331da4a9; @synthesize=_actionIfFalse
@property(readonly, assign) MPAction *actionIfTrue;	// G=0x331da499; @synthesize=_actionIfTrue
@property(copy, nonatomic) NSString *predicate;	// G=0x331da489; S=0x331d9dad; @synthesize=_predicate
+ (id)conditionalAction;	// 0x331d9a41
- (id)init;	// 0x331d9a7d
- (id)initWithCoder:(id)coder;	// 0x331d9ad5
// declared property getter: - (id)actionIfFalse;	// 0x331da4a9
// declared property getter: - (id)actionIfTrue;	// 0x331da499
- (void)configureFalseAction;	// 0x331da221
- (void)configureTrueAction;	// 0x331d9fc9
- (id)copyWithZone:(NSZone *)zone;	// 0x331d9ce1
- (void)dealloc;	// 0x331d9bc9
- (void)encodeWithCoder:(id)coder;	// 0x331d9c39
// declared property getter: - (id)predicate;	// 0x331da489
- (void)setAction:(id)action;	// 0x331d9f4d
- (void)setAction:(id)action forCondition:(BOOL)condition;	// 0x331d9e2d
// declared property setter: - (void)setPredicate:(id)predicate;	// 0x331d9dad
@end

