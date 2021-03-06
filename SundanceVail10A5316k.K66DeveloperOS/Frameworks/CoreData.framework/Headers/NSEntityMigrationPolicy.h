/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


@interface NSEntityMigrationPolicy : NSObject {
}
- (id)_nonNilValueOrDefaultValueForAttribute:(id)attribute source:(id)source destination:(id)destination;	// 0x32d5f2e9
- (BOOL)beginEntityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x32d5e669
- (BOOL)createDestinationInstancesForSourceInstance:(id)sourceInstance entityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x32d5e66d
- (BOOL)createRelationshipsForDestinationInstance:(id)destinationInstance entityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x32d5e91d
- (BOOL)endEntityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x32d5f2e5
- (BOOL)endInstanceCreationForEntityMapping:(id)entityMapping manager:(id)manager error:(id *)error;	// 0x32d5e919
- (BOOL)endRelationshipCreationForEntityMapping:(id)entityMapping manager:(id)manager error:(id *)error;	// 0x32d5f2dd
- (BOOL)performCustomValidationForEntityMapping:(id)entityMapping manager:(id)manager error:(id *)error;	// 0x32d5f2e1
@end

