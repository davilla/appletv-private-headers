/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "NSMutableCopying.h"

@class CAValueFunction, CALayer, NSString;

@interface CAForceField : NSObject <NSCopying, NSMutableCopying, NSCoding> {
	NSString *_name;	// 4 = 0x4
	CALayer *_layer;	// 8 = 0x8
	CAValueFunction *_function;	// 12 = 0xc
	BOOL _enabled;	// 16 = 0x10
	void *_priv;	// 20 = 0x14
}
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x365d4ea5; S=0x365d4eb5; 
@property(retain) CAValueFunction *function;	// G=0x365d4f21; S=0x365d4f31; 
@property(retain) CALayer *layer;	// G=0x365d4ecd; S=0x365d4edd; 
@property(copy) NSString *name;	// G=0x365d4e51; S=0x365d4e61; 
+ (id)defaultValueForKey:(id)key;	// 0x365d4e0d
+ (id)forceField;	// 0x365d4dd5
- (id)init;	// 0x365d4e11
- (id)initWithCoder:(id)coder;	// 0x365d52b1
- (Object *)CA_copyRenderValue;	// 0x365d4fed
- (id)copyWithZone:(NSZone *)zone;	// 0x365d5129
- (void)dealloc;	// 0x365d4f75
- (void)encodeWithCoder:(id)coder;	// 0x365d51e5
// declared property getter: - (id)function;	// 0x365d4f21
// declared property getter: - (BOOL)isEnabled;	// 0x365d4ea5
// declared property getter: - (id)layer;	// 0x365d4ecd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x365d51d5
// declared property getter: - (id)name;	// 0x365d4e51
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x365d4eb5
// declared property setter: - (void)setFunction:(id)function;	// 0x365d4f31
// declared property setter: - (void)setLayer:(id)layer;	// 0x365d4edd
// declared property setter: - (void)setName:(id)name;	// 0x365d4e61
- (void)setValue:(id)value forKey:(id)key;	// 0x365d50dd
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x365d511d
- (id)valueForKey:(id)key;	// 0x365d50a9
- (id)valueForKeyPath:(id)keyPath;	// 0x365d5115
@end
