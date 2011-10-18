/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@protocol NSObject;

@interface DAAction : NSObject <NSCoding> {
	int _itemChangeType;	// 4 = 0x4
	id _serverId;	// 8 = 0x8
	id<NSObject, NSCoding> _changedItem;	// 12 = 0xc
	int _changeId;	// 16 = 0x10
}
@property(assign) int changeId;	// G=0x322572b5; S=0x322572c5; @synthesize=_changeId
@property(retain, nonatomic) id changedItem;	// G=0x32257295; @synthesize=_changedItem
@property(readonly, assign) int itemChangeType;	// G=0x32257285; @synthesize=_itemChangeType
@property(readonly, assign, nonatomic) id serverId;	// G=0x322572a5; @synthesize=_serverId
- (id)initWithCoder:(id)coder;	// 0x32256ec5
- (id)initWithItemChangeType:(int)itemChangeType changedItem:(id)item serverId:(id)anId;	// 0x32256c81
- (void)_setChangedItem:(id)item;	// 0x32256d19
// declared property getter: - (int)changeId;	// 0x322572b5
// declared property getter: - (id)changedItem;	// 0x32257295
- (ASContact *)contact;	// 0x32253ac1
- (void)dealloc;	// 0x32256c21
- (id)deletedContactID;	// 0x32253aad
- (id)deletedEventID;	// 0x32253a79
- (id)deletedToDoID;	// 0x3225d8d1
- (id)description;	// 0x32256de5
- (void)encodeWithCoder:(id)coder;	// 0x3225703d
- (ASEvent *)event;	// 0x32253a8d
- (unsigned)hash;	// 0x32257175
- (BOOL)isEqual:(id)equal;	// 0x322571b5
// declared property getter: - (int)itemChangeType;	// 0x32257285
- (id)message;	// 0x3225bcad
// declared property getter: - (id)serverId;	// 0x322572a5
// declared property setter: - (void)setChangeId:(int)anId;	// 0x322572c5
- (id)stringForItemChangeType:(int)itemChangeType;	// 0x32256d5d
- (ASToDo *)toDo;	// 0x3225d8e5
@end

