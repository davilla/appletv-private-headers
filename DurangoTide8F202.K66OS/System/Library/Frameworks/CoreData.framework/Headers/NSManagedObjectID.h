/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "CoreData-Structs.h"


@interface NSManagedObjectID : NSObject <NSCopying> {
}
+ (BOOL)accessInstanceVariablesDirectly;	// 0x3314fc39
+ (void)initialize;	// 0x330e86a5
+ (int)version;	// 0x3314fc31
- (id)URIRepresentation;	// 0x3314fd61
- (BOOL)_isPersistentStoreAlive;	// 0x3314fc41
- (id)_referenceData;	// 0x3314fd31
- (long long)_referenceData64;	// 0x3314fd01
- (id)_retainedURIString;	// 0x3314fcd1
- (id)_storeIdentifier;	// 0x3314fc45
- (id)_storeInfo1;	// 0x3314fc3d
- (id)copyWithZone:(NSZone *)zone;	// 0x3314fc69
- (id)description;	// 0x3314fc7d
- (id)entity;	// 0x3314fdf1
- (BOOL)isTemporaryID;	// 0x3314fd91
- (id)persistentStore;	// 0x3314fdc1
@end
