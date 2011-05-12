/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSArray, NSString, NSExpression;

@interface NSPropertyMapping : NSObject {
@private
	void *_reserved;	// 4 = 0x4
	void *_reserved1;	// 8 = 0x8
	NSArray *_propertyTransforms;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	NSExpression *_valueExpression;	// 20 = 0x14
	NSDictionary *_userInfo;	// 24 = 0x18
	propertyMappingFlags _propertyMappingFlags;	// 28 = 0x1c
}
@property(retain) NSString *name;	// G=0x3432fd4d; S=0x3432fea1; converted property
@property(retain) NSDictionary *userInfo;	// G=0x3432fd6d; S=0x3432fe09; converted property
@property(retain) NSExpression *valueExpression;	// G=0x3432fd5d; S=0x3432fe55; converted property
+ (void)initialize;	// 0x343300d9
- (id)init;	// 0x343300c1
- (id)initWithCoder:(id)coder;	// 0x34330189
- (id)initWithName:(id)name valueExpression:(id)expression;	// 0x3432fdf5
- (void)_createCachesAndOptimizeState;	// 0x3432fd95
- (id)_initWithDestinationName:(id)destinationName valueExpression:(id)expression;	// 0x343300f9
- (id)_propertyTransforms;	// 0x3432fd99
- (void)_setIsEditable:(BOOL)editable;	// 0x34330479
- (void)_setPropertyTransforms:(id)transforms;	// 0x3432fda9
- (void)_throwIfNotEditable;	// 0x34330429
- (id)copyWithZone:(NSZone *)zone;	// 0x3432ff7d
- (void)dealloc;	// 0x34330285
- (id)description;	// 0x3432feed
- (void)encodeWithCoder:(id)coder;	// 0x34330025
- (BOOL)isEditable;	// 0x3432fd7d
- (BOOL)isEqual:(id)equal;	// 0x34330329
// converted property getter: - (id)name;	// 0x3432fd4d
// converted property setter: - (void)setName:(id)name;	// 0x3432fea1
// converted property setter: - (void)setUserInfo:(id)info;	// 0x3432fe09
// converted property setter: - (void)setValueExpression:(id)expression;	// 0x3432fe55
// converted property getter: - (id)userInfo;	// 0x3432fd6d
// converted property getter: - (id)valueExpression;	// 0x3432fd5d
@end

