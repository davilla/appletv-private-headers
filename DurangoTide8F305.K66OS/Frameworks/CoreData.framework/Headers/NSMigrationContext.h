/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMigrationManager, NSEntityMapping, NSMutableDictionary, NSPropertyMapping;

__attribute__((visibility("hidden")))
@interface NSMigrationContext : NSObject {
@private
	NSMutableDictionary *_bySourceAssociationTable;	// 4 = 0x4
	NSMutableDictionary *_byDestinationAssociationTable;	// 8 = 0x8
	NSMutableDictionary *_byMappingBySourceAssociationTable;	// 12 = 0xc
	NSMutableDictionary *_byMappingByDestinationAssociationTable;	// 16 = 0x10
	NSMigrationManager *_migrationManager;	// 20 = 0x14
	NSEntityMapping *_currentMapping;	// 24 = 0x18
	unsigned _currentStep;	// 28 = 0x1c
	NSPropertyMapping *_currentPropertyMapping;	// 32 = 0x20
}
@property(retain) id currentEntityMapping;	// G=0x34324d95; S=0x34324fdd; converted property
@property(assign) unsigned currentMigrationStep;	// G=0x34324db5; S=0x34324f01; converted property
@property(retain) NSPropertyMapping *currentPropertyMapping;	// G=0x34324da5; S=0x34324f59; converted property
- (id)initWithMigrationManager:(id)migrationManager;	// 0x34324dc5
- (void)_createAssociationsByDestination:(id)destination fromSource:(id)source forEntityMapping:(id)entityMapping;	// 0x34325199
- (void)_createAssociationsBySource:(id)source withDestination:(id)destination forEntityMapping:(id)entityMapping;	// 0x34325339
- (void)associateSourceInstance:(id)instance withDestinationInstance:(id)destinationInstance forEntityMapping:(id)entityMapping;	// 0x34324eb9
- (void)clearAssociationTables;	// 0x3432507d
// converted property getter: - (id)currentEntityMapping;	// 0x34324d95
// converted property getter: - (unsigned)currentMigrationStep;	// 0x34324db5
// converted property getter: - (id)currentPropertyMapping;	// 0x34324da5
- (void)dealloc;	// 0x34325109
- (id)destinationInstancesForEntityMapping:(id)entityMapping sourceInstance:(id)instance;	// 0x34325689
// converted property setter: - (void)setCurrentEntityMapping:(id)mapping;	// 0x34324fdd
// converted property setter: - (void)setCurrentMigrationStep:(unsigned)step;	// 0x34324f01
// converted property setter: - (void)setCurrentPropertyMapping:(id)mapping;	// 0x34324f59
- (id)sourceInstancesForEntityMapping:(id)entityMapping destinationInstance:(id)instance;	// 0x343254d9
@end

