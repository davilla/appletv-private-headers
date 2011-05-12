/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSPropertyDescription, NSEntityDescription;

__attribute__((visibility("hidden")))
@interface _NSPropertyDescriptionProxy : NSObject {
@private
	id _sourceBuffer;	// 4 = 0x4
	NSPropertyDescription *_underlyingProperty;	// 8 = 0x8
	NSEntityDescription *_entityDescription;	// 12 = 0xc
	unsigned _entitysReferenceIDForProperty;	// 16 = 0x10
}
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x34373dbd
- (id)initWithPropertyDescription:(id)propertyDescription;	// 0x34373b99
- (void)_createCachesAndOptimizeState;	// 0x34373be9
- (unsigned)_entitysReferenceID;	// 0x34373bc9
- (void)_setEntity:(id)entity;	// 0x34373bed
- (void)_setEntitysReferenceID:(unsigned)anId;	// 0x34373bb9
- (id)_underlyingProperty;	// 0x34373ba9
- (Class)class;	// 0x34373cfd
- (id)description;	// 0x34373d41
- (id)entity;	// 0x34373bd9
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x34373bfd
- (BOOL)isEqual:(id)equal;	// 0x34373cd9
- (BOOL)isKindOfClass:(Class)aClass;	// 0x34373d1d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x34373cb9
@end

