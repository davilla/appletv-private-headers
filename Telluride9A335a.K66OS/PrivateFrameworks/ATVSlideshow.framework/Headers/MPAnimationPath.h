/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class MCAnimationPath;
@protocol MPAnimationSupport;

@interface MPAnimationPath : NSObject <NSCoding, NSCopying> {
	BOOL _isTriggered;	// 4 = 0x4
	NSObject<MPAnimationSupport> *_parentObject;	// 8 = 0x8
	MCAnimationPath *_animationPath;	// 12 = 0xc
}
@property(retain) MCAnimationPath *animationPath;	// G=0x31a48459; S=0x31a48e81; converted property
@property(assign) BOOL isTriggered;	// G=0x31a464a5; S=0x31a464b5; 
@property(retain) id parent;	// G=0x31a46551; S=0x31a48b35; converted property
+ (id)animationPath;	// 0x31a461ed
- (id)init;	// 0x31a46231
- (id)initWithCoder:(id)coder;	// 0x31a462b9
- (id)animatedKey;	// 0x31a48bed
- (id)animatedParent;	// 0x31a48b91
// converted property getter: - (id)animationPath;	// 0x31a48459
- (void)cleanup;	// 0x31a48ef1
- (id)copyWithZone:(NSZone *)zone;	// 0x31a4637d
- (void)dealloc;	// 0x31a46329
- (id)description;	// 0x31a463e5
- (void)encodeWithCoder:(id)coder;	// 0x31a4627d
// declared property getter: - (BOOL)isTriggered;	// 0x31a464a5
- (id)key;	// 0x31a46459
// converted property getter: - (id)parent;	// 0x31a46551
- (id)parentDocument;	// 0x31a48c69
// converted property setter: - (void)setAnimationPath:(id)path;	// 0x31a48e81
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x31a464b5
// converted property setter: - (void)setParent:(id)parent;	// 0x31a48b35
@end

