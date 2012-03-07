/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSPersistentStoreCache : NSObject {
@private
	id _externalData;	// 4 = 0x4
	unsigned _capacity;	// 8 = 0x8
}
+ (void)initialize;	// 0x330ec8f9
- (id)init;	// 0x330cd835
- (void)_growRegistrationCollectionTo:(unsigned)to;	// 0x3315ab3d
- (void)dealloc;	// 0x330e4d5d
- (void)decrementRefCountForObjectID:(id)objectID;	// 0x330e2335
- (id)externalDataForObjectID:(id)objectID timestamp:(double)timestamp;	// 0x330dfb69
- (id)externalDataForSourceObjectID:(id)sourceObjectID key:(id)key timestamp:(double)timestamp;	// 0x3315ab41
- (void)forgetAllExternalData;	// 0x3315ac6d
- (void)forgetExternalDataForObjectID:(id)objectID;	// 0x330e2399
- (void)incrementRefCountForObjectID:(id)objectID;	// 0x3315ac41
- (unsigned)optionsForObjectID:(id)objectID;	// 0x3315abe9
- (int)refCountForObjectID:(id)objectID;	// 0x3315ac15
- (void)registerExternalData:(id)data forObjectID:(id)objectID options:(unsigned)options;	// 0x330da97d
- (void)registerExternalData:(id)data forSourceObjectID:(id)sourceObjectID key:(id)key options:(unsigned)options andTimestamp:(double)timestamp;	// 0x3315aba9
@end
