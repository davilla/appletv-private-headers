/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import "NoteCollectionObject.h"
#import "Notes-Structs.h"

@class NoteAccountObject, NSString, NSSet;

@interface NoteStoreObject : NoteCollectionObject {
}
@property(retain, nonatomic) NoteAccountObject *account;	// @dynamic
@property(retain, nonatomic) NSSet *changes;	// @dynamic
@property(retain, nonatomic) NSString *externalIdentifier;	// @dynamic
@property(retain, nonatomic) NSString *name;	// @dynamic
@property(retain, nonatomic) NSString *syncAnchor;	// @dynamic
- (id)basicAccountIdentifier;	// 0x31d738e1
- (id)collectionInfo;	// 0x31d73905
- (unsigned)maximumServerIntId;	// 0x31d73eb9
- (id)notesForGUIDs:(id)guids;	// 0x31d73bd1
- (id)notesForIntegerIds:(id)integerIds;	// 0x31d73cc9
- (id)notesForServerIds:(id)serverIds;	// 0x31d73dc1
- (id)notesForServerIntIds:(id)serverIntIds;	// 0x31d73ad9
- (id)notesForServerIntIdsInRange:(NSRange)range;	// 0x31d739d5
- (id)predicateForNotes;	// 0x31d739ad
@end

