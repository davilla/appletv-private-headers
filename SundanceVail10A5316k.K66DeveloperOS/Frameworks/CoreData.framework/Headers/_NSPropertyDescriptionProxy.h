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
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x32dfa979
- (id)initWithCoder:(id)coder;	// 0x32dfa66d
- (id)initWithPropertyDescription:(id)propertyDescription;	// 0x32dfa65d
- (void)_createCachesAndOptimizeState;	// 0x32dfa859
- (unsigned)_entitysReferenceID;	// 0x32dfa839
- (void)_setEntity:(id)entity;	// 0x32dfa85d
- (void)_setEntitysReferenceID:(unsigned)anId;	// 0x32dfa829
- (id)_underlyingProperty;	// 0x32dfa819
- (void)_versionHash:(char *)hash inStyle:(unsigned)style;	// 0x32dfa891
- (Class)class;	// 0x32dfa905
- (id)description;	// 0x32dfa79d
- (void)encodeWithCoder:(id)coder;	// 0x32dfa719
- (id)entity;	// 0x32dfa849
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x32dfa949
- (BOOL)isEqual:(id)equal;	// 0x32dfa925
- (BOOL)isKindOfClass:(Class)aClass;	// 0x32dfa86d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x32dfa959
@end

