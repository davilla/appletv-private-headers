/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"

@class NSString, CALayer, CAValueFunction;

@interface CASpring : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	NSString *_name;	// 4 = 0x4
	CALayer *_layerA;	// 8 = 0x8
	CALayer *_layerB;	// 12 = 0xc
	CGPoint _attachmentPointA;	// 16 = 0x10
	CGPoint _attachmentPointB;	// 24 = 0x18
	CAValueFunction *_function;	// 32 = 0x20
	float _stiffness;	// 36 = 0x24
	float _damping;	// 40 = 0x28
	float _restLength;	// 44 = 0x2c
	BOOL _enabled;	// 48 = 0x30
	id _delegate;	// 52 = 0x34
	void *_priv;	// 56 = 0x38
}
@property(assign) CGPoint attachmentPointA;	// G=0x3355ba3d; S=0x3355ba55; 
@property(assign) CGPoint attachmentPointB;	// G=0x3355ba6d; S=0x3355ba85; 
@property(assign) float damping;	// G=0x3355babd; S=0x3355bacd; 
@property(assign) id delegate;	// G=0x3355bb0d; S=0x3355bb1d; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x3355b9f5; S=0x3355ba05; 
@property(retain) CAValueFunction *function;	// G=0x3355bafd; S=0x3355be85; 
@property(retain) CALayer *layerA;	// G=0x3355ba1d; S=0x3355befd; 
@property(retain) CALayer *layerB;	// G=0x3355ba2d; S=0x3355bec1; 
@property(copy) NSString *name;	// G=0x3355b9e5; S=0x3355bf39; 
@property(assign) float restLength;	// G=0x3355badd; S=0x3355baed; 
@property(assign) float stiffness;	// G=0x3355ba9d; S=0x3355baad; 
+ (id)defaultValueForKey:(id)key;	// 0x3355b9e1
+ (id)spring;	// 0x3355bf75
- (id)init;	// 0x3355c025
- (id)initWithCoder:(id)coder;	// 0x3355c159
- (Object *)CA_copyRenderValue;	// 0x3355c389
// declared property getter: - (CGPoint)attachmentPointA;	// 0x3355ba3d
// declared property getter: - (CGPoint)attachmentPointB;	// 0x3355ba6d
- (id)copyWithZone:(NSZone *)zone;	// 0x3355bd51
// declared property getter: - (float)damping;	// 0x3355babd
- (void)dealloc;	// 0x3355bfa5
// declared property getter: - (id)delegate;	// 0x3355bb0d
- (void)encodeWithCoder:(id)coder;	// 0x3355bb2d
// declared property getter: - (id)function;	// 0x3355bafd
// declared property getter: - (BOOL)isEnabled;	// 0x3355b9f5
// declared property getter: - (id)layerA;	// 0x3355ba1d
// declared property getter: - (id)layerB;	// 0x3355ba2d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3355bd3d
// declared property getter: - (id)name;	// 0x3355b9e5
// declared property getter: - (float)restLength;	// 0x3355badd
// declared property setter: - (void)setAttachmentPointA:(CGPoint)a;	// 0x3355ba55
// declared property setter: - (void)setAttachmentPointB:(CGPoint)b;	// 0x3355ba85
// declared property setter: - (void)setDamping:(float)damping;	// 0x3355bacd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3355bb1d
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x3355ba05
// declared property setter: - (void)setFunction:(id)function;	// 0x3355be85
// declared property setter: - (void)setLayerA:(id)a;	// 0x3355befd
// declared property setter: - (void)setLayerB:(id)b;	// 0x3355bec1
// declared property setter: - (void)setName:(id)name;	// 0x3355bf39
// declared property setter: - (void)setRestLength:(float)length;	// 0x3355baed
// declared property setter: - (void)setStiffness:(float)stiffness;	// 0x3355baad
- (void)setValue:(id)value forKey:(id)key;	// 0x3355c10d
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x3355c149
// declared property getter: - (float)stiffness;	// 0x3355ba9d
- (id)valueForKey:(id)key;	// 0x3355c0e1
- (id)valueForKeyPath:(id)keyPath;	// 0x3355c13d
@end

