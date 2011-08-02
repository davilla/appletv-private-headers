/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "CAPropertyInfo.h"
#import "CAAction.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import "CAMediaTiming.h"

@class CAMediaTimingFunction, NSString;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction> {
@private
	void *_attr;	// 4 = 0x4
	unsigned _flags;	// 8 = 0x8
}
@property(assign) BOOL autoreverses;	// G=0x333b5bdd; S=0x333b7bad; 
@property(assign) double beginTime;	// G=0x333b5595; S=0x333b5699; 
@property(retain) id delegate;	// G=0x333b1af9; S=0x333b1585; 
@property(assign) double duration;	// G=0x333b1bb5; S=0x333b1361; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x333b5c7d; S=0x3340fd01; 
@property(copy) NSString *fillMode;	// G=0x333b5bed; S=0x333b1579; 
@property(assign) double frameInterval;	// G=0x333b5d21; S=0x3340fc11; 
@property(assign, getter=isRemovedOnCompletion) BOOL removedOnCompletion;	// G=0x333b1d71; S=0x333b6a15; 
@property(assign) float repeatCount;	// G=0x333b5bbd; S=0x333b69ed; 
@property(assign) double repeatDuration;	// G=0x333b5bcd; S=0x3340fc1d; 
@property(assign) float speed;	// G=0x333b5b95; S=0x3340fc65; 
@property(assign) double timeOffset;	// G=0x333b5b85; S=0x333b7f21; 
@property(retain) CAMediaTimingFunction *timingFunction;	// G=0x333b5c8d; S=0x333b1551; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x333b1d9d
+ (BOOL)CA_encodePropertyConditionally:(unsigned)conditionally type:(int)type;	// 0x333b1e2d
+ (/*function-pointer*/ void *)CA_getterForType:(int)type;	// 0x3340f259
+ (/*function-pointer*/ void *)CA_setterForType:(int)type;	// 0x3340f249
+ (id)animation;	// 0x3340f81d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3340fe0d
+ (id)defaultValueForKey:(id)key;	// 0x333b1e41
+ (id)properties;	// 0x3340fe2d
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x334104f1
- (id)initWithCoder:(id)coder;	// 0x3340f939
- (Object *)CA_copyRenderValue;	// 0x3340f7ed
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x3340f241
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x333b5a95
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x3340f245
// declared property getter: - (BOOL)autoreverses;	// 0x333b5bdd
// declared property getter: - (double)beginTime;	// 0x333b5595
- (id)copyWithZone:(NSZone *)zone;	// 0x333b1a71
- (void)dealloc;	// 0x333b6585
- (id)debugDescription;	// 0x3340fa3d
// declared property getter: - (id)delegate;	// 0x333b1af9
// declared property getter: - (double)duration;	// 0x333b1bb5
- (void)encodeWithCoder:(id)coder;	// 0x3340f945
// declared property getter: - (id)fillMode;	// 0x333b5bed
// declared property getter: - (double)frameInterval;	// 0x333b5d21
// declared property getter: - (BOOL)isEnabled;	// 0x333b5c7d
// declared property getter: - (BOOL)isRemovedOnCompletion;	// 0x333b1d71
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3340f7d9
- (BOOL)removedOnCompletion;	// 0x3340f805
// declared property getter: - (float)repeatCount;	// 0x333b5bbd
// declared property getter: - (double)repeatDuration;	// 0x333b5bcd
- (void)runActionForKey:(id)key object:(id)object arguments:(id)arguments;	// 0x333b159d
// declared property setter: - (void)setAutoreverses:(BOOL)autoreverses;	// 0x333b7bad
// declared property setter: - (void)setBeginTime:(double)time;	// 0x333b5699
- (void)setDefaultDuration:(double)duration;	// 0x333b1b79
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x333b1585
// declared property setter: - (void)setDuration:(double)duration;	// 0x333b1361
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x3340fd01
// declared property setter: - (void)setFillMode:(id)mode;	// 0x333b1579
// declared property setter: - (void)setFrameInterval:(double)interval;	// 0x3340fc11
// declared property setter: - (void)setRemovedOnCompletion:(BOOL)completion;	// 0x333b6a15
// declared property setter: - (void)setRepeatCount:(float)count;	// 0x333b69ed
// declared property setter: - (void)setRepeatDuration:(double)duration;	// 0x3340fc1d
// declared property setter: - (void)setSpeed:(float)speed;	// 0x3340fc65
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x333b7f21
// declared property setter: - (void)setTimingFunction:(id)function;	// 0x333b1551
- (void)setValue:(id)value forKey:(id)key;	// 0x3340f97d
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x3340fa2d
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x3340f9ad
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x3340f8f9
// declared property getter: - (float)speed;	// 0x333b5b95
// declared property getter: - (double)timeOffset;	// 0x333b5b85
// declared property getter: - (id)timingFunction;	// 0x333b5c8d
- (id)valueForKey:(id)key;	// 0x3340f951
- (id)valueForKeyPath:(id)keyPath;	// 0x3340fa21
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x3340f8ad
@end

