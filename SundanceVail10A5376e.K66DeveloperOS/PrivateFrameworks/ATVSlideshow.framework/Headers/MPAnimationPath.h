/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "ATVSlideshow-Structs.h"

@class MCAnimationPath;
@protocol MPAnimationSupport;

@interface MPAnimationPath : NSObject <NSCoding, NSCopying> {
	BOOL _isTriggered;	// 4 = 0x4
	NSObject<MPAnimationSupport> *_parentObject;	// 8 = 0x8
	MCAnimationPath *_animationPath;	// 12 = 0xc
}
@property(retain) MCAnimationPath *animationPath;	// G=0x36197999; S=0x361982ed; converted property
@property(assign) BOOL isTriggered;	// G=0x36195c11; S=0x36195c21; 
@property(retain) id parent;	// G=0x36195c55; S=0x36197fe9; converted property
+ (id)animationPath;	// 0x36195961
- (id)init;	// 0x361959a5
- (id)initWithCoder:(id)coder;	// 0x36195a29
- (id)animatedKey;	// 0x361980a9
- (id)animatedParent;	// 0x36198049
// converted property getter: - (id)animationPath;	// 0x36197999
- (void)cleanup;	// 0x36198359
- (id)copyWithZone:(NSZone *)zone;	// 0x36195aed
- (void)dealloc;	// 0x36195a99
- (id)description;	// 0x36195b55
- (void)encodeWithCoder:(id)coder;	// 0x361959f1
// declared property getter: - (BOOL)isTriggered;	// 0x36195c11
- (id)key;	// 0x36195bc5
// converted property getter: - (id)parent;	// 0x36195c55
- (id)parentDocument;	// 0x36198129
// converted property setter: - (void)setAnimationPath:(id)path;	// 0x361982ed
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x36195c21
// converted property setter: - (void)setParent:(id)parent;	// 0x36197fe9
@end
