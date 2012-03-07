/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CAFilter : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	unsigned _type;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	unsigned _flags;	// 12 = 0xc
	void *_attr;	// 16 = 0x10
	void *_cache;	// 20 = 0x14
}
@property(assign) BOOL cachesInputImage;	// G=0x31b29df1; S=0x31b2a139; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x31b29ddd; S=0x31b2a125; 
@property(copy) NSString *name;	// G=0x31a73799; S=0x31b29fe9; 
@property(readonly, assign) NSString *type;	// G=0x31b29e09; 
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31b29e05
+ (id)filterTypes;	// 0x31b29eed
+ (id)filterWithName:(id)name;	// 0x31b29fd9
+ (id)filterWithType:(id)type;	// 0x31b29f9d
- (id)initWithCoder:(id)coder;	// 0x31b2a285
- (id)initWithName:(id)name;	// 0x31b29e95
- (id)initWithType:(id)type;	// 0x31b29e1d
- (Object *)CA_copyRenderValue;	// 0x31a7a9dd
// declared property getter: - (BOOL)cachesInputImage;	// 0x31b29df1
- (id)copyWithZone:(NSZone *)zone;	// 0x31a749a5
- (void)dealloc;	// 0x31b2a1f5
- (BOOL)enabled;	// 0x31b29ea5
- (void)encodeWithCoder:(id)coder;	// 0x31b2a3cd
// declared property getter: - (BOOL)isEnabled;	// 0x31b29ddd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31a74995
// declared property getter: - (id)name;	// 0x31a73799
// declared property setter: - (void)setCachesInputImage:(BOOL)image;	// 0x31b2a139
- (void)setDefaults;	// 0x31b2a1a1
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x31b2a125
// declared property setter: - (void)setName:(id)name;	// 0x31b29fe9
- (void)setValue:(id)value forKey:(id)key;	// 0x31a74a65
// declared property getter: - (id)type;	// 0x31b29e09
- (id)valueForKey:(id)key;	// 0x31a737a9
@end
