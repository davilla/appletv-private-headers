/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray, NSEntityDescription, NSData, NSMutableDictionary;

@interface NSPropertyDescription : NSObject <NSCoding, NSCopying> {
	NSString *_versionHashModifier;	// 4 = 0x4
	id _underlyingProperty;	// 8 = 0x8
	NSData *_versionHash;	// 12 = 0xc
	NSEntityDescription *_entity;	// 16 = 0x10
	NSString *_name;	// 20 = 0x14
	NSArray *_validationPredicates;	// 24 = 0x18
	NSArray *_validationWarnings;	// 28 = 0x1c
	propertyDescriptionFlags _propertyDescriptionFlags;	// 32 = 0x20
	void *_extraIvars;	// 36 = 0x24
	NSMutableDictionary *_userInfo;	// 40 = 0x28
	long _entitysReferenceIDForProperty;	// 44 = 0x2c
}
@property(retain) id elementID;	// G=0x36611571; S=0x36611561; converted property
@property(readonly, retain) NSEntityDescription *entity;	// G=0x3659f38d; converted property
@property(assign, getter=isIndexed) BOOL indexed;	// G=0x36610459; S=0x3656ff7d; converted property
@property(assign, getter=isIndexedBySpotlight) BOOL indexedBySpotlight;	// G=0x36573009; S=0x366115f9; converted property
@property(retain) NSString *name;	// G=0x3656fbd1; S=0x366104cd; converted property
@property(assign, getter=isOptional) BOOL optional;	// G=0x3657f651; S=0x3661046d; converted property
@property(assign, getter=isReadOnly) BOOL readOnly;	// G=0x3657f665; S=0x36610b99; converted property
@property(retain) id renamingIdentifier;	// G=0x36610959; S=0x3656fb35; converted property
@property(assign, getter=isSpotlightIndexed) BOOL spotlightIndexed;	// G=0x36611581; S=0x36611599; converted property
@property(assign, getter=isStoredInExternalRecord) BOOL storedInExternalRecord;	// G=0x36573025; S=0x3661161d; converted property
@property(assign, getter=isStoredInTruth) BOOL storedInTruth;	// G=0x366115d1; S=0x366115e9; converted property
@property(assign, getter=isStoredInTruthFile) BOOL storedInTruthFile;	// G=0x366115a9; S=0x366115c1; converted property
@property(assign, getter=isTransient) BOOL transient;	// G=0x36573071; S=0x3661049d; converted property
@property(retain) NSMutableDictionary *userInfo;	// G=0x366107d5; S=0x366106ed; converted property
@property(readonly, retain) NSArray *validationPredicates;	// G=0x3659f7f9; converted property
@property(readonly, retain) NSArray *validationWarnings;	// G=0x36572fe5; converted property
@property(readonly, retain) NSData *versionHash;	// G=0x366107f9; converted property
@property(retain) NSString *versionHashModifier;	// G=0x366108f5; S=0x36610905; converted property
+ (void)initialize;	// 0x3659ee8d
- (id)init;	// 0x3660fc31
- (id)initWithCoder:(id)coder;	// 0x3656f7d9
- (void)_appendPropertyFieldsToData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(id)slots;	// 0x3661131d
- (BOOL)_comparePredicatesAndWarnings:(id)warnings;	// 0x36610c99
- (void)_createCachesAndOptimizeState;	// 0x36572dc5
- (long)_entitysReferenceID;	// 0x3658fe39
- (NSExtraPropertyIVars *)_extraIVars;	// 0x3659fb2d
- (id)_initWithName:(id)name;	// 0x36610a8d
- (void)_initializeExtraIVars;	// 0x3659fb61
- (BOOL)_isEditable;	// 0x3659f35d
- (BOOL)_isOrdered;	// 0x3659fc01
- (BOOL)_isRelationship;	// 0x36610a85
- (BOOL)_isToManyRelationship;	// 0x36610a89
- (BOOL)_nonPredicateValidateValue:(id *)value forKey:(id)key inObject:(id)object error:(id *)error;	// 0x36610c0d
- (unsigned)_propertyType;	// 0x36610a81
- (id)_rawValidationPredicates;	// 0x36610bed
- (id)_rawValidationWarnings;	// 0x36610bfd
- (void)_replaceValidationPredicates:(id)predicates andWarnings:(id)warnings;	// 0x3659fb7d
- (void)_restoreValidation;	// 0x36610d21
- (void)_setEntity:(id)entity;	// 0x36610b6d
- (void)_setEntitysReferenceID:(long)anId;	// 0x36573085
- (void)_setOrdered:(BOOL)ordered;	// 0x36610bc9
- (BOOL)_skipValidation;	// 0x36610d39
- (void)_stripForMigration;	// 0x36610d09
- (void)_throwIfNotEditable;	// 0x3659f315
- (void)_versionHash:(char *)hash inStyle:(unsigned)style;	// 0x36610985
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(id)slots fetchRequests:(id)requests;	// 0x36610d4d
- (id)copyWithZone:(NSZone *)zone;	// 0x3660ff5d
- (void)dealloc;	// 0x3659a815
- (id)description;	// 0x36610325
// converted property getter: - (id)elementID;	// 0x36611571
- (void)encodeWithCoder:(id)coder;	// 0x3660fc45
// converted property getter: - (id)entity;	// 0x3659f38d
- (unsigned)hash;	// 0x366100fd
- (BOOL)isEqual:(id)equal;	// 0x36610125
// converted property getter: - (BOOL)isIndexed;	// 0x36610459
// converted property getter: - (BOOL)isIndexedBySpotlight;	// 0x36573009
// converted property getter: - (BOOL)isOptional;	// 0x3657f651
// converted property getter: - (BOOL)isReadOnly;	// 0x3657f665
// converted property getter: - (BOOL)isSpotlightIndexed;	// 0x36611581
// converted property getter: - (BOOL)isStoredInExternalRecord;	// 0x36573025
// converted property getter: - (BOOL)isStoredInTruth;	// 0x366115d1
// converted property getter: - (BOOL)isStoredInTruthFile;	// 0x366115a9
// converted property getter: - (BOOL)isTransient;	// 0x36573071
// converted property getter: - (id)name;	// 0x3656fbd1
// converted property getter: - (id)renamingIdentifier;	// 0x36610959
// converted property setter: - (void)setElementID:(id)anId;	// 0x36611561
// converted property setter: - (void)setIndexed:(BOOL)indexed;	// 0x3656ff7d
// converted property setter: - (void)setIndexedBySpotlight:(BOOL)spotlight;	// 0x366115f9
// converted property setter: - (void)setName:(id)name;	// 0x366104cd
// converted property setter: - (void)setOptional:(BOOL)optional;	// 0x3661046d
// converted property setter: - (void)setReadOnly:(BOOL)only;	// 0x36610b99
// converted property setter: - (void)setRenamingIdentifier:(id)identifier;	// 0x3656fb35
// converted property setter: - (void)setSpotlightIndexed:(BOOL)indexed;	// 0x36611599
// converted property setter: - (void)setStoredInExternalRecord:(BOOL)externalRecord;	// 0x3661161d
// converted property setter: - (void)setStoredInTruth:(BOOL)truth;	// 0x366115e9
// converted property setter: - (void)setStoredInTruthFile:(BOOL)truthFile;	// 0x366115c1
// converted property setter: - (void)setTransient:(BOOL)transient;	// 0x3661049d
// converted property setter: - (void)setUserInfo:(id)info;	// 0x366106ed
- (void)setValidationPredicates:(id)predicates withValidationWarnings:(id)validationWarnings;	// 0x366105ed
// converted property setter: - (void)setVersionHashModifier:(id)modifier;	// 0x36610905
// converted property getter: - (id)userInfo;	// 0x366107d5
// converted property getter: - (id)validationPredicates;	// 0x3659f7f9
// converted property getter: - (id)validationWarnings;	// 0x36572fe5
// converted property getter: - (id)versionHash;	// 0x366107f9
// converted property getter: - (id)versionHashModifier;	// 0x366108f5
@end

