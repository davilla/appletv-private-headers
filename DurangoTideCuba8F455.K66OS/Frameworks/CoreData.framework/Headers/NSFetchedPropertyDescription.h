/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPropertyDescription.h"
#import "CoreData-Structs.h"

@class NSString, NSFetchRequest;

@interface NSFetchedPropertyDescription : NSPropertyDescription {
@private
	void *_reserved5;	// 48 = 0x30
	void *_reserved6;	// 52 = 0x34
	NSFetchRequest *_fetchRequest;	// 56 = 0x38
	NSString *_lazyFetchRequestEntityName;	// 60 = 0x3c
}
@property(retain) NSFetchRequest *fetchRequest;	// G=0x33e89b39; S=0x33e899d5; converted property
- (id)initWithCoder:(id)coder;	// 0x33e89d6d
- (void)_createCachesAndOptimizeState;	// 0x33e89be9
- (unsigned)_propertyType;	// 0x33e899d1
- (id)copyWithZone:(NSZone *)zone;	// 0x33e89cad
- (void)dealloc;	// 0x33e89ecd
- (id)description;	// 0x33e89c39
- (void)encodeWithCoder:(id)coder;	// 0x33e89e21
// converted property getter: - (id)fetchRequest;	// 0x33e89b39
- (BOOL)isEqual:(id)equal;	// 0x33e89f41
- (BOOL)isReadOnly;	// 0x33e899cd
- (BOOL)isTransient;	// 0x33e899c9
// converted property setter: - (void)setFetchRequest:(id)request;	// 0x33e899d5
@end

