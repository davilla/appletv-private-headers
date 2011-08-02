/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSManagedObjectContext, NSManagedObjectID;

@interface NSManagedObject : NSObject {
@private
	int _cd_rc;	// 4 = 0x4
	unsigned _cd_stateFlags;	// 8 = 0x8
	id _cd_rawData;	// 12 = 0xc
	id _cd_entity;	// 16 = 0x10
	NSManagedObjectContext *_cd_managedObjectContext;	// 20 = 0x14
	NSManagedObjectID *_cd_objectID;	// 24 = 0x18
	id _cd_faultHandler;	// 28 = 0x1c
	id _cd_observationInfo;	// 32 = 0x20
	id *_cd_snapshots;	// 36 = 0x24
	unsigned _cd_lockingInfo;	// 40 = 0x28
	id _cd_queueReference;	// 44 = 0x2c
}
@property(retain) id observationInfo;	// G=0x33e8e149; S=0x33e8e139; converted property
+ (XXStruct_Iy8xuA *)_PFMOClassFactoryData;	// 0x33e402f1
+ (id)_PFPlaceHolderSingleton;	// 0x33e3fd91
+ (id)_PFPlaceHolderSingleton_core;	// 0x33e3fe29
+ (void)_entityDeallocated;	// 0x33e99445
+ (BOOL)_hasOverriddenAwake;	// 0x33e973a9
+ (void)_initializeAccessorStubs;	// 0x33e98879
+ (void)_initializePrimitiveAccessorStubs;	// 0x33e98d85
+ (BOOL)_isGeneratedClass;	// 0x33e399dd
+ (BOOL)_isGeneratedClass_1;	// 0x33e9739d
+ (void)_release_1;	// 0x33e982ad
+ (id)_retain_1;	// 0x33e982cd
+ (char *)_transientPropertiesChangesMask__;	// 0x33e8e0ad
+ (BOOL)_useFastValidationMethod;	// 0x33e973a1
+ (id)alloc;	// 0x33e3fd7d
+ (unsigned)allocBatch:(id *)batch withEntity:(id)entity count:(unsigned)count;	// 0x33e982ed
+ (id)allocWithEntity:(id)entity;	// 0x33e9876d
+ (id)allocWithZone:(NSZone *)zone;	// 0x33e8f1f1
+ (id)allocWithZone_10_4:(NSZone *)zone_10_4;	// 0x33e8fb91
+ (id)alloc_10_4;	// 0x33e8fb9d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x33e8f205
+ (id)batchAllocateWithEntity:(id)entity insertIntoManagedObjectContext:(id)context count:(unsigned)count;	// 0x33e983b1
+ (Class)classForEntity:(id)entity;	// 0x33e399e1
+ (BOOL)contextShouldIgnoreUnmodeledPropertyChanges;	// 0x33e3a6b5
+ (void)initialize;	// 0x33e3987d
+ (void)release;	// 0x33e973a5
+ (BOOL)resolveClassMethod:(SEL)method;	// 0x33e3ff21
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x33e32119
+ (id)retain;	// 0x33e97399
- (id)init;	// 0x33e8fb15
- (id)initWithEntity:(id)entity insertIntoManagedObjectContext:(id)context;	// 0x33e8f849
- (id)_allProperties__;	// 0x33e8ec49
- (int)_batch_release__;	// 0x33e3428d
- (void)_chainNewError:(id)error toOriginalErrorDoublePointer:(id *)originalErrorDoublePointer;	// 0x33e8e8fd
- (id)_changedTransientProperties__;	// 0x33e8fba9
- (void)_clearAllChanges__;	// 0x33e8e225
- (void)_clearPendingChanges__;	// 0x33e8e1cd
- (void)_clearRawPropertiesWithHint:(NSRange)hint;	// 0x33e8f40d
- (void)_clearUnprocessedChanges__;	// 0x33e8e1f9
- (void)_commitPhotoshoperyForRelationshipAtIndex:(unsigned)index newValue:(id)value;	// 0x33e901c1
- (BOOL)_defaultValidation:(id *)validation error:(id *)error;	// 0x33e97391
- (id)_descriptionValues;	// 0x33e94129
- (void)_didChangeValue:(id)value forRelationship:(id)relationship named:(id)named withInverse:(id)inverse;	// 0x33e94a09
- (void)_excludeObject:(id)object fromPropertyWithKey:(id)key andIndex:(unsigned)index;	// 0x33e929fd
- (id)_faultHandler__;	// 0x33e34991
- (id)_generateErrorDetailForKey:(id)key withValue:(id)value;	// 0x33e8e8a5
- (id)_generateErrorWithCode:(int)code andMessage:(id)message forKey:(id)key andValue:(id)value additionalDetail:(id)detail;	// 0x33e8e77d
- (id)_genericMutableSetValueForKey:(id)key withIndex:(long)index flags:(long)flags;	// 0x33e92901
- (void)_genericUpdateFromSnapshot:(id)snapshot;	// 0x33e956cd
- (id)_genericValueForKey:(id)key withIndex:(long)index flags:(long)flags;	// 0x33e36b19
- (BOOL)_hasAnyChanges;	// 0x33e8e20d
- (BOOL)_hasAnyObservers__;	// 0x33e8e1a1
- (BOOL)_hasPendingChanges;	// 0x33e8e1b5
- (BOOL)_hasRetainedStoreResources__;	// 0x33e318cd
- (BOOL)_hasUnprocessedChanges__;	// 0x33e8e1e1
- (id)_implicitObservationInfo;	// 0x33e8ea79
- (void)_includeObject:(id)object intoPropertyWithKey:(id)key andIndex:(unsigned)index;	// 0x33e92b35
- (id)_initWithEntity:(id)entity withID:(id)anId withHandler:(id)handler withContext:(id)context;	// 0x33e8f76d
- (BOOL)_isKindOfEntity:(id)entity;	// 0x33e8e6c1
- (BOOL)_isPendingDeletion__;	// 0x33e8e2f1
- (BOOL)_isPendingInsertion__;	// 0x33e8e335
- (BOOL)_isPendingUpdate__;	// 0x33e8e379
- (BOOL)_isReadOnly__;	// 0x33e8e489
- (BOOL)_isSuppressingChangeNotifications__;	// 0x33e8e239
- (BOOL)_isSuppressingKVO__;	// 0x33e8e27d
- (BOOL)_isUnprocessedDeletion__;	// 0x33e8e3bd
- (BOOL)_isUnprocessedInsertion__;	// 0x33e8e401
- (BOOL)_isUnprocessedUpdate__;	// 0x33e8e445
- (BOOL)_isValidRelationshipDestination__;	// 0x33e8ea11
- (id)_lastSnapshot__;	// 0x33e8e4dd
- (void)_maintainInverseRelationship:(id)relationship forProperty:(id)property forChange:(unsigned)change onSet:(id)set;	// 0x33e90da1
- (void)_maintainInverseRelationship:(id)relationship forProperty:(id)property oldDestination:(id)destination newDestination:(id)destination4;	// 0x33e947fd
- (id)_newAllPropertiesWithRelationshipFaultsIntact__;	// 0x33e8ebf5
- (id)_newChangedValuesForRefresh__;	// 0x33e9028d
- (id)_newCommittedSnapshotValues;	// 0x33e8fd69
- (id)_newPersistentPropertiesForConflictRecordFaultsIntact__;	// 0x33e8eb11
- (id)_newPersistentPropertiesWithRelationshipFaultsIntact__;	// 0x33e8eb59
- (id)_newPropertiesForRetainedTypes:(unsigned *)retainedTypes andCopiedTypes:(unsigned *)types preserveFaults:(BOOL)faults;	// 0x33e90631
- (id)_newSnapshotForUndo__;	// 0x33e9705d
- (void)_nilOutReservedCurrentEventSnapshot__;	// 0x33e8ecf1
- (id)_originalSnapshot__;	// 0x33e8e53d
- (id)_persistentProperties__;	// 0x33e8eba1
- (void)_prepropagateDeleteForMerge;	// 0x33e8e9e1
- (void)_propagateDelete;	// 0x33e8e9f9
- (void)_propagateDelete:(BOOL)aDelete;	// 0x33e94d81
- (id)_referenceQueue__;	// 0x33e34261
- (id)_reservedCurrentEventSnapshot;	// 0x33e8e4f1
- (void)_setFaultHandler__:(id)_;	// 0x33e8e551
- (void)_setGenericValue:(id)value forKey:(id)key withIndex:(long)index flags:(long)flags;	// 0x33e98185
- (void)_setHasRetainedStoreResources__:(BOOL)_;	// 0x33e8e2c1
- (void)_setLastSnapshot__:(id)_;	// 0x33e92871
- (void)_setManagedObjectContext__:(id)_;	// 0x33e8e52d
- (void)_setObjectID__:(id)_;	// 0x33e8ecb5
- (void)_setOriginalSnapshot__:(id)_;	// 0x33e92815
- (void)_setPendingDeletion__:(BOOL)_;	// 0x33e8e305
- (void)_setPendingInsertion__:(BOOL)_;	// 0x33e8e349
- (void)_setPendingUpdate__:(BOOL)_;	// 0x33e8e38d
- (void)_setReadOnly__:(BOOL)_;	// 0x33e8e49d
- (void)_setSuppressingChangeNotifications__:(BOOL)_;	// 0x33e8e24d
- (void)_setSuppressingKVO__:(BOOL)_;	// 0x33e8e291
- (void)_setUnprocessedDeletion__:(BOOL)_;	// 0x33e8e3d1
- (void)_setUnprocessedInsertion__:(BOOL)_;	// 0x33e8e415
- (void)_setUnprocessedUpdate__:(BOOL)_;	// 0x33e8e459
- (void)_setVersionReference__:(unsigned)_;	// 0x33e8e51d
- (unsigned)_stateFlags;	// 0x33e8e4cd
- (id)_substituteEntityAndProperty:(id)property inString:(id)string;	// 0x33e94541
- (id)_transientProperties__;	// 0x33e8eab9
- (void)_updateFromRefreshSnapshot:(id)refreshSnapshot;	// 0x33e8e561
- (void)_updateFromSnapshot:(id)snapshot;	// 0x33e95ce1
- (void)_updateFromToManyAwareSnapshot:(id)manyAwareSnapshot forUndo:(BOOL)undo;	// 0x33e95fc9
- (void)_updateFromUndoSnapshot:(id)undoSnapshot;	// 0x33e8ec9d
- (void)_updateToManyRelationship:(id)manyRelationship from:(id)from to:(id)to with:(id)with;	// 0x33e8e579
- (BOOL)_validateForSave:(id *)save;	// 0x33e8e6f5
- (BOOL)_validatePropertiesWithError:(id *)error;	// 0x33e96ed9
- (BOOL)_validateValue:(id *)value forProperty:(id)property andKey:(id)key withIndex:(unsigned)index error:(id *)error;	// 0x33e968cd
- (unsigned)_versionReference__;	// 0x33e8e50d
- (void)awakeFromFetch;	// 0x33e8e15d
- (void)awakeFromInsert;	// 0x33e8e161
- (void)awakeFromSnapshotEvents:(unsigned)snapshotEvents;	// 0x33e8e165
- (id)changedValues;	// 0x33e90b01
- (id)changedValuesForCurrentEvent;	// 0x33e90849
- (id)committedValuesForKeys:(id)keys;	// 0x33e91281
- (void)dealloc;	// 0x33e8f555
- (id)description;	// 0x33e8f2f1
- (id)dictionaryWithValuesForKeys:(id)keys;	// 0x33e91a89
- (void)didAccessValueForKey:(id)key;	// 0x33e8e159
- (void)didChange:(unsigned)change valuesAtIndexes:(id)indexes forKey:(id)key;	// 0x33e8f235
- (void)didChangeValueForKey:(id)key;	// 0x33e8f2a1
- (void)didChangeValueForKey:(id)key withSetMutation:(unsigned)setMutation usingObjects:(id)objects;	// 0x33e8f105
- (void)didFireFault;	// 0x33e8e195
- (void)didRefresh:(BOOL)refresh;	// 0x33e8e19d
- (void)didSave;	// 0x33e8e171
- (void)didTurnIntoFault;	// 0x33e8e179
- (id)entity;	// 0x33e8e0fd
- (unsigned)faultingState;	// 0x33e8e17d
- (void)finalize;	// 0x33e8f3b9
- (BOOL)hasFaultForRelationshipNamed:(id)relationshipNamed;	// 0x33e93eb9
- (unsigned)hash;	// 0x33e8e0b1
- (BOOL)implementsSelector:(SEL)selector;	// 0x33e97439
- (BOOL)isDeleted;	// 0x33e8f179
- (BOOL)isEqual:(id)equal;	// 0x33e8e0e1
- (BOOL)isFault;	// 0x33e8e125
- (BOOL)isInserted;	// 0x33e8e10d
- (BOOL)isUpdated;	// 0x33e8f1b5
- (id)managedObjectContext;	// 0x33e35e39
- (/*function-pointer*/ void *)methodForSelector:(SEL)selector;	// 0x33e974b5
- (id)methodSignatureForSelector:(SEL)selector;	// 0x33e9753d
- (id)mutableArrayValueForKey:(id)key;	// 0x33e8f669
- (id)mutableSetValueForKey:(id)key;	// 0x33e94675
- (id)objectID;	// 0x33e344b5
// converted property getter: - (id)observationInfo;	// 0x33e8e149
- (void)prepareForDeletion;	// 0x33e8e169
- (id)primitiveValueForKey:(id)key;	// 0x33e8ff29
- (void)release;	// 0x33e35165
- (BOOL)respondsToSelector:(SEL)selector;	// 0x33e973cd
- (id)retain;	// 0x33e318b1
- (unsigned)retainCount;	// 0x33e8e0ed
- (void)setNilValueForKey:(id)key;	// 0x33e8ed21
// converted property setter: - (void)setObservationInfo:(id)info;	// 0x33e8e139
- (void)setPrimitiveValue:(id)value forKey:(id)key;	// 0x33e926a1
- (void)setValue:(id)value forKey:(id)key;	// 0x33e9261d
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x33e8edad
- (void)setValuesForKeysWithDictionary:(id)dictionary;	// 0x33e92071
- (BOOL)validateForDelete:(id *)aDelete;	// 0x33e96351
- (BOOL)validateForInsert:(id *)insert;	// 0x33e8f055
- (BOOL)validateForUpdate:(id *)update;	// 0x33e8f011
- (BOOL)validateValue:(id *)value forKey:(id)key error:(id *)error;	// 0x33e90151
- (id)valueForKey:(id)key;	// 0x33e369f9
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x33e8eedd
- (void)willAccessValueForKey:(id)key;	// 0x33e9001d
- (void)willChange:(unsigned)change valuesAtIndexes:(id)indexes forKey:(id)key;	// 0x33e900bd
- (void)willChangeValueForKey:(id)key;	// 0x33e93e3d
- (void)willChangeValueForKey:(id)key withSetMutation:(unsigned)setMutation usingObjects:(id)objects;	// 0x33e93c71
- (void)willFireFault;	// 0x33e8e191
- (void)willRefresh:(BOOL)refresh;	// 0x33e8e199
- (void)willSave;	// 0x33e8e16d
- (void)willTurnIntoFault;	// 0x33e8e175
@end

