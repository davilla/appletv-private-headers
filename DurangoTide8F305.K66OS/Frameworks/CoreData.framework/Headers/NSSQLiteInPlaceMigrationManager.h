/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSMigrationManager.h"
#import "CoreData-Structs.h"


__attribute__((visibility("hidden")))
@interface NSSQLiteInPlaceMigrationManager : NSMigrationManager {
}
+ (BOOL)_canMigrateWithMappingModel:(id)mappingModel;	// 0x34368249
- (void)dealloc;	// 0x3436821d
- (BOOL)migrateStoreFromURL:(id)url type:(id)type options:(id)options withMappingModel:(id)mappingModel toDestinationURL:(id)destinationURL destinationType:(id)type6 destinationOptions:(id)options7 error:(id *)error;	// 0x34368269
@end

