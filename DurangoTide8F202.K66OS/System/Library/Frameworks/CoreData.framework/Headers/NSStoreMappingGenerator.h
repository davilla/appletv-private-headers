/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSStoreMappingGenerator : NSObject {
}
+ (id)defaultMappingGenerator;	// 0x33196429
+ (void)invalidate;	// 0x33196405
- (id)externalNameForEntityName:(id)entityName;	// 0x331963ed
- (id)externalNameForPropertyName:(id)propertyName;	// 0x331963d5
- (id)internalNameForEntityName:(id)entityName version:(int)version;	// 0x331963b1
- (id)internalNameForPropertyName:(id)propertyName version:(int)version;	// 0x3319638d
- (id)joinsForRelationship:(id)relationship;	// 0x3319624d
- (id)mappingForAttribute:(id)attribute forConfigurationWithName:(id)name;	// 0x33196325
- (id)mappingForEntity:(id)entity forConfigurationWithName:(id)name;	// 0x3319666d
- (id)mappingForRelationship:(id)relationship forConfigurationWithName:(id)name;	// 0x331960fd
- (id)mappingsDictForConfigurationWithName:(id)name inModel:(id)model;	// 0x33196471
- (id)mappingsForConfigurationWithName:(id)name inModel:(id)model;	// 0x33196579
- (id)primaryKeyForEntity:(id)entity;	// 0x331962e1
@end
